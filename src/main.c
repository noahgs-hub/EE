#include "global.h"
#include "crt0.h"
#include "malloc.h"
#include "link.h"
#include "link_rfu.h"
#include "librfu.h"
#include "m4a.h"
#include "gba/m4a_internal.h"
#include "bg.h"
#include "rtc.h"
#include "scanline_effect.h"
#include "overworld.h"
#include "play_time.h"
#include "random.h"
#include "dma3.h"
#include "gba/flash_internal.h"
#include "load_save.h"
#include "gpu_regs.h"
#include "agb_flash.h"
#include "sound.h"
#include "battle.h"
#include "battle_controllers.h"
#include "text.h"
#include "intro.h"
#include "main.h"
#include "trainer_hill.h"
#include "test_runner.h"
#include "constants/rgb.h"
#include "constants/songs.h"

static void VBlankIntr(void);
static void HBlankIntr(void);
static void VCountIntr(void);
static void SerialIntr(void);
static void IntrDummy(void);

// Defined in the linker script so that the test build can override it.
extern void gInitialMainCB2(void);
extern void CB2_FlashNotDetectedScreen(void);

const enum GameVersion gGameVersion = GAME_VERSION;

const enum Language gGameLanguage = GAME_LANGUAGE; // English

const char BuildDateTime[] = "2005 02 21 11:10";

const IntrFunc gIntrTableTemplate[] =
{
    VCountIntr, // V-count interrupt
    SerialIntr, // Serial interrupt
    Timer3Intr, // Timer 3 interrupt
    HBlankIntr, // H-blank interrupt
    VBlankIntr, // V-blank interrupt
    IntrDummy,  // Timer 0 interrupt
    IntrDummy,  // Timer 1 interrupt
    IntrDummy,  // Timer 2 interrupt
    IntrDummy,  // DMA 0 interrupt
    IntrDummy,  // DMA 1 interrupt
    IntrDummy,  // DMA 2 interrupt
    IntrDummy,  // DMA 3 interrupt
    IntrDummy,  // Key interrupt
    IntrDummy,  // Game Pak interrupt
};

#define INTR_COUNT ((int)(sizeof(gIntrTableTemplate)/sizeof(IntrFunc)))

COMMON_DATA u16 gKeyRepeatStartDelay = 0;
COMMON_DATA bool8 gLinkTransferringData = 0;
COMMON_DATA struct Main gMain = {0};
COMMON_DATA u16 gKeyRepeatContinueDelay = 0;
COMMON_DATA bool8 gSoftResetDisabled = 0;
COMMON_DATA IntrFunc gIntrTable[INTR_COUNT] = {0};
COMMON_DATA u8 gLinkVSyncDisabled = 0;
COMMON_DATA s8 gPcmDmaCounter = 0;
COMMON_DATA void *gAgbMainLoop_sp = NULL;

static EWRAM_DATA u16 sTrainerId = 0;
#if OPT_GAME_SPEED == TRUE
static EWRAM_DATA u8 sLastGameSpeedSteps = 0;
#endif

//EWRAM_DATA void (**gFlashTimerIntrFunc)(void) = NULL;

static void UpdateLinkAndCallCallbacks(void);
static void InitMainCallbacks(void);
static void CallCallbacks(void);
#ifdef BUGFIX
static void SeedRngWithRtc(void);
#endif
static void ReadKeys(void);
static u32 GetGameSpeedSteps(void);
static void TryCycleGameSpeedHotkey(void);
static void UpdateMusicTempoForGameSpeed(u32 steps);
void InitIntrHandlers(void);
static void WaitForVBlank(void);
void EnableVCountIntrAtLine150(void);

#define B_START_SELECT (B_BUTTON | START_BUTTON | SELECT_BUTTON)

void AgbMain(void)
{
    *(vu16 *)BG_PLTT = RGB_WHITE; // Set the backdrop to white on startup
    InitGpuRegManager();
    REG_WAITCNT = WAITCNT_PREFETCH_ENABLE
            | WAITCNT_WS0_S_1 | WAITCNT_WS0_N_3
            | WAITCNT_WS1_S_1 | WAITCNT_WS1_N_3;
    InitKeys();
    InitIntrHandlers();
    m4aSoundInit();
    EnableVCountIntrAtLine150();
    InitRFU();
    RtcInit();
    CheckForFlashMemory();
    InitMainCallbacks();
    InitMapMusic();
#ifdef BUGFIX
    SeedRngWithRtc(); // see comment at SeedRngWithRtc definition below
#endif
    ClearDma3Requests();
    ResetBgs();
    SetDefaultFontsPointer();
    InitHeap(gHeap, HEAP_SIZE);

    gSoftResetDisabled = FALSE;

    if (gFlashMemoryPresent != TRUE)
        SetMainCallback2(CB2_FlashNotDetectedScreen);

    gLinkTransferringData = FALSE;

#ifndef NDEBUG
#if (LOG_HANDLER == LOG_HANDLER_MGBA_PRINT)
    (void) MgbaOpen();
#elif (LOG_HANDLER == LOG_HANDLER_AGB_PRINT)
    AGBPrintInit();
#endif
#endif
    gAgbMainLoop_sp = __builtin_frame_address(0);
    AgbMainLoop();
}

