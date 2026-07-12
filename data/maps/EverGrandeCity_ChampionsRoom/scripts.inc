# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_WALLACE
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 0
# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EverGrandeCity_ChampionsRoom_OnTransition_End
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	random 2
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_ChampionsRoom_OnTransition_End
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_STEVEN
# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_End:
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp4
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_Steven
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Steven::
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech, MSGBOX_DEFAULT
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN_E4, EverGrandeCity_ChampionsRoom_Text_StevenDefeat
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallacePostBattleMsg
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenPostBattleMsg
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_RIVAL
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallacePostBattleMsg::
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenPostBattleMsg::
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech, MSGBOX_DEFAULT
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_BIRCH
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallaceComeWithMeMsg
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenComeWithMeMsg
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallaceWaitOutsideMsg
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenWaitOutsideMsg
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceComeWithMeMsg::
# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenComeWithMeMsg::
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe, MSGBOX_DEFAULT
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceWaitOutsideMsg::
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenWaitOutsideMsg::
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside, MSGBOX_DEFAULT
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_IntroSpeech:
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: Welcome, {PLAYER}{KUN}.\p"
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in SOOTOPOLIS CITY…\n"
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourself.\p"
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working as one with your POKéMON.\p"
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "We TRAINERS raise POKéMON by giving\n"
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "them items and by teaching them new\l"
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "techniques for battle.\p"
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But we ourselves also learn many\n"
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "things from POKéMON.\p"
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And this is where your achievements\n"
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "are put to the test against what\l"
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "others like you have achieved.\p"
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now!\p"
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Who can most elegantly dance with\n"
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "their POKéMON in HOENN?\p"
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Show me right here and now!$"
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_Defeat:
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are a truly noble POKéMON\n"
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER!$"
# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: The POKéMON you sent into\n"
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your POKéMON.\p"
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!\p"
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the POKéMON LEAGUE.\p"
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I now proclaim you to be the new\n"
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "HOENN region…$"
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech:
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Fancy meeting you here,\n"
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE is away today, so the LEAGUE\n"
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "asked an old friend to keep his seat\l"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "warm… the former CHAMPION, that is.\p"
# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I've been wandering the world in\n"
# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "search of rare stones, but my\l"
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "POKéMON have missed true battle.\p"
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You, who reached this room once\n"
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "before… Show me that strength\l"
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "again, with everything you have!$"
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "…! Magnificent.\p"
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Perhaps the title never suited me\n"
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "as well as it suits you.\p"
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You have my respect, {PLAYER}{KUN}.$"
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech:
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Steel is honest.\p"
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It bends to true strength, and to\n"
# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "nothing else.\p"
# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Today, my steel bowed to you.\p"
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "This title was never mine to keep,\n"
# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "nor WALLACE's.\p"
# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It belongs to whoever stands at the\n"
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "peak of the POKéMON LEAGUE.\p"
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And once again, {PLAYER}{KUN},\n"
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "that is you.$"
# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe:
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No. Let me say it as it must be said.\p"
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "CHAMPION!\p"
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside:
# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: I'm sorry, but…\p"
# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION…$"
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Huh?\n"
# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 379 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 380 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}!\p"
# 381 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the CHAMPION?…$"
# 383 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 384 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
# 385 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}…\p"
# 386 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 387 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the CHAMPION?$"
# 388 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 389 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 390 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
# 391 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 392 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 393 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 394 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 395 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 396 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 397 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the PETALBURG GYM,\l"
# 398 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 399 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 400 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION!\p"
# 401 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 402 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 403 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 404 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 405 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 406 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: Anyways,\n"
# 407 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 408 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 409 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 410 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
# 411 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 412 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 413 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new CHAMPION!\p"
# 414 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 415 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 416 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
# 417 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: I'm sorry, but…\p"
# 418 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 419 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 420 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 421 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 422 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 423 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 424 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Groan…\p"
# 425 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 426 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 427 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 428 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 429 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 430 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 431 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 432 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 433 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: Whaaaat?! … … … … …\n"
# 434 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 435 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 436 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 437 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
