# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_WALLACE
# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 0
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EverGrandeCity_ChampionsRoom_OnTransition_End
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	random 2
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_ChampionsRoom_OnTransition_End
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_STEVEN
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_End:
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp4
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_Steven
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Steven::
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech, MSGBOX_DEFAULT
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN_E4, EverGrandeCity_ChampionsRoom_Text_StevenDefeat
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special TryReleaseLegendaryBeastRoamers
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special TryResetStationaryLegendaries
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallacePostBattleMsg
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenPostBattleMsg
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_RIVAL
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallacePostBattleMsg::
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenPostBattleMsg::
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech, MSGBOX_DEFAULT
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_BIRCH
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallaceComeWithMeMsg
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenComeWithMeMsg
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallaceWaitOutsideMsg
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenWaitOutsideMsg
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceComeWithMeMsg::
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenComeWithMeMsg::
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe, MSGBOX_DEFAULT
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceWaitOutsideMsg::
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenWaitOutsideMsg::
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside, MSGBOX_DEFAULT
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_IntroSpeech:
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: Welcome, {PLAYER}{KUN}.\p"
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in SOOTOPOLIS CITY…\n"
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourself.\p"
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working as one with your POKéMON.\p"
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "We TRAINERS raise POKéMON by giving\n"
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "them items and by teaching them new\l"
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "techniques for battle.\p"
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But we ourselves also learn many\n"
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "things from POKéMON.\p"
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And this is where your achievements\n"
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "are put to the test against what\l"
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "others like you have achieved.\p"
# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now!\p"
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Who can most elegantly dance with\n"
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "their POKéMON in HOENN?\p"
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Show me right here and now!$"
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_Defeat:
# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are a truly noble POKéMON\n"
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER!$"
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: The POKéMON you sent into\n"
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your POKéMON.\p"
# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!\p"
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the POKéMON LEAGUE.\p"
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I now proclaim you to be the new\n"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "HOENN region…$"
# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech:
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Fancy meeting you here,\n"
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE is away today, so the LEAGUE\n"
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "asked an old friend to keep his seat\l"
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "warm… the former CHAMPION, that is.\p"
# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I've been wandering the world in\n"
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "search of rare stones, but my\l"
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "POKéMON have missed true battle.\p"
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You, who reached this room once\n"
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "before… Show me that strength\l"
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "again, with everything you have!$"
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "…! Magnificent.\p"
# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Perhaps the title never suited me\n"
# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "as well as it suits you.\p"
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You have my respect, {PLAYER}{KUN}.$"
# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech:
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Steel is honest.\p"
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It bends to true strength, and to\n"
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "nothing else.\p"
# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Today, my steel bowed to you.\p"
# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "This title was never mine to keep,\n"
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "nor WALLACE's.\p"
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It belongs to whoever stands at the\n"
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "peak of the POKéMON LEAGUE.\p"
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And once again, {PLAYER}{KUN},\n"
# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "that is you.$"
# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe:
# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No. Let me say it as it must be said.\p"
# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "CHAMPION!\p"
# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside:
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: I'm sorry, but…\p"
# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION…$"
# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 379 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
# 380 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Huh?\n"
# 381 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 383 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 384 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 385 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 386 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 387 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}!\p"
# 388 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 389 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the CHAMPION?…$"
# 390 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 391 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
# 392 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}…\p"
# 393 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 394 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the CHAMPION?$"
# 395 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 396 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 397 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
# 398 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 399 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 400 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 401 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 402 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 403 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 404 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the PETALBURG GYM,\l"
# 405 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 406 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 407 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION!\p"
# 408 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 409 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 410 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 411 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 412 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 413 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: Anyways,\n"
# 414 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 415 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 416 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 417 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
# 418 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 419 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 420 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new CHAMPION!\p"
# 421 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 422 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 423 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
# 424 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: I'm sorry, but…\p"
# 425 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 426 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 427 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 428 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 429 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 430 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 431 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Groan…\p"
# 432 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 433 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 434 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 435 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 436 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 437 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 438 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 439 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 440 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: Whaaaat?! … … … … …\n"
# 441 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 442 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 443 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 444 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