void AgbMainLoop(void)
{
    for (;;)
    {
        u32 steps = GetGameSpeedSteps();
        u32 step;

        // Whole-game speed: run the logic step multiple times per hardware frame.
        // Only the logic is multiplied - the frame wait below, and with it the
        // sound engine driven from VBlankIntr/VCountIntr, still runs at 60 Hz.
        for (step = 0; step < steps; step++)
        {
            ReadKeys();

            if (gSoftResetDisabled == FALSE
             && JOY_HELD_RAW(A_BUTTON)
             && JOY_HELD_RAW(B_START_SELECT) == B_START_SELECT)
            {
                rfu_REQ_stopMode();
                rfu_waitREQComplete();
                DoSoftReset();
            }

            TryCycleGameSpeedHotkey();

            if (Overworld_SendKeysToLinkIsRunning() == TRUE)
            {
                gLinkTransferringData = TRUE;
                UpdateLinkAndCallCallbacks();
                gLinkTransferringData = FALSE;
            }
            else
            {
                gLinkTransferringData = FALSE;
                UpdateLinkAndCallCallbacks();

                if (Overworld_RecvKeysFromLinkIsRunning() == TRUE)
                {
                    gMain.newKeys = 0;
                    ClearSpriteCopyRequests();
                    gLinkTransferringData = TRUE;
                    UpdateLinkAndCallCallbacks();
                    gLinkTransferringData = FALSE;
                }
            }
        }

        // Kept at one call per real frame: play time stays wall-clock accurate
        // and music fades keep their normal duration.
        PlayTimeCounter_Update();
        MapMusicMain();
        UpdateMusicTempoForGameSpeed(steps);
        WaitForVBlank();
    }
}

// How many logic steps to run per hardware frame. Always 1 while linking, since
// the link protocol expects exactly one transfer per frame.
static u32 GetGameSpeedSteps(void)
{
#if OPT_GAME_SPEED == TRUE
    if (gTestRunnerEnabled)
        return 1;

    if (gWirelessCommType != 0 || gReceivedRemoteLinkPlayers || IsLinkConnectionEstablished())
        return 1;

    switch (gSaveBlock2Ptr->optionsGameSpeed)
    {
    case OPTIONS_GAME_SPEED_2X:
        return 2;
    case OPTIONS_GAME_SPEED_3X:
        return 3;
    default:
        return 1;
    }
#else
    return 1;
#endif
}

// L cycles the game speed, but only in the field and in battle - those are the
// only places L has no job of its own. The PC (box scrolling), the summary
// screen, the stat editor and the options menu all keep their own L behavior,
// and the setting is still changeable from the options menu everywhere.
static void TryCycleGameSpeedHotkey(void)
{
#if OPT_GAME_SPEED == TRUE
    if (!JOY_NEW(L_BUTTON))
        return;

    // L stands in for A in the other two button modes.
    if (gSaveBlock2Ptr->optionsButtonMode != OPTIONS_BUTTON_MODE_NORMAL)
        return;

    if (!gMain.inBattle && gMain.callback2 != CB2_Overworld)
        return;

    if (gSaveBlock2Ptr->optionsGameSpeed < OPTIONS_GAME_SPEED_3X)
        gSaveBlock2Ptr->optionsGameSpeed++;
    else
        gSaveBlock2Ptr->optionsGameSpeed = OPTIONS_GAME_SPEED_1X;

    PlaySE(SE_SELECT);
#endif
}

