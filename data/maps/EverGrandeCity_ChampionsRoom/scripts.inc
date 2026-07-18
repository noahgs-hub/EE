# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_WALLACE
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 0
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EverGrandeCity_ChampionsRoom_OnTransition_End
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	random 5
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_ChampionsRoom_OnTransition_End
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EverGrandeCity_ChampionsRoom_OnTransition_Gary
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 3, EverGrandeCity_ChampionsRoom_OnTransition_Lance
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 4, EverGrandeCity_ChampionsRoom_OnTransition_Noah
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_STEVEN
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_Gary:
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BLUE
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 2
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_Lance:
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LANCE
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 3
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_Noah:
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LT_SURGE
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_4, 4
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_OnTransition_End
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition_End:
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp4
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_Steven
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_Gary
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 3, EverGrandeCity_ChampionsRoom_EventScript_Lance
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_TEMP_4, 4, EverGrandeCity_ChampionsRoom_EventScript_Noah
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Steven::
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech, MSGBOX_DEFAULT
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN_E4, EverGrandeCity_ChampionsRoom_Text_StevenDefeat
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Gary::
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryIntroSpeech, MSGBOX_DEFAULT
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GARY, EverGrandeCity_ChampionsRoom_Text_GaryDefeat
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Lance::
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_LanceIntroSpeech, MSGBOX_DEFAULT
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_LANCE, EverGrandeCity_ChampionsRoom_Text_LanceDefeat
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Noah::
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_NoahIntroSpeech, MSGBOX_DEFAULT
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_NOAH, EverGrandeCity_ChampionsRoom_Text_NoahDefeat
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special TryReleaseLegendaryBeastRoamers
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special TryResetStationaryLegendaries
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallacePostBattleMsg
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenPostBattleMsg
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_GaryPostBattleMsg
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 3, EverGrandeCity_ChampionsRoom_EventScript_LancePostBattleMsg
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 4, EverGrandeCity_ChampionsRoom_EventScript_NoahPostBattleMsg
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_RIVAL
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallacePostBattleMsg::
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenPostBattleMsg::
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech, MSGBOX_DEFAULT
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_GaryPostBattleMsg::
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryPostBattleSpeech, MSGBOX_DEFAULT
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_LancePostBattleMsg::
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_LancePostBattleSpeech, MSGBOX_DEFAULT
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_NoahPostBattleMsg::
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_NoahPostBattleSpeech, MSGBOX_DEFAULT
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_BIRCH
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallaceComeWithMeMsg
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenComeWithMeMsg
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_GaryComeWithMeMsg
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 3, EverGrandeCity_ChampionsRoom_EventScript_LanceComeWithMeMsg
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 4, EverGrandeCity_ChampionsRoom_EventScript_NoahComeWithMeMsg
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, EverGrandeCity_ChampionsRoom_EventScript_WallaceWaitOutsideMsg
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, EverGrandeCity_ChampionsRoom_EventScript_StevenWaitOutsideMsg
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 2, EverGrandeCity_ChampionsRoom_EventScript_GaryWaitOutsideMsg
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 3, EverGrandeCity_ChampionsRoom_EventScript_LanceWaitOutsideMsg
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_TEMP_4, 4, EverGrandeCity_ChampionsRoom_EventScript_NoahWaitOutsideMsg
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceComeWithMeMsg::
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenComeWithMeMsg::
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe, MSGBOX_DEFAULT
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceWaitOutsideMsg::
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenWaitOutsideMsg::
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside, MSGBOX_DEFAULT
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_GaryComeWithMeMsg::
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryComeWithMe, MSGBOX_DEFAULT
# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_GaryWaitOutsideMsg::
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_GaryWaitOutside, MSGBOX_DEFAULT
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_LanceComeWithMeMsg::
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_LanceComeWithMe, MSGBOX_DEFAULT
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_LanceWaitOutsideMsg::
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_LanceWaitOutside, MSGBOX_DEFAULT
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_NoahComeWithMeMsg::
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_NoahComeWithMe, MSGBOX_DEFAULT
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_NoahWaitOutsideMsg::
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_NoahWaitOutside, MSGBOX_DEFAULT
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_IntroSpeech:
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: Welcome, {PLAYER}{KUN}.\p"
# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in SOOTOPOLIS CITY…\n"
# 379 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 380 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourself.\p"
# 381 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 383 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 384 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 385 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working as one with your POKéMON.\p"
# 386 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "We TRAINERS raise POKéMON by giving\n"
# 387 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "them items and by teaching them new\l"
# 388 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "techniques for battle.\p"
# 389 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But we ourselves also learn many\n"
# 390 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "things from POKéMON.\p"
# 391 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And this is where your achievements\n"
# 392 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "are put to the test against what\l"
# 393 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "others like you have achieved.\p"
# 394 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now!\p"
# 395 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Who can most elegantly dance with\n"
# 396 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "their POKéMON in HOENN?\p"
# 397 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Show me right here and now!$"
# 398 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 399 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_Defeat:
# 400 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
# 401 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 402 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 403 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 404 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 405 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are a truly noble POKéMON\n"
# 406 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER!$"
# 407 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 408 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 409 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: The POKéMON you sent into\n"
# 410 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 411 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 412 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 413 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 414 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 415 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your POKéMON.\p"
# 416 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 417 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!\p"
# 418 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 419 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the POKéMON LEAGUE.\p"
# 420 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I now proclaim you to be the new\n"
# 421 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "HOENN region…$"
# 422 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 423 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech:
# 424 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Fancy meeting you here,\n"
# 425 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 426 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE is away today, so the LEAGUE\n"
# 427 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "asked an old friend to keep his seat\l"
# 428 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "warm… the former CHAMPION, that is.\p"
# 429 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I've been wandering the world in\n"
# 430 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "search of rare stones, but my\l"
# 431 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "POKéMON have missed true battle.\p"
# 432 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You, who reached this room once\n"
# 433 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "before… Show me that strength\l"
# 434 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "again, with everything you have!$"
# 435 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 436 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
# 437 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "…! Magnificent.\p"
# 438 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Perhaps the title never suited me\n"
# 439 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "as well as it suits you.\p"
# 440 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You have my respect, {PLAYER}{KUN}.$"
# 441 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 442 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech:
# 443 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Steel is honest.\p"
# 444 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It bends to true strength, and to\n"
# 445 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "nothing else.\p"
# 446 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Today, my steel bowed to you.\p"
# 447 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "This title was never mine to keep,\n"
# 448 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "nor WALLACE's.\p"
# 449 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It belongs to whoever stands at the\n"
# 450 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "peak of the POKéMON LEAGUE.\p"
# 451 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And once again, {PLAYER}{KUN},\n"
# 452 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "that is you.$"
# 453 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 454 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe:
# 455 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
# 456 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No. Let me say it as it must be said.\p"
# 457 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "CHAMPION!\p"
# 458 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 459 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 460 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside:
# 461 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: I'm sorry, but…\p"
# 462 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 463 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 464 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 465 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 466 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 467 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryIntroSpeech:
# 468 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Hey! Took you long enough.\n"
# 469 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I was falling asleep up here!\p"
# 470 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The LEAGUE wanted somebody big to\n"
# 471 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "fill in for WALLACE today, so they\l"
# 472 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "flew in the best there is.\p"
# 473 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's right! GARY OAK, from PALLET\n"
# 474 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TOWN, KANTO's finest CHAMPION!\p"
# 475 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "My POKéMON and I have crushed every\n"
# 476 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER worth talking about, and I\l"
# 477 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "hand-raised the world's most elite\l"
# 478 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "team doing it.\p"
# 479 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You beat a couple of HOENN's ELITE\n"
# 480 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "FOUR and you think you're hot stuff?\p"
# 481 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Hah! This is where the fun stops,\n"
# 482 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "chump!\p"
# 483 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm the strongest there is!\n"
# 484 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Try to make this interesting!$"
# 485 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 486 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryDefeat:
# 487 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WHAT?!\n"
# 488 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No way! My elite POKéMON…\p"
# 489 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … …\p"
# 490 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Urgh. Fine, you win.\p"
# 491 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "After all my studying, all my\n"
# 492 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "training… Why…\p"
# 493 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Why'd I lose to you again?!$"
# 494 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 495 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryPostBattleSpeech:
# 496 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Tch… All right, all right.\n"
# 497 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You're strong. There, I said it.\p"
# 498 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "My POKéMON gave it everything, and\n"
# 499 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you still walked right through us.\p"
# 500 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Listen up, because I'll only say this\n"
# 501 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "once…\p"
# 502 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Today, you were the better TRAINER.\p"
# 503 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But don't go getting a big head!\n"
# 504 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It took a once-in-a-generation\l"
# 505 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "genius like me to push you this far!\p"
# 506 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Heh. You now stand at the peak of\n"
# 507 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the POKéMON LEAGUE, HOENN's new\l"
# 508 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "top TRAINER…$"
# 509 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 510 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryComeWithMe:
# 511 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Hey, CHAMP!\p"
# 512 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Yeah, you! That's your name now.\n"
# 513 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Weird, huh?\p"
# 514 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "C'mon, follow me. Try to keep up!$"
# 515 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 516 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_GaryWaitOutside:
# 517 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GARY: Sorry, pal! CHAMPIONS only\n"
# 518 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "past this point.\p"
# 519 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Keep the PROFESSOR company, will ya?\p"
# 520 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Smell ya later!$"
# 521 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 522 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_LanceIntroSpeech:
# 523 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "LANCE: I've been waiting for you,\n"
# 524 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 525 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I am LANCE, master of dragons and\n"
# 526 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "CHAMPION of the INDIGO PLATEAU.\p"
# 527 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE asked me to guard this seat\n"
# 528 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "today, and I accepted gladly…\p"
# 529 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "…because word of your strength has\n"
# 530 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "reached even KANTO.\p"
# 531 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Dragon POKéMON are the stuff of\n"
# 532 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "legend. Virtually indestructible,\l"
# 533 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "and I have raised them my whole life.\p"
# 534 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "There is nothing left for you to\n"
# 535 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "prove to HOENN…\p"
# 536 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "So prove it to me instead!\n"
# 537 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come, challenger!$"
# 538 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 539 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_LanceDefeat:
# 540 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "…My dragons have fallen.\p"
# 541 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Superb. Truly superb.\p"
# 542 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I have battled across two regions,\n"
# 543 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "and rarely have I been pushed so far.$"
# 544 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 545 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_LancePostBattleSpeech:
# 546 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "LANCE: A dragon bows to no one…\n"
# 547 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "yet mine bowed to you.\p"
# 548 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You command your POKéMON with the\n"
# 549 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "ferocity of a storm and the calm of\l"
# 550 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "a still lake. That is mastery.\p"
# 551 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "As a CHAMPION of another land, let\n"
# 552 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "me say it plainly:\p"
# 553 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You would stand tall at any LEAGUE\n"
# 554 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "in the world.\p"
# 555 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the peak of the\n"
# 556 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "POKéMON LEAGUE…$"
# 557 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 558 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_LanceComeWithMe:
# 559 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "LANCE: {PLAYER}{KUN}…\p"
# 560 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No. That name no longer suffices.\p"
# 561 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "CHAMPION!\p"
# 562 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Walk with me.$"
# 563 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 564 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_LanceWaitOutside:
# 565 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "LANCE: Forgive me, but this hall\n"
# 566 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "admits only CHAMPIONS.\p"
# 567 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Please wait outside with\n"
# 568 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 569 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 570 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_NoahIntroSpeech:
# 571 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "NOAH: Hi, I am NOAH, the creator\n"
# 572 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of this ROMHACK.\p"
# 573 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "We will fight using my favorite\n"
# 574 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "ruleset, doubles.\p"
# 575 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "These are some of my favorites!$"
# 576 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 577 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_NoahDefeat:
# 578 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Beaten in my own game…\p"
# 579 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I guess I did balance this thing\n"
# 580 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "pretty well after all.$"
# 581 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 582 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_NoahPostBattleSpeech:
# 583 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "NOAH: That was exactly the kind of\n"
# 584 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle I built this game hoping to\l"
# 585 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "see one day.\p"
# 586 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You played around PRANKSTER, broke\n"
# 587 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "through the VEST, dodged the\l"
# 588 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "DYNAMIC PUNCHES…\p"
# 589 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly? I couldn't have written a\n"
# 590 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "better ending myself.\p"
# 591 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the peak of the\n"
# 592 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "POKéMON LEAGUE…$"
# 593 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 594 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_NoahComeWithMe:
# 595 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "NOAH: Well, CHAMPION…\p"
# 596 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Yeah, that's you I'm talking to.\p"
# 597 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come on, there's one last room\n"
# 598 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I want to show you.$"
# 599 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 600 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_NoahWaitOutside:
# 601 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "NOAH: Sorry, house rules…\n"
# 602 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "and I would know, I wrote them.\p"
# 603 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "CHAMPIONS only past this point.\p"
# 604 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Keep PROF. BIRCH company, okay?$"
# 605 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 606 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 607 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 608 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 609 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION…$"
# 610 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 611 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
# 612 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Huh?\n"
# 613 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 614 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 615 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 616 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 617 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 618 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 619 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}!\p"
# 620 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 621 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the CHAMPION?…$"
# 622 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 623 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
# 624 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}…\p"
# 625 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 626 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the CHAMPION?$"
# 627 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 628 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 629 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
# 630 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 631 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 632 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 633 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 634 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 635 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 636 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the PETALBURG GYM,\l"
# 637 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 638 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 639 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION!\p"
# 640 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 641 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 642 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 643 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 644 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 645 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: Anyways,\n"
# 646 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 647 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 648 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 649 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
# 650 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 651 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 652 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new CHAMPION!\p"
# 653 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 654 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 655 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
# 656 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: I'm sorry, but…\p"
# 657 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 658 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 659 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 660 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 661 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 662 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 663 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Groan…\p"
# 664 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 665 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 666 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 667 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 668 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 669 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 670 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 671 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 672 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: Whaaaat?! … … … … …\n"
# 673 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 674 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 675 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 676 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
