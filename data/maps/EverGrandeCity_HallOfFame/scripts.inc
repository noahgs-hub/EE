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
	goto_if_eq VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LANCE, EverGrandeCity_HallOfFame_EventScript_HonorMsgLance
# 64 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LT_SURGE, EverGrandeCity_HallOfFame_EventScript_HonorMsgNoah
# 65 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 66 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 67 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 68 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_HonorMsgLance::
# 69 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_LanceHereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 70 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 71 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 72 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_HonorMsgNoah::
# 73 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_NoahHereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 74 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 75 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 76 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_HonorMsgSteven::
# 77 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_StevenHereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 78 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 79 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 80 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_HonorMsgGary::
# 81 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_GaryHereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 82 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 83 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 84 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_RecordMsg::
# 85 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_STEVEN, EverGrandeCity_HallOfFame_EventScript_RecordMsgSteven
# 86 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BLUE, EverGrandeCity_HallOfFame_EventScript_RecordMsgGary
# 87 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LANCE, EverGrandeCity_HallOfFame_EventScript_RecordMsgLance
# 88 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LT_SURGE, EverGrandeCity_HallOfFame_EventScript_RecordMsgNoah
# 89 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
# 90 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 91 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 92 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_RecordMsgLance::
# 93 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_LanceLetsRecordYourNames, MSGBOX_DEFAULT
# 94 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 95 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 96 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_RecordMsgNoah::
# 97 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_NoahLetsRecordYourNames, MSGBOX_DEFAULT
# 98 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 99 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 100 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_RecordMsgSteven::
# 101 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_StevenLetsRecordYourNames, MSGBOX_DEFAULT
# 102 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 103 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 104 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_RecordMsgGary::
# 105 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_GaryLetsRecordYourNames, MSGBOX_DEFAULT
# 106 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	return
# 107 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 108 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_GameClearMale::
# 109 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 110 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 111 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 112 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
# 113 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 114 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 115 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_GameClearFemale::
# 116 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 117 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 118 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 119 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
# 120 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 121 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 122 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1:
# 123 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 124 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 125 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 126 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 127 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 128 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 129 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 130 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 131 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2:
# 132 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 133 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 134 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 135 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 136 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 137 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 138 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 139 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions:
# 140 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "WALLACE: This room…\p"
# 141 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "This is where we keep records of\n"
# 142 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "POKéMON that prevailed through\l"
# 143 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "harsh battles.\p"
# 144 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "It is here that the LEAGUE CHAMPIONS\n"
# 145 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "are honored.$"
# 146 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 147 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames:
# 148 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "WALLACE: Come on, let's record your\n"
# 149 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "name as a TRAINER who triumphed over\l"
# 150 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the POKéMON LEAGUE, and the names of\l"
# 151 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the partners who battled with you.$"
# 152 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 153 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_StevenHereWeHonorLeagueChampions:
# 154 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "STEVEN: This room…\p"
# 155 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Records of the POKéMON that prevailed\n"
# 156 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "through the harshest of battles are\l"
# 157 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "kept here.\p"
# 158 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "It is here that the LEAGUE CHAMPIONS\n"
# 159 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "are honored.\p"
# 160 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "I never tire of standing in it.$"
# 161 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 162 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_StevenLetsRecordYourNames:
# 163 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "STEVEN: Come. Let's record your name\n"
# 164 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "as a TRAINER who triumphed over the\l"
# 165 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "POKéMON LEAGUE, and the names of the\l"
# 166 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "partners who battled at your side.$"
# 167 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 168 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_GaryHereWeHonorLeagueChampions:
# 169 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "GARY: Check it out! The HALL OF FAME.\p"
# 170 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Every POKéMON that's ever won it all\n"
# 171 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "gets its name kept in this room.\p"
# 172 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Mine are all over the one in KANTO,\n"
# 173 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "obviously.$"
# 174 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 175 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_GaryLetsRecordYourNames:
# 176 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "GARY: Well? Get over here and punch\n"
# 177 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "your name in already!\p"
# 178 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "You and your whole team.\p"
# 179 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "It's not every day I let somebody\n"
# 180 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "else hog the spotlight!$"
# 181 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 182 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_LanceHereWeHonorLeagueChampions:
# 183 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "LANCE: This room…\p"
# 184 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Here rest the names of POKéMON that\n"
# 185 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "prevailed through the harshest of\l"
# 186 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "battles.\p"
# 187 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "It is here that the LEAGUE CHAMPIONS\n"
# 188 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "are honored.\p"
# 189 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "KANTO keeps such a hall as well.\n"
# 190 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Standing in one never loses its\l"
# 191 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "weight.$"
# 192 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 193 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_LanceLetsRecordYourNames:
# 194 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "LANCE: Come.\p"
# 195 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Let's record your name as a TRAINER\n"
# 196 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "who triumphed over the POKéMON\l"
# 197 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "LEAGUE, and the names of the\l"
# 198 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "partners who fought at your side.\p"
# 199 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Wear the title with pride.$"
# 200 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 201 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_NoahHereWeHonorLeagueChampions:
# 202 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "NOAH: This room…\p"
# 203 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "I might be biased, but I think it's\n"
# 204 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the best one I ever made.\p"
# 205 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Every POKéMON that wins it all gets\n"
# 206 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "its name written down in here.\p"
# 207 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "The LEAGUE CHAMPIONS are honored\n"
# 208 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "in this hall forever.$"
# 209 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 210 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_NoahLetsRecordYourNames:
# 211 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "NOAH: Go ahead.\p"
# 212 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Record your name as a TRAINER who\n"
# 213 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "triumphed over the POKéMON LEAGUE,\l"
# 214 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "and the partners who battled\l"
# 215 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "beside you.\p"
# 216 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "This is my favorite part.$"