// Speeds the sequencer up to match the game speed. This only changes tempo, not
// the sample rate, so pitch is unaffected and the mixer is left alone.
static void UpdateMusicTempoForGameSpeed(u32 steps)
{
#if OPT_GAME_SPEED == TRUE && OPT_GAME_SPEED_MUSIC_TEMPO == TRUE
    if (steps > 1)
    {
        // Re-applied every frame because starting a new song resets tempoU.
        m4aMPlayTempoControl(&gMPlayInfo_BGM, 0x100 * steps);
    }
    else if (sLastGameSpeedSteps > 1)
    {
        // Restore once on the way back down, so code that drives the tempo
        // itself (e.g. the Berry Blender) is left untouched at normal speed.
        m4aMPlayTempoControl(&gMPlayInfo_BGM, 0x100);
    }

    sLastGameSpeedSteps = steps;
#endif
}

static void UpdateLinkAndCallCallbacks(void)
{
    if (!HandleLinkConnection())
        CallCallbacks();
}

static void InitMainCallbacks(void)
{
    gMain.vblankCounter1 = 0;
    gTrainerHillVBlankCounter = NULL;
    gMain.vblankCounter2 = 0;
    gMain.callback1 = NULL;
    SetMainCallback2(gInitialMainCB2);
    gSaveBlock2Ptr = &gSaveblock2.block;
    gPokemonStoragePtr = &gPokemonStorage.block;
}

static void CallCallbacks(void)
{
    if (gMain.callback1)
        gMain.callback1();

    if (gMain.callback2)
        gMain.callback2();
}

void SetMainCallback2(MainCallback callback)
{
    gMain.callback2 = callback;
    gMain.state = 0;
}

void StartTimer1(void)
{

    REG_TM2CNT_L = 0;
    REG_TM2CNT_H = TIMER_ENABLE | TIMER_COUNTUP;
    REG_TM1CNT_H = TIMER_ENABLE;
}

void SeedRngAndSetTrainerId(void)
{
    u32 val;

    REG_TM1CNT_H = 0;
    REG_TM2CNT_H = 0;
    val = ((u32)REG_TM2CNT_L) << 16;
    val |= REG_TM1CNT_L;
    SeedRng(val);
    sTrainerId = Random();
}

u16 GetGeneratedTrainerIdLower(void)
{
    return sTrainerId;
}

void EnableVCountIntrAtLine150(void)
{
    u16 gpuReg = (GetGpuReg(REG_OFFSET_DISPSTAT) & 0xFF) | (150 << 8);
    SetGpuReg(REG_OFFSET_DISPSTAT, gpuReg | DISPSTAT_VCOUNT_INTR);
    EnableInterrupts(INTR_FLAG_VCOUNT);
}

// FRLG commented this out to remove RTC, however Emerald didn't undo this!
#ifdef BUGFIX
static void SeedRngWithRtc(void)
{
    #define BCD8(x) ((((x) >> 4) & 0xF) * 10 + ((x) & 0xF))
    u32 seconds;
    struct SiiRtcInfo rtc;
    RtcGetInfo(&rtc);
    seconds =
        ((HOURS_PER_DAY * RtcGetDayCount(&rtc) + BCD8(rtc.hour))
        * MINUTES_PER_HOUR + BCD8(rtc.minute))
        * SECONDS_PER_MINUTE + BCD8(rtc.second);
    SeedRng(seconds);
    #undef BCD8
}
#endif

void InitKeys(void)
{
    gKeyRepeatContinueDelay = 5;
    gKeyRepeatStartDelay = 40;

    gMain.heldKeys = 0;
    gMain.newKeys = 0;
    gMain.newAndRepeatedKeys = 0;
    gMain.heldKeysRaw = 0;
    gMain.newKeysRaw = 0;
}

static void ReadKeys(void)
{
    u16 keyInput = REG_KEYINPUT ^ KEYS_MASK;
    gMain.newKeysRaw = keyInput & ~gMain.heldKeysRaw;
    gMain.newKeys = gMain.newKeysRaw;
    gMain.newAndRepeatedKeys = gMain.newKeysRaw;

    // BUG: Key repeat won't work when pressing L using L=A button mode
    // because it compares the raw key input with the remapped held keys.
    // Note that newAndRepeatedKeys is never remapped either.

    if (keyInput != 0 && gMain.heldKeys == keyInput)
    {
        gMain.keyRepeatCounter--;

        if (gMain.keyRepeatCounter == 0)
        {
            gMain.newAndRepeatedKeys = keyInput;
            gMain.keyRepeatCounter = gKeyRepeatContinueDelay;
        }
    }
    else
    {
        // If there is no input or the input has changed, reset the counter.
        gMain.keyRepeatCounter = gKeyRepeatStartDelay;
    }

    gMain.heldKeysRaw = keyInput;
    gMain.heldKeys = gMain.heldKeysRaw;

    // Remap L to A if the L=A option is enabled.
    if (gSaveBlock2Ptr->optionsButtonMode == OPTIONS_BUTTON_MODE_L_EQUALS_A)
    {
        if (JOY_NEW(L_BUTTON))
            gMain.newKeys |= A_BUTTON;

        if (JOY_HELD(L_BUTTON))
            gMain.heldKeys |= A_BUTTON;
    }

    if (JOY_NEW(gMain.watchedKeysMask))
        gMain.watchedKeysPressed = TRUE;
}

