#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "item_menu.h"
#include "pokemon.h"
#include "test/overworld_script.h"
#include "test/test.h"

TEST("TMs and HMs are sorted correctly in the bag")
{
    struct BagPocket *pocket = &gBagPockets[POCKET_TM_HM];

    ASSUME(GetItemPocket(ITEM_HM07) == POCKET_TM_HM);
    ASSUME(GetItemPocket(ITEM_TM25) == POCKET_TM_HM);
    ASSUME(GetItemPocket(ITEM_TM14) == POCKET_TM_HM);
    ASSUME(GetItemPocket(ITEM_TM42) == POCKET_TM_HM);
    ASSUME(GetItemPocket(ITEM_HM05) == POCKET_TM_HM);
    ASSUME(GetItemPocket(ITEM_TM05) == POCKET_TM_HM);
    ASSUME(GetItemPocket(ITEM_TM01) == POCKET_TM_HM);
    ASSUME(GetItemPocket(ITEM_HM02) == POCKET_TM_HM);

    /*
     * Note: I would add a test to make sure that TMs are sorted correctly by move name,
     * but downstream users are likely to rearrange TMs so this would just be a nuisance.
     */

    RUN_OVERWORLD_SCRIPT(
        additem ITEM_HM07;
        additem ITEM_TM25;
        additem ITEM_TM14;
        additem ITEM_TM42;
        additem ITEM_HM05;
        additem ITEM_TM05;
        additem ITEM_TM01;
        additem ITEM_HM02;
    );

    SortItemsInBag(&gBagPockets[POCKET_TM_HM], SORT_BY_INDEX);

    // The TM pocket stores bare u16 item ids, not ItemSlots, so it must be read
    // through the accessors — raw itemSlots[] reads would use the wrong stride.
    EXPECT_EQ(GetBagItemId(POCKET_TM_HM, 0), ITEM_TM01);
    EXPECT_EQ(GetBagItemId(POCKET_TM_HM, 1), ITEM_TM05);
    EXPECT_EQ(GetBagItemId(POCKET_TM_HM, 2), ITEM_TM14);
    EXPECT_EQ(GetBagItemId(POCKET_TM_HM, 3), ITEM_TM25);
    EXPECT_EQ(GetBagItemId(POCKET_TM_HM, 4), ITEM_TM42);
    EXPECT_EQ(GetBagItemId(POCKET_TM_HM, 5), ITEM_HM02);
    EXPECT_EQ(GetBagItemId(POCKET_TM_HM, 6), ITEM_HM05);
    EXPECT_EQ(GetBagItemId(POCKET_TM_HM, 7), ITEM_HM07);
    EXPECT_EQ(GetBagItemId(POCKET_TM_HM, 8), ITEM_NONE);
}

// Reproduces the in-game report: buy every TM and HM (pocket completely full at
// BAG_TMHM_COUNT == NUM_ALL_MACHINES), then use the bag's sort options. The
// full pocket is the interesting case: every merge step runs at the pocket
// boundary, and the bag list gains its longest possible item list.
static u32 CountValidMachines(void)
{
    u32 i, owned = 0;
    for (i = 0; i < gBagPockets[POCKET_TM_HM].capacity; i++)
    {
        u16 itemId = GetBagItemId(POCKET_TM_HM, i);
        if (itemId != ITEM_NONE)
        {
            if (GetItemTMHMIndex(itemId) == 0) // not a real TM/HM -> corrupted
                return 0xFFFF;
            owned++;
        }
    }
    return owned;
}

