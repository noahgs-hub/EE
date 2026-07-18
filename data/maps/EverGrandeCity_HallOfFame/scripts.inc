# 9 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 10 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_MapScripts::
# 11 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_HallOfFame_OnFrame
# 12 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_HallOfFame_OnWarp
# 13 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.byte 0
# 14 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnWarp:
# 16 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth
# 17 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 18 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 19 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth::
# 20 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 21 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 22 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 23 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnFrame:
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame
# 25 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 26 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 27 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame::
# 28 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	lockall
# 29 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 30 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 31 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 32 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 33 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 34 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 35 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_HonorMsg
# 36 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 37 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 38 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 39 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 40 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 41 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 42 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 44 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_RecordMsg
# 45 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 46 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 49 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 50 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 51 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 52 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 40
# 53 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 54 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 55 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	checkplayergender
# 56 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_HallOfFame_EventScript_GameClearMale
# 57 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_HallOfFame_EventScript_GameClearFemale
# 58 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 59 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 60 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_HonorMsg::
# 61 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_STEVEN, EverGrandeCity_HallOfFame_EventScript_HonorMsgSteven
# 62 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BLUE, EverGrandeCity_HallOfFame_EventScript_HonorMsgGary
# 63 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 64 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 65 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 66 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_HonorMsgSteven::
# 67 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_StevenHereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 68 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 69 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 70 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_HonorMsgGary::
# 71 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_GaryHereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 72 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 73 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 74 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_RecordMsg::
# 75 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_STEVEN, EverGrandeCity_HallOfFame_EventScript_RecordMsgSteven
# 76 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BLUE, EverGrandeCity_HallOfFame_EventScript_RecordMsgGary
# 77 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
# 78 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 79 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 80 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_RecordMsgSteven::
# 81 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_StevenLetsRecordYourNames, MSGBOX_DEFAULT
# 82 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 83 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 84 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_RecordMsgGary::
# 85 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_GaryLetsRecordYourNames, MSGBOX_DEFAULT
# 86 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 87 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 88 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_GameClearMale::
# 89 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 90 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 91 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 92 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
# 93 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 94 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 95 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_GameClearFemale::
# 96 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 97 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 98 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 99 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
# 100 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 101 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 102 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1:
# 103 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 104 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 105 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 106 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 107 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 108 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 109 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 110 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 111 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2:
# 112 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 113 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 114 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 115 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 116 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 117 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 118 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 119 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions:
# 120 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "WALLACE: This room…\p"
# 121 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "This is where we keep records of\n"
# 122 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "POKéMON that prevailed through\l"
# 123 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "harsh battles.\p"
# 124 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "It is here that the LEAGUE CHAMPIONS\n"
# 125 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "are honored.$"
# 126 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 127 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames:
# 128 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "WALLACE: Come on, let's record your\n"
# 129 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "name as a TRAINER who triumphed over\l"
# 130 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the POKéMON LEAGUE, and the names of\l"
# 131 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the partners who battled with you.$"
# 132 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 133 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_StevenHereWeHonorLeagueChampions:
# 134 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "STEVEN: This room…\p"
# 135 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Records of the POKéMON that prevailed\n"
# 136 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "through the harshest of battles are\l"
# 137 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "kept here.\p"
# 138 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "It is here that the LEAGUE CHAMPIONS\n"
# 139 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "are honored.\p"
# 140 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "I never tire of standing in it.$"
# 141 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 142 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_StevenLetsRecordYourNames:
# 143 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "STEVEN: Come. Let's record your name\n"
# 144 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "as a TRAINER who triumphed over the\l"
# 145 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "POKéMON LEAGUE, and the names of the\l"
# 146 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "partners who battled at your side.$"
# 147 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 148 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_GaryHereWeHonorLeagueChampions:
# 149 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "GARY: Check it out! The HALL OF FAME.\p"
# 150 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Every POKéMON that's ever won it all\n"
# 151 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "gets its name kept in this room.\p"
# 152 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Mine are all over the one in KANTO,\n"
# 153 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "obviously.$"
# 154 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 155 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_GaryLetsRecordYourNames:
# 156 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "GARY: Well? Get over here and punch\n"
# 157 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "your name in already!\p"
# 158 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "You and your whole team.\p"
# 159 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "It's not every day I let somebody\n"
# 160 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "else hog the spotlight!$"