void InitIntrHandlers(void)
{
    int i;

    for (i = 0; i < INTR_COUNT; i++)
        gIntrTable[i] = gIntrTableTemplate[i];

    INTR_VECTOR = IntrMain;

    SetVBlankCallback(NULL);
    SetHBlankCallback(NULL);
    SetSerialCallback(NULL);

    REG_IME = 1;

    EnableInterrupts(INTR_FLAG_VBLANK);
}

void SetVBlankCallback(IntrCallback callback)
{
    gMain.vblankCallback = callback;
}

void SetHBlankCallback(IntrCallback callback)
{
    gMain.hblankCallback = callback;
}

void SetVCountCallback(IntrCallback callback)
{
    gMain.vcountCallback = callback;
}

void RestoreSerialTimer3IntrHandlers(void)
{
    gIntrTable[1] = SerialIntr;
    gIntrTable[2] = Timer3Intr;
}

void SetSerialCallback(IntrCallback callback)
{
    gMain.serialCallback = callback;
}

static void VBlankIntr(void)
{
    if (gWirelessCommType != 0)
        RfuVSync();
    else if (gLinkVSyncDisabled == FALSE)
        LinkVSync();

    gMain.vblankCounter1++;

    if (gTrainerHillVBlankCounter && *gTrainerHillVBlankCounter < 0xFFFFFFFF)
        (*gTrainerHillVBlankCounter)++;

    if (gMain.vblankCallback)
        gMain.vblankCallback();

    gMain.vblankCounter2++;

    CopyBufferedValuesToGpuRegs();
    ProcessDma3Requests();

    gPcmDmaCounter = gSoundInfo.pcmDmaCounter;

    m4aSoundMain();
    TryReceiveLinkBattleData();

    if (!gTestRunnerEnabled && (!gMain.inBattle || !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_FRONTIER | BATTLE_TYPE_RECORDED))))
        AdvanceRandom();

    UpdateWirelessStatusIndicatorSprite();

    INTR_CHECK |= INTR_FLAG_VBLANK;
    gMain.intrCheck |= INTR_FLAG_VBLANK;
}

void InitFlashTimer(void)
{
    SetFlashTimerIntr(2, gIntrTable + 0x7);
}

static void HBlankIntr(void)
{
    if (gMain.hblankCallback)
        gMain.hblankCallback();

    INTR_CHECK |= INTR_FLAG_HBLANK;
    gMain.intrCheck |= INTR_FLAG_HBLANK;
}

static void VCountIntr(void)
{
    if (gMain.vcountCallback)
        gMain.vcountCallback();

    m4aSoundVSync();
    INTR_CHECK |= INTR_FLAG_VCOUNT;
    gMain.intrCheck |= INTR_FLAG_VCOUNT;
}

static void SerialIntr(void)
{
    if (gMain.serialCallback)
        gMain.serialCallback();

    INTR_CHECK |= INTR_FLAG_SERIAL;
    gMain.intrCheck |= INTR_FLAG_SERIAL;
}

static void IntrDummy(void)
{}

static void WaitForVBlank(void)
{
    gMain.intrCheck &= ~INTR_FLAG_VBLANK;

    if (gWirelessCommType != 0)
    {
        // Desynchronization may occur if wireless adapter is connected
        // and we call VBlankIntrWait();
        while (!(gMain.intrCheck & INTR_FLAG_VBLANK))
            ;
    }
    else
    {
        VBlankIntrWait();
    }
}

void SetTrainerHillVBlankCounter(u32 *counter)
{
    gTrainerHillVBlankCounter = counter;
}

void ClearTrainerHillVBlankCounter(void)
{
    gTrainerHillVBlankCounter = NULL;
}

void DoSoftReset(void)
{
    REG_IME = 0;
    m4aSoundVSyncOff();
    ScanlineEffect_Stop();
    DmaStop(1);
    DmaStop(2);
    DmaStop(3);
    SiiRtcProtect();
    SoftReset(RESET_ALL);
}

void ClearPokemonCrySongs(void)
{
    CpuFill16(0, gPokemonCrySongs, MAX_POKEMON_CRIES * sizeof(struct PokemonCrySong));
}