TEST("TM pocket: filling completely and sorting keeps every machine intact")
{
    u32 i;
    struct BagPocket *pocket = &gBagPockets[POCKET_TM_HM];

    ASSUME(pocket->capacity == NUM_ALL_MACHINES);

    for (i = 1; i <= NUM_ALL_MACHINES; i++)
        EXPECT(AddBagItem(GetTMHMItemId(i), 1));
    EXPECT_EQ(CountValidMachines(), NUM_ALL_MACHINES);

    SortItemsInBag(pocket, SORT_ALPHABETICALLY);
    EXPECT_EQ(CountValidMachines(), NUM_ALL_MACHINES);

    SortItemsInBag(pocket, SORT_BY_TYPE);
    EXPECT_EQ(CountValidMachines(), NUM_ALL_MACHINES);

    SortItemsInBag(pocket, SORT_BY_AMOUNT);
    EXPECT_EQ(CountValidMachines(), NUM_ALL_MACHINES);

    SortItemsInBag(pocket, SORT_BY_INDEX);
    EXPECT_EQ(CountValidMachines(), NUM_ALL_MACHINES);

    // After SORT_BY_INDEX the pocket must be exactly TM001..TM332, HM01..HM08.
    for (i = 0; i < NUM_ALL_MACHINES; i++)
        EXPECT_EQ(GetBagItemId(POCKET_TM_HM, i), GetTMHMItemId(i + 1));

    // The pocket boundary must not have leaked: the berry pocket is untouched.
    EXPECT_EQ(GetBagItemId(POCKET_BERRIES, 0), ITEM_NONE);
}

TEST("TM pocket: full pocket survives sorting and swapping with a nonzero encryption key")
{
    u32 i;
    struct BagPocket *pocket = &gBagPockets[POCKET_TM_HM];

    ASSUME(pocket->capacity == NUM_ALL_MACHINES);

    // The in-game crash value was the session's live encryption key (0x1E5A ==
    // 7770), which a fresh test save zeroes — a zero key hides any code path
    // that still XORs TM data with the key. Money etc. hold zero at this point,
    // so re-keying without re-encrypting is safe inside this test.
    gSaveBlock2Ptr->encryptionKey = 0x12341E5A;

    for (i = 1; i <= NUM_ALL_MACHINES; i++)
        EXPECT(AddBagItem(GetTMHMItemId(i), 1));
    EXPECT_EQ(CountValidMachines(), NUM_ALL_MACHINES);

    SortItemsInBag(pocket, SORT_ALPHABETICALLY);
    EXPECT_EQ(CountValidMachines(), NUM_ALL_MACHINES);

    // Manual reorder (SELECT-swap in the bag UI).
    MoveItemSlotInPocket(POCKET_TM_HM, 0, NUM_ALL_MACHINES - 1);
    MoveItemSlotInPocket(POCKET_TM_HM, NUM_ALL_MACHINES - 1, 5);
    EXPECT_EQ(CountValidMachines(), NUM_ALL_MACHINES);

    SortItemsInBag(pocket, SORT_BY_INDEX);
    EXPECT_EQ(CountValidMachines(), NUM_ALL_MACHINES);
    for (i = 0; i < NUM_ALL_MACHINES; i++)
        EXPECT_EQ(GetBagItemId(POCKET_TM_HM, i), GetTMHMItemId(i + 1));

    // Owned machines must read back quantity 1 despite storing no quantity.
    EXPECT_EQ(GetBagItemQuantity(POCKET_TM_HM, 0), 1);
    EXPECT_EQ(GetBagItemQuantity(POCKET_TM_HM, NUM_ALL_MACHINES - 1), 1);
}

