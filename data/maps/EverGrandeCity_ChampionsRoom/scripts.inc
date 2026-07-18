# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_WALLACE
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 0
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EverGrandeCity_ChampionsRoom_OnTransition_End
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	random 4
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_ChampionsRoom_OnTransition_End
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EverGrandeCity_ChampionsRoom_OnTransition_Gary
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 3, EverGrandeCity_ChampionsRoom_OnTransition_Lance
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_STEVEN
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_Gary:
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BLUE
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 2
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_Lance:
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LANCE
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 3
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_End:
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp4
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_Steven
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_Gary
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 3, EverGrandeCity_ChampionsRoom_EventScript_Lance
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Steven::
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech, MSGBOX_DEFAULT
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN_E4, EverGrandeCity_ChampionsRoom_Text_StevenDefeat
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Gary::
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryIntroSpeech, MSGBOX_DEFAULT
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GARY, EverGrandeCity_ChampionsRoom_Text_GaryDefeat
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Lance::
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_LanceIntroSpeech, MSGBOX_DEFAULT
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_LANCE, EverGrandeCity_ChampionsRoom_Text_LanceDefeat
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special TryReleaseLegendaryBeastRoamers
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special TryResetStationaryLegendaries
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallacePostBattleMsg
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenPostBattleMsg
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_GaryPostBattleMsg
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 3, EverGrandeCity_ChampionsRoom_EventScript_LancePostBattleMsg
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_RIVAL
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallacePostBattleMsg::
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenPostBattleMsg::
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech, MSGBOX_DEFAULT
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_GaryPostBattleMsg::
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryPostBattleSpeech, MSGBOX_DEFAULT
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_LancePostBattleMsg::
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_LancePostBattleSpeech, MSGBOX_DEFAULT
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_BIRCH
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallaceComeWithMeMsg
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenComeWithMeMsg
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_GaryComeWithMeMsg
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 3, EverGrandeCity_ChampionsRoom_EventScript_LanceComeWithMeMsg
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallaceWaitOutsideMsg
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenWaitOutsideMsg
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_GaryWaitOutsideMsg
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 3, EverGrandeCity_ChampionsRoom_EventScript_LanceWaitOutsideMsg
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceComeWithMeMsg::
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenComeWithMeMsg::
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe, MSGBOX_DEFAULT
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceWaitOutsideMsg::
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenWaitOutsideMsg::
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside, MSGBOX_DEFAULT
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_GaryComeWithMeMsg::
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryComeWithMe, MSGBOX_DEFAULT
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_GaryWaitOutsideMsg::
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryWaitOutside, MSGBOX_DEFAULT
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_LanceComeWithMeMsg::
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_LanceComeWithMe, MSGBOX_DEFAULT
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_LanceWaitOutsideMsg::
# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_LanceWaitOutside, MSGBOX_DEFAULT
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_IntroSpeech:
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: Welcome, {PLAYER}{KUN}.\p"
# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in SOOTOPOLIS CITY…\n"
# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourself.\p"
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working as one with your POKéMON.\p"
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "We TRAINERS raise POKéMON by giving\n"
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "them items and by teaching them new\l"
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "techniques for battle.\p"
# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But we ourselves also learn many\n"
# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "things from POKéMON.\p"
# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And this is where your achievements\n"
# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "are put to the test against what\l"
# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "others like you have achieved.\p"
# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now!\p"
# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Who can most elegantly dance with\n"
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "their POKéMON in HOENN?\p"
# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Show me right here and now!$"
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_Defeat:
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are a truly noble POKéMON\n"
# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER!$"
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 379 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: The POKéMON you sent into\n"
# 380 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 381 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 383 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 384 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 385 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your POKéMON.\p"
# 386 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 387 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!\p"
# 388 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 389 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the POKéMON LEAGUE.\p"
# 390 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I now proclaim you to be the new\n"
# 391 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "HOENN region…$"
# 392 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 393 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech:
# 394 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Fancy meeting you here,\n"
# 395 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 396 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE is away today, so the LEAGUE\n"
# 397 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "asked an old friend to keep his seat\l"
# 398 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "warm… the former CHAMPION, that is.\p"
# 399 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I've been wandering the world in\n"
# 400 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "search of rare stones, but my\l"
# 401 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "POKéMON have missed true battle.\p"
# 402 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You, who reached this room once\n"
# 403 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "before… Show me that strength\l"
# 404 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "again, with everything you have!$"
# 405 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 406 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
# 407 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "…! Magnificent.\p"
# 408 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Perhaps the title never suited me\n"
# 409 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "as well as it suits you.\p"
# 410 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You have my respect, {PLAYER}{KUN}.$"
# 411 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 412 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech:
# 413 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Steel is honest.\p"
# 414 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It bends to true strength, and to\n"
# 415 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "nothing else.\p"
# 416 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Today, my steel bowed to you.\p"
# 417 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "This title was never mine to keep,\n"
# 418 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "nor WALLACE's.\p"
# 419 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It belongs to whoever stands at the\n"
# 420 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "peak of the POKéMON LEAGUE.\p"
# 421 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And once again, {PLAYER}{KUN},\n"
# 422 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "that is you.$"
# 423 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 424 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe:
# 425 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
# 426 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No. Let me say it as it must be said.\p"
# 427 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "CHAMPION!\p"
# 428 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 429 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 430 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside:
# 431 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: I'm sorry, but…\p"
# 432 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 433 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 434 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 435 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 436 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 437 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryIntroSpeech:
# 438 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Hey! Took you long enough.\n"
# 439 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I was falling asleep up here!\p"
# 440 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The LEAGUE wanted somebody big to\n"
# 441 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "fill in for WALLACE today, so they\l"
# 442 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "flew in the best there is.\p"
# 443 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's right! GARY OAK, from PALLET\n"
# 444 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TOWN, KANTO's finest CHAMPION!\p"
# 445 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "My POKéMON and I have crushed every\n"
# 446 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER worth talking about, and I\l"
# 447 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "hand-raised the world's most elite\l"
# 448 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "team doing it.\p"
# 449 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You beat a couple of HOENN's ELITE\n"
# 450 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "FOUR and you think you're hot stuff?\p"
# 451 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Hah! This is where the fun stops,\n"
# 452 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "chump!\p"
# 453 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm the strongest there is!\n"
# 454 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Try to make this interesting!$"
# 455 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 456 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryDefeat:
# 457 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WHAT?!\n"
# 458 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No way! My elite POKéMON…\p"
# 459 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … …\p"
# 460 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Urgh. Fine, you win.\p"
# 461 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "After all my studying, all my\n"
# 462 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "training… Why…\p"
# 463 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Why'd I lose to you again?!$"
# 464 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 465 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryPostBattleSpeech:
# 466 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Tch… All right, all right.\n"
# 467 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You're strong. There, I said it.\p"
# 468 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "My POKéMON gave it everything, and\n"
# 469 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you still walked right through us.\p"
# 470 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Listen up, because I'll only say this\n"
# 471 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "once…\p"
# 472 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Today, you were the better TRAINER.\p"
# 473 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But don't go getting a big head!\n"
# 474 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It took a once-in-a-generation\l"
# 475 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "genius like me to push you this far!\p"
# 476 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Heh. You now stand at the peak of\n"
# 477 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the POKéMON LEAGUE, HOENN's new\l"
# 478 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "top TRAINER…$"
# 479 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 480 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryComeWithMe:
# 481 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Hey, CHAMP!\p"
# 482 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Yeah, you! That's your name now.\n"
# 483 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Weird, huh?\p"
# 484 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "C'mon, follow me. Try to keep up!$"
# 485 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 486 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryWaitOutside:
# 487 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Sorry, pal! CHAMPIONS only\n"
# 488 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "past this point.\p"
# 489 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Keep the PROFESSOR company, will ya?\p"
# 490 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Smell ya later!$"
# 491 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 492 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_LanceIntroSpeech:
# 493 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "LANCE: I've been waiting for you,\n"
# 494 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 495 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I am LANCE, master of dragons and\n"
# 496 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "CHAMPION of the INDIGO PLATEAU.\p"
# 497 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE asked me to guard this seat\n"
# 498 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "today, and I accepted gladly…\p"
# 499 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "…because word of your strength has\n"
# 500 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "reached even KANTO.\p"
# 501 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Dragon POKéMON are the stuff of\n"
# 502 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "legend. Virtually indestructible,\l"
# 503 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "and I have raised them my whole life.\p"
# 504 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "There is nothing left for you to\n"
# 505 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "prove to HOENN…\p"
# 506 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "So prove it to me instead!\n"
# 507 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come, challenger!$"
# 508 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 509 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_LanceDefeat:
# 510 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "…My dragons have fallen.\p"
# 511 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Superb. Truly superb.\p"
# 512 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I have battled across two regions,\n"
# 513 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "and rarely have I been pushed so far.$"
# 514 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 515 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_LancePostBattleSpeech:
# 516 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "LANCE: A dragon bows to no one…\n"
# 517 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "yet mine bowed to you.\p"
# 518 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You command your POKéMON with the\n"
# 519 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "ferocity of a storm and the calm of\l"
# 520 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "a still lake. That is mastery.\p"
# 521 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "As a CHAMPION of another land, let\n"
# 522 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "me say it plainly:\p"
# 523 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You would stand tall at any LEAGUE\n"
# 524 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "in the world.\p"
# 525 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the peak of the\n"
# 526 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "POKéMON LEAGUE…$"
# 527 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 528 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_LanceComeWithMe:
# 529 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "LANCE: {PLAYER}{KUN}…\p"
# 530 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No. That name no longer suffices.\p"
# 531 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "CHAMPION!\p"
# 532 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Walk with me.$"
# 533 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 534 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_LanceWaitOutside:
# 535 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "LANCE: Forgive me, but this hall\n"
# 536 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "admits only CHAMPIONS.\p"
# 537 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Please wait outside with\n"
# 538 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 539 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 540 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 541 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 542 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 543 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION…$"
# 544 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 545 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
# 546 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Huh?\n"
# 547 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 548 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 549 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 550 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 551 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 552 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 553 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}!\p"
# 554 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 555 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the CHAMPION?…$"
# 556 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 557 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
# 558 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}…\p"
# 559 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 560 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the CHAMPION?$"
# 561 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 562 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 563 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
# 564 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 565 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 566 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 567 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 568 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 569 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 570 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the PETALBURG GYM,\l"
# 571 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 572 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 573 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION!\p"
# 574 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 575 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 576 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 577 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 578 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 579 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: Anyways,\n"
# 580 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 581 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 582 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 583 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
# 584 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 585 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 586 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new CHAMPION!\p"
# 587 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 588 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 589 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
# 590 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: I'm sorry, but…\p"
# 591 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 592 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 593 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 594 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 595 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 596 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 597 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Groan…\p"
# 598 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 599 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 600 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 601 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 602 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 603 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 604 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 605 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 606 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: Whaaaat?! … … … … …\n"
# 607 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 608 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 609 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 610 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
