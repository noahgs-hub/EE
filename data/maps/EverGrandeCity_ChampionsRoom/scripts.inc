# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_WALLACE
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 0
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EverGrandeCity_ChampionsRoom_OnTransition_End
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	random 3
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_ChampionsRoom_OnTransition_End
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EverGrandeCity_ChampionsRoom_OnTransition_Gary
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_STEVEN
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_Gary:
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BLUE
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 2
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_End:
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp4
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_Steven
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_Gary
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Steven::
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech, MSGBOX_DEFAULT
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN_E4, EverGrandeCity_ChampionsRoom_Text_StevenDefeat
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Gary::
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryIntroSpeech, MSGBOX_DEFAULT
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GARY, EverGrandeCity_ChampionsRoom_Text_GaryDefeat
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special TryReleaseLegendaryBeastRoamers
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special TryResetStationaryLegendaries
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallacePostBattleMsg
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenPostBattleMsg
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_GaryPostBattleMsg
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_RIVAL
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallacePostBattleMsg::
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenPostBattleMsg::
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech, MSGBOX_DEFAULT
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_GaryPostBattleMsg::
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryPostBattleSpeech, MSGBOX_DEFAULT
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_BIRCH
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallaceComeWithMeMsg
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenComeWithMeMsg
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_GaryComeWithMeMsg
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallaceWaitOutsideMsg
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenWaitOutsideMsg
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_GaryWaitOutsideMsg
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceComeWithMeMsg::
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenComeWithMeMsg::
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe, MSGBOX_DEFAULT
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceWaitOutsideMsg::
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenWaitOutsideMsg::
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside, MSGBOX_DEFAULT
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_GaryComeWithMeMsg::
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryComeWithMe, MSGBOX_DEFAULT
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_GaryWaitOutsideMsg::
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryWaitOutside, MSGBOX_DEFAULT
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
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
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
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
	walk_left
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_IntroSpeech:
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: Welcome, {PLAYER}{KUN}.\p"
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in SOOTOPOLIS CITY…\n"
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourself.\p"
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working as one with your POKéMON.\p"
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "We TRAINERS raise POKéMON by giving\n"
# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "them items and by teaching them new\l"
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "techniques for battle.\p"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But we ourselves also learn many\n"
# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "things from POKéMON.\p"
# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And this is where your achievements\n"
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "are put to the test against what\l"
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "others like you have achieved.\p"
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now!\p"
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Who can most elegantly dance with\n"
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "their POKéMON in HOENN?\p"
# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Show me right here and now!$"
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_Defeat:
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are a truly noble POKéMON\n"
# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER!$"
# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: The POKéMON you sent into\n"
# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your POKéMON.\p"
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!\p"
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the POKéMON LEAGUE.\p"
# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I now proclaim you to be the new\n"
# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "HOENN region…$"
# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech:
# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Fancy meeting you here,\n"
# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE is away today, so the LEAGUE\n"
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "asked an old friend to keep his seat\l"
# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "warm… the former CHAMPION, that is.\p"
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I've been wandering the world in\n"
# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "search of rare stones, but my\l"
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "POKéMON have missed true battle.\p"
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You, who reached this room once\n"
# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "before… Show me that strength\l"
# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "again, with everything you have!$"
# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "…! Magnificent.\p"
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Perhaps the title never suited me\n"
# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "as well as it suits you.\p"
# 379 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You have my respect, {PLAYER}{KUN}.$"
# 380 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 381 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech:
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Steel is honest.\p"
# 383 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It bends to true strength, and to\n"
# 384 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "nothing else.\p"
# 385 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Today, my steel bowed to you.\p"
# 386 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "This title was never mine to keep,\n"
# 387 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "nor WALLACE's.\p"
# 388 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It belongs to whoever stands at the\n"
# 389 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "peak of the POKéMON LEAGUE.\p"
# 390 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And once again, {PLAYER}{KUN},\n"
# 391 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "that is you.$"
# 392 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 393 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe:
# 394 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
# 395 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No. Let me say it as it must be said.\p"
# 396 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "CHAMPION!\p"
# 397 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 398 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 399 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside:
# 400 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: I'm sorry, but…\p"
# 401 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 402 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 403 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 404 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 405 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 406 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryIntroSpeech:
# 407 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Hey! Took you long enough.\n"
# 408 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I was falling asleep up here!\p"
# 409 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The LEAGUE wanted somebody big to\n"
# 410 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "fill in for WALLACE today, so they\l"
# 411 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "flew in the best there is.\p"
# 412 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's right! GARY OAK, from PALLET\n"
# 413 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TOWN, KANTO's finest CHAMPION!\p"
# 414 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "My POKéMON and I have crushed every\n"
# 415 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER worth talking about, and I\l"
# 416 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "hand-raised the world's most elite\l"
# 417 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "team doing it.\p"
# 418 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You beat a couple of HOENN's ELITE\n"
# 419 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "FOUR and you think you're hot stuff?\p"
# 420 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Hah! This is where the fun stops,\n"
# 421 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "chump!\p"
# 422 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm the strongest there is!\n"
# 423 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Try to make this interesting!$"
# 424 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 425 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryDefeat:
# 426 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WHAT?!\n"
# 427 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No way! My elite POKéMON…\p"
# 428 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … …\p"
# 429 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Urgh. Fine, you win.\p"
# 430 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "After all my studying, all my\n"
# 431 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "training… Why…\p"
# 432 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Why'd I lose to you again?!$"
# 433 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 434 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryPostBattleSpeech:
# 435 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Tch… All right, all right.\n"
# 436 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You're strong. There, I said it.\p"
# 437 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "My POKéMON gave it everything, and\n"
# 438 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you still walked right through us.\p"
# 439 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Listen up, because I'll only say this\n"
# 440 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "once…\p"
# 441 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Today, you were the better TRAINER.\p"
# 442 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But don't go getting a big head!\n"
# 443 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It took a once-in-a-generation\l"
# 444 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "genius like me to push you this far!\p"
# 445 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Heh. You now stand at the peak of\n"
# 446 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the POKéMON LEAGUE, HOENN's new\l"
# 447 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "top TRAINER…$"
# 448 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 449 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryComeWithMe:
# 450 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Hey, CHAMP!\p"
# 451 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Yeah, you! That's your name now.\n"
# 452 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Weird, huh?\p"
# 453 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "C'mon, follow me. Try to keep up!$"
# 454 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 455 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryWaitOutside:
# 456 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Sorry, pal! CHAMPIONS only\n"
# 457 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "past this point.\p"
# 458 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Keep the PROFESSOR company, will ya?\p"
# 459 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Smell ya later!$"
# 460 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 461 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 462 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 463 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 464 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION…$"
# 465 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 466 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
# 467 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Huh?\n"
# 468 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 469 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 470 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 471 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 472 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 473 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 474 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}!\p"
# 475 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 476 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the CHAMPION?…$"
# 477 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 478 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
# 479 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}…\p"
# 480 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 481 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the CHAMPION?$"
# 482 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 483 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 484 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
# 485 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 486 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 487 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 488 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 489 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 490 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 491 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the PETALBURG GYM,\l"
# 492 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 493 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 494 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION!\p"
# 495 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 496 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 497 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 498 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 499 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 500 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: Anyways,\n"
# 501 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 502 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 503 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 504 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
# 505 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 506 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 507 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new CHAMPION!\p"
# 508 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 509 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 510 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
# 511 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: I'm sorry, but…\p"
# 512 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 513 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 514 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 515 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 516 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 517 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 518 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Groan…\p"
# 519 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 520 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 521 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 522 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 523 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 524 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 525 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 526 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 527 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: Whaaaat?! … … … … …\n"
# 528 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 529 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 530 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 531 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