TEST("Berries are sorted correctly in the bag")
{
    struct BagPocket *pocket = &gBagPockets[POCKET_BERRIES];

    ASSUME(GetItemPocket(ITEM_POMEG_BERRY) == POCKET_BERRIES);
    ASSUME(GetItemPocket(ITEM_MAGOST_BERRY) == POCKET_BERRIES);
    ASSUME(GetItemPocket(ITEM_KELPSY_BERRY) == POCKET_BERRIES);
    ASSUME(GetItemPocket(ITEM_MICLE_BERRY) == POCKET_BERRIES);
    ASSUME(GetItemPocket(ITEM_CHARTI_BERRY) == POCKET_BERRIES);
    ASSUME(GetItemPocket(ITEM_GANLON_BERRY) == POCKET_BERRIES);
    ASSUME(GetItemPocket(ITEM_ORAN_BERRY) == POCKET_BERRIES);
    ASSUME(GetItemPocket(ITEM_CHERI_BERRY) == POCKET_BERRIES);

    RUN_OVERWORLD_SCRIPT(
        additem ITEM_POMEG_BERRY;
        additem ITEM_MAGOST_BERRY;
        additem ITEM_KELPSY_BERRY;
        additem ITEM_MICLE_BERRY;
        additem ITEM_CHARTI_BERRY;
        additem ITEM_GANLON_BERRY;
        additem ITEM_ORAN_BERRY;
        additem ITEM_CHERI_BERRY;
    );

    SortItemsInBag(&gBagPockets[POCKET_BERRIES], SORT_BY_INDEX);

    EXPECT_EQ(pocket->itemSlots[0].itemId, ITEM_CHERI_BERRY);
    EXPECT_EQ(pocket->itemSlots[1].itemId, ITEM_ORAN_BERRY);
    EXPECT_EQ(pocket->itemSlots[2].itemId, ITEM_POMEG_BERRY);
    EXPECT_EQ(pocket->itemSlots[3].itemId, ITEM_KELPSY_BERRY);
    EXPECT_EQ(pocket->itemSlots[4].itemId, ITEM_MAGOST_BERRY);
    EXPECT_EQ(pocket->itemSlots[5].itemId, ITEM_CHARTI_BERRY);
    EXPECT_EQ(pocket->itemSlots[6].itemId, ITEM_GANLON_BERRY);
    EXPECT_EQ(pocket->itemSlots[7].itemId, ITEM_MICLE_BERRY);
    EXPECT_EQ(pocket->itemSlots[8].itemId, ITEM_NONE);

    SortItemsInBag(&gBagPockets[POCKET_BERRIES], SORT_ALPHABETICALLY);

    EXPECT_EQ(pocket->itemSlots[0].itemId, ITEM_CHARTI_BERRY);
    EXPECT_EQ(pocket->itemSlots[1].itemId, ITEM_CHERI_BERRY);
    EXPECT_EQ(pocket->itemSlots[2].itemId, ITEM_GANLON_BERRY);
    EXPECT_EQ(pocket->itemSlots[3].itemId, ITEM_KELPSY_BERRY);
    EXPECT_EQ(pocket->itemSlots[4].itemId, ITEM_MAGOST_BERRY);
    EXPECT_EQ(pocket->itemSlots[5].itemId, ITEM_MICLE_BERRY);
    EXPECT_EQ(pocket->itemSlots[6].itemId, ITEM_ORAN_BERRY);
    EXPECT_EQ(pocket->itemSlots[7].itemId, ITEM_POMEG_BERRY);
    EXPECT_EQ(pocket->itemSlots[8].itemId, ITEM_NONE);
}

TEST("Items are correctly sorted and compacted in the bag")
{
    struct BagPocket *pocket = &gBagPockets[POCKET_ITEMS];
    memset(pocket->itemSlots, 0, sizeof(gSaveBlock1Ptr->bag.items));

    ASSUME(GetItemPocket(ITEM_NUGGET) == POCKET_ITEMS);
    ASSUME(GetItemPocket(ITEM_BIG_NUGGET) == POCKET_ITEMS);
    ASSUME(GetItemPocket(ITEM_TINY_MUSHROOM) == POCKET_ITEMS);
    ASSUME(GetItemPocket(ITEM_BIG_MUSHROOM) == POCKET_ITEMS);
    ASSUME(GetItemPocket(ITEM_PEARL) == POCKET_ITEMS);
    ASSUME(GetItemPocket(ITEM_BIG_PEARL) == POCKET_ITEMS);

    RUN_OVERWORLD_SCRIPT(
        additem ITEM_NUGGET;
        additem ITEM_BIG_NUGGET;
        additem ITEM_TINY_MUSHROOM;
        additem ITEM_BIG_MUSHROOM;
        additem ITEM_PEARL;
        additem ITEM_BIG_PEARL;
    );

    EXPECT_EQ(pocket->itemSlots[0].itemId, ITEM_NUGGET);
    EXPECT_EQ(pocket->itemSlots[0].quantity, 1);
    EXPECT_EQ(pocket->itemSlots[1].itemId, ITEM_BIG_NUGGET);
    EXPECT_EQ(pocket->itemSlots[1].quantity, 1);
    EXPECT_EQ(pocket->itemSlots[2].itemId, ITEM_TINY_MUSHROOM);
    EXPECT_EQ(pocket->itemSlots[2].quantity, 1);
    EXPECT_EQ(pocket->itemSlots[3].itemId, ITEM_BIG_MUSHROOM);
    EXPECT_EQ(pocket->itemSlots[3].quantity, 1);
    EXPECT_EQ(pocket->itemSlots[4].itemId, ITEM_PEARL);
    EXPECT_EQ(pocket->itemSlots[4].quantity, 1);
    EXPECT_EQ(pocket->itemSlots[5].itemId, ITEM_BIG_PEARL);
    EXPECT_EQ(pocket->itemSlots[5].quantity, 1);
    EXPECT_EQ(pocket->itemSlots[6].itemId, ITEM_NONE);

    SortItemsInBag(&gBagPockets[POCKET_ITEMS], SORT_ALPHABETICALLY);

    EXPECT_EQ(pocket->itemSlots[0].itemId, ITEM_BIG_MUSHROOM);
    EXPECT_EQ(pocket->itemSlots[1].itemId, ITEM_BIG_NUGGET);
    EXPECT_EQ(pocket->itemSlots[2].itemId, ITEM_BIG_PEARL);
    EXPECT_EQ(pocket->itemSlots[3].itemId, ITEM_NUGGET);
    EXPECT_EQ(pocket->itemSlots[4].itemId, ITEM_PEARL);
    EXPECT_EQ(pocket->itemSlots[5].itemId, ITEM_TINY_MUSHROOM);
    EXPECT_EQ(pocket->itemSlots[6].itemId, ITEM_NONE);

    // Try removing the big items, check that everything is compacted correctly

    RUN_OVERWORLD_SCRIPT(
        removeitem ITEM_BIG_NUGGET;
        removeitem ITEM_BIG_MUSHROOM;
        removeitem ITEM_BIG_PEARL;
    );

    CompactItemsInBagPocket(POCKET_ITEMS);

    EXPECT_EQ(pocket->itemSlots[0].itemId, ITEM_NUGGET);
    EXPECT_EQ(pocket->itemSlots[0].quantity, 1);
    EXPECT_EQ(pocket->itemSlots[1].itemId, ITEM_PEARL);
    EXPECT_EQ(pocket->itemSlots[1].quantity, 1);
    EXPECT_EQ(pocket->itemSlots[2].itemId, ITEM_TINY_MUSHROOM);
    EXPECT_EQ(pocket->itemSlots[2].quantity, 1);
    EXPECT_EQ(pocket->itemSlots[3].itemId, ITEM_NONE);
    EXPECT_EQ(pocket->itemSlots[4].itemId, ITEM_NONE);
    EXPECT_EQ(pocket->itemSlots[5].itemId, ITEM_NONE);
    EXPECT_EQ(pocket->itemSlots[6].itemId, ITEM_NONE);
}

// The bag clamps its saved scroll/cursor against the list's row count on every
// open and after every sort. With BAG_TMHM_COUNT machines the row count crosses
// 256, which u8-truncated in SetCursorWithinListBounds (341 -> 85; 257 -> 1) and
// underflowed the scroll clamp to ~65529, making the list render out-of-bounds
// memory as rows ("garbage rows that act like Focus Punch"). These tests pin the
// fixed behavior at the exact widths that used to die.
TEST("TM pocket: bag list stays valid at the u8-truncation counts and deep scroll")
{
    u32 i;
    struct BagPocket *pocket = &gBagPockets[POCKET_TM_HM];

    // 262 machines -> 263 rows; 263 & 0xFF = 7 < MAX_ITEMS_SHOWN: the old
    // clamp computed 7 - 8 and wrapped.
    for (i = 1; i <= 262; i++)
        EXPECT(AddBagItem(GetTMHMItemId(i), 1));

    gBagPosition.scrollPosition[POCKET_TM_HM] = 255;
    gBagPosition.cursorPosition[POCKET_TM_HM] = 5;
    EXPECT_EQ(Test_BagMenu_BuildPocketListAndValidate(POCKET_TM_HM), 0);
    EXPECT(gBagPosition.scrollPosition[POCKET_TM_HM] <= 263);
    EXPECT(gBagPosition.scrollPosition[POCKET_TM_HM]
         + gBagPosition.cursorPosition[POCKET_TM_HM] < 263);

    // Fill the rest; 341 rows truncated to 85 in the old clamp.
    for (i = 263; i <= NUM_ALL_MACHINES; i++)
        EXPECT(AddBagItem(GetTMHMItemId(i), 1));

    gBagPosition.scrollPosition[POCKET_TM_HM] = NUM_ALL_MACHINES + 1 - 8; // 8 = MAX_ITEMS_SHOWN
    gBagPosition.cursorPosition[POCKET_TM_HM] = 8 - 1;
    EXPECT_EQ(Test_BagMenu_BuildPocketListAndValidate(POCKET_TM_HM), 0);
    EXPECT(gBagPosition.scrollPosition[POCKET_TM_HM]
         + gBagPosition.cursorPosition[POCKET_TM_HM] < NUM_ALL_MACHINES + 1);

    // A row past 255 must resolve to its own item, not wrap to row 0.
    gBagPosition.scrollPosition[POCKET_TM_HM] = 300;
    gBagPosition.cursorPosition[POCKET_TM_HM] = 0;
    SortItemsInBag(pocket, SORT_BY_INDEX);
    EXPECT_EQ(GetBagItemId(POCKET_TM_HM, GetItemListPosition(POCKET_TM_HM)),
              GetTMHMItemId(GetItemListPosition(POCKET_TM_HM) + 1));
    EXPECT(GetItemListPosition(POCKET_TM_HM) >= 256);
}

TEST("TM pocket: bag list buffers stay valid across repeated opens and sorts")
{
    u32 i, cycle;
    struct BagPocket *pocket = &gBagPockets[POCKET_TM_HM];

    for (i = 1; i <= NUM_ALL_MACHINES; i++)
        EXPECT(AddBagItem(GetTMHMItemId(i), 1));
    gSaveBlock2Ptr->encryptionKey = 0xA5C31E5A;

    gBagPosition.scrollPosition[POCKET_TM_HM] = 0;
    gBagPosition.cursorPosition[POCKET_TM_HM] = 0;
    for (cycle = 0; cycle < 4; cycle++)
    {
        EXPECT_EQ(Test_BagMenu_BuildPocketListAndValidate(POCKET_TM_HM), 0);
        SortItemsInBag(pocket, SORT_ALPHABETICALLY);
        EXPECT_EQ(Test_BagMenu_BuildPocketListAndValidate(POCKET_TM_HM), 0);
        SortItemsInBag(pocket, SORT_BY_AMOUNT);
        EXPECT_EQ(Test_BagMenu_BuildPocketListAndValidate(POCKET_TM_HM), 0);
        SortItemsInBag(pocket, SORT_BY_INDEX);
        EXPECT_EQ(Test_BagMenu_BuildPocketListAndValidate(POCKET_TM_HM), 0);
        // Model a deep scroll surviving the next cycle.
        gBagPosition.scrollPosition[POCKET_TM_HM] = 333;
        gBagPosition.cursorPosition[POCKET_TM_HM] = 7;
    }
    EXPECT_EQ(CountValidMachines(), NUM_ALL_MACHINES);
}

TEST("TM pocket: bag list buffers valid at a partial fill (192 machines)")
{
    u32 i;

    for (i = 1; i <= 192; i++)
        EXPECT(AddBagItem(GetTMHMItemId(i), 1));

    gBagPosition.scrollPosition[POCKET_TM_HM] = 0;
    gBagPosition.cursorPosition[POCKET_TM_HM] = 0;
    EXPECT_EQ(Test_BagMenu_BuildPocketListAndValidate(POCKET_TM_HM), 0);
    SortItemsInBag(&gBagPockets[POCKET_TM_HM], SORT_ALPHABETICALLY);
    EXPECT_EQ(Test_BagMenu_BuildPocketListAndValidate(POCKET_TM_HM), 0);
    EXPECT_EQ(CountValidMachines(), 192);
}
