RustboroCity_EventScript_SchoolKids::
# 2 "data/maps/RustboroCity/scripts.pory"
	lockall
# 4 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_FATKID, Common_Movement_FacePlayer
# 5 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_NERDKID, Common_Movement_FacePlayer
# 6 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 8 "data/maps/RustboroCity/scripts.pory"
	checkitemspace ITEM_ASSAULT_VEST, 1
# 9 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_SchoolKids_2
# 15 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_SchoolKids_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 17 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_SchoolKids_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 20 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 21 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 31
	goto_if_eq RustboroCity_EventScript_SchoolKids_6
RustboroCity_EventScript_SchoolKids_4:
# 25 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 32
	goto_if_eq RustboroCity_EventScript_SchoolKids_11
RustboroCity_EventScript_SchoolKids_9:
# 30 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_FATKID, Rustboro_Movement_Kid1ToDoor
# 31 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_NERDKID, Rustboro_Movement_Kid2ToDoor
# 32 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/RustboroCity/scripts.pory"
	opendoor 27, 34
# 35 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 36 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_FATKID, Rustboro_Movement_EnterDoor
# 37 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 38 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_FATKID
# 39 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_NERDKID, Rustboro_Movement_StepLeftEnterDoor
# 40 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_NERDKID
# 42 "data/maps/RustboroCity/scripts.pory"
	closedoor 27, 34
# 43 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 45 "data/maps/RustboroCity/scripts.pory"
	delay 60
# 47 "data/maps/RustboroCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 48 "data/maps/RustboroCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 49 "data/maps/RustboroCity/scripts.pory"
	playse SE_M_EXPLOSION
# 50 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 51 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8005, 1
# 52 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8006, 8
# 53 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8007, 5
# 54 "data/maps/RustboroCity/scripts.pory"
	special ShakeCamera
# 55 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 56 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 57 "data/maps/RustboroCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 58 "data/maps/RustboroCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 59 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 61 "data/maps/RustboroCity/scripts.pory"
	opendoor 27, 34
# 62 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 63 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_FATKID, 27, 34
# 64 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_FATKID
# 65 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_FATKID, Rustboro_Movement_KidFlee1
# 66 "data/maps/RustboroCity/scripts.pory"
	delay 40
# 67 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_NERDKID, 27, 34
# 68 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_NERDKID
# 69 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_NERDKID, Rustboro_Movement_KidFlee2
# 70 "data/maps/RustboroCity/scripts.pory"
	delay 40
# 71 "data/maps/RustboroCity/scripts.pory"
	closedoor 27, 34
# 72 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 73 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_FATKID
# 76 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_NERDKID
# 77 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RUSTBORO_KIDS_ARRESTED
# 79 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_SchoolKids_2:
# 10 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_SchoolKids_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_SchoolKids_5:
# 22 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Rustboro_Movement_PlayerAsideFrom31
# 23 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	goto RustboroCity_EventScript_SchoolKids_4

RustboroCity_EventScript_SchoolKids_6:
# 21 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8009, 35
	goto_if_eq RustboroCity_EventScript_SchoolKids_5
	goto RustboroCity_EventScript_SchoolKids_4

RustboroCity_EventScript_SchoolKids_10:
# 26 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Rustboro_Movement_PlayerAsideFrom32
# 27 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	goto RustboroCity_EventScript_SchoolKids_9

RustboroCity_EventScript_SchoolKids_11:
# 25 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8009, 35
	goto_if_eq RustboroCity_EventScript_SchoolKids_10
	goto RustboroCity_EventScript_SchoolKids_9


# 83 "data/maps/RustboroCity/scripts.pory"
Rustboro_Movement_PlayerAsideFrom31:
# 84 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 85 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 86 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 89 "data/maps/RustboroCity/scripts.pory"
Rustboro_Movement_PlayerAsideFrom32:
# 90 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 91 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 94 "data/maps/RustboroCity/scripts.pory"
Rustboro_Movement_Kid1ToDoor:
# 95 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 96 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 96 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 96 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 96 "data/maps/RustboroCity/scripts.pory"
	walk_left
	step_end

# 99 "data/maps/RustboroCity/scripts.pory"
Rustboro_Movement_Kid2ToDoor:
# 100 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 101 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 102 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 102 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 102 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 102 "data/maps/RustboroCity/scripts.pory"
	walk_left
	step_end

# 105 "data/maps/RustboroCity/scripts.pory"
Rustboro_Movement_EnterDoor:
# 106 "data/maps/RustboroCity/scripts.pory"
	walk_up
	step_end

# 109 "data/maps/RustboroCity/scripts.pory"
Rustboro_Movement_StepLeftEnterDoor:
# 110 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 111 "data/maps/RustboroCity/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/RustboroCity/scripts.pory"
Rustboro_Movement_KidFlee1:
# 115 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 115 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 116 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 117 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 117 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 117 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 117 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 117 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 117 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
	step_end

# 120 "data/maps/RustboroCity/scripts.pory"
Rustboro_Movement_KidFlee2:
# 121 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 121 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 122 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 123 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 123 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 123 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 123 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 123 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
	step_end

# 126 "data/maps/RustboroCity/scripts.pory"

# 127 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 128 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 129 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 130 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 131 "data/maps/RustboroCity/scripts.pory"

# 132 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 133 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 134 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 135 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 136 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 137 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 138 "data/maps/RustboroCity/scripts.pory"
	end
# 139 "data/maps/RustboroCity/scripts.pory"

# 140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 141 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 142 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
# 143 "data/maps/RustboroCity/scripts.pory"
	end
# 144 "data/maps/RustboroCity/scripts.pory"

# 145 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 146 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
# 147 "data/maps/RustboroCity/scripts.pory"
	end
# 148 "data/maps/RustboroCity/scripts.pory"

# 149 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 150 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 151 "data/maps/RustboroCity/scripts.pory"
	return
# 152 "data/maps/RustboroCity/scripts.pory"

# 153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 154 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 155 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 156 "data/maps/RustboroCity/scripts.pory"

# 157 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 158 "data/maps/RustboroCity/scripts.pory"
	lockall
# 159 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 160 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 161 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 163 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 164 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 165 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 166 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 167 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 168 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 169 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 170 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 171 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 172 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 173 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 174 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 175 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 176 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 177 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 178 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 179 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 180 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 181 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 182 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 183 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 184 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 185 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 186 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 187 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 188 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 189 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 190 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 191 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 192 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 193 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 194 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 195 "data/maps/RustboroCity/scripts.pory"

# 196 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 197 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 198 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 199 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 200 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 201 "data/maps/RustboroCity/scripts.pory"

# 202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 203 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 204 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 205 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 207 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 208 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 209 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 210 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 211 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 212 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 213 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 214 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 215 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 216 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 217 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 218 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 219 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 220 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 221 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 222 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 223 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 224 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 225 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 226 "data/maps/RustboroCity/scripts.pory"
	end
# 227 "data/maps/RustboroCity/scripts.pory"

# 228 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 229 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 230 "data/maps/RustboroCity/scripts.pory"
	step_end
# 231 "data/maps/RustboroCity/scripts.pory"

# 232 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 233 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 234 "data/maps/RustboroCity/scripts.pory"
	step_end
# 235 "data/maps/RustboroCity/scripts.pory"

# 236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 237 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 238 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 239 "data/maps/RustboroCity/scripts.pory"
	step_end
# 240 "data/maps/RustboroCity/scripts.pory"

# 241 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 243 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 244 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 245 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 246 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 247 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 248 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 249 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 250 "data/maps/RustboroCity/scripts.pory"
	step_end
# 251 "data/maps/RustboroCity/scripts.pory"

# 252 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 253 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 254 "data/maps/RustboroCity/scripts.pory"
	step_end
# 255 "data/maps/RustboroCity/scripts.pory"

# 256 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 257 "data/maps/RustboroCity/scripts.pory"
	lock
# 258 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 259 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 260 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 261 "data/maps/RustboroCity/scripts.pory"
	release
# 262 "data/maps/RustboroCity/scripts.pory"
	end
# 263 "data/maps/RustboroCity/scripts.pory"

# 264 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 265 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 266 "data/maps/RustboroCity/scripts.pory"
	release
# 267 "data/maps/RustboroCity/scripts.pory"
	end
# 268 "data/maps/RustboroCity/scripts.pory"

# 269 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 270 "data/maps/RustboroCity/scripts.pory"
	lock
# 271 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 272 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 273 "data/maps/RustboroCity/scripts.pory"
	release
# 274 "data/maps/RustboroCity/scripts.pory"
	end
# 275 "data/maps/RustboroCity/scripts.pory"

# 276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 277 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 278 "data/maps/RustboroCity/scripts.pory"
	end
# 279 "data/maps/RustboroCity/scripts.pory"

# 280 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 281 "data/maps/RustboroCity/scripts.pory"
	lock
# 282 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 283 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 284 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 285 "data/maps/RustboroCity/scripts.pory"
	release
# 286 "data/maps/RustboroCity/scripts.pory"
	end
# 287 "data/maps/RustboroCity/scripts.pory"

# 288 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 289 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 290 "data/maps/RustboroCity/scripts.pory"
	release
# 291 "data/maps/RustboroCity/scripts.pory"
	end
# 292 "data/maps/RustboroCity/scripts.pory"

# 293 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 294 "data/maps/RustboroCity/scripts.pory"
	lock
# 295 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 296 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 297 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 298 "data/maps/RustboroCity/scripts.pory"
	release
# 299 "data/maps/RustboroCity/scripts.pory"
	end
# 300 "data/maps/RustboroCity/scripts.pory"

# 301 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 302 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 303 "data/maps/RustboroCity/scripts.pory"
	release
# 304 "data/maps/RustboroCity/scripts.pory"
	end
# 305 "data/maps/RustboroCity/scripts.pory"

# 306 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 307 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 308 "data/maps/RustboroCity/scripts.pory"
	end
# 309 "data/maps/RustboroCity/scripts.pory"

# 310 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 311 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 312 "data/maps/RustboroCity/scripts.pory"
	end
# 313 "data/maps/RustboroCity/scripts.pory"

# 314 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 315 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 316 "data/maps/RustboroCity/scripts.pory"
	end
# 317 "data/maps/RustboroCity/scripts.pory"

# 318 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 319 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 320 "data/maps/RustboroCity/scripts.pory"
	end
# 321 "data/maps/RustboroCity/scripts.pory"

# 322 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 323 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 324 "data/maps/RustboroCity/scripts.pory"
	end
# 325 "data/maps/RustboroCity/scripts.pory"

# 326 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 327 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 328 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 329 "data/maps/RustboroCity/scripts.pory"
	end
# 330 "data/maps/RustboroCity/scripts.pory"

# 331 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 332 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 333 "data/maps/RustboroCity/scripts.pory"
	end
# 334 "data/maps/RustboroCity/scripts.pory"

# 335 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 336 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 337 "data/maps/RustboroCity/scripts.pory"
	end
# 338 "data/maps/RustboroCity/scripts.pory"

# 339 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 340 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 341 "data/maps/RustboroCity/scripts.pory"
	end
# 342 "data/maps/RustboroCity/scripts.pory"

# 343 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 344 "data/maps/RustboroCity/scripts.pory"
	lock
# 345 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 346 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 347 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 348 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/RustboroCity/scripts.pory"
	release
# 350 "data/maps/RustboroCity/scripts.pory"
	end
# 351 "data/maps/RustboroCity/scripts.pory"

# 352 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 353 "data/maps/RustboroCity/scripts.pory"
	lock
# 354 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 355 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 356 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 357 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 358 "data/maps/RustboroCity/scripts.pory"
	release
# 359 "data/maps/RustboroCity/scripts.pory"
	end
# 360 "data/maps/RustboroCity/scripts.pory"

# 361 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 362 "data/maps/RustboroCity/scripts.pory"
	lock
# 363 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 364 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 365 "data/maps/RustboroCity/scripts.pory"
	release
# 366 "data/maps/RustboroCity/scripts.pory"
	end
# 367 "data/maps/RustboroCity/scripts.pory"

# 368 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 369 "data/maps/RustboroCity/scripts.pory"
	lockall
# 370 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 371 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 372 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 373 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 374 "data/maps/RustboroCity/scripts.pory"
	end
# 375 "data/maps/RustboroCity/scripts.pory"

# 376 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 377 "data/maps/RustboroCity/scripts.pory"
	lockall
# 378 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 379 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 380 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 381 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 382 "data/maps/RustboroCity/scripts.pory"
	end
# 383 "data/maps/RustboroCity/scripts.pory"

# 384 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 385 "data/maps/RustboroCity/scripts.pory"
	lockall
# 386 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 387 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 388 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 389 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 390 "data/maps/RustboroCity/scripts.pory"
	end
# 391 "data/maps/RustboroCity/scripts.pory"

# 392 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 393 "data/maps/RustboroCity/scripts.pory"
	lockall
# 394 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 395 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 396 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 397 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 398 "data/maps/RustboroCity/scripts.pory"
	end
# 399 "data/maps/RustboroCity/scripts.pory"

# 400 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 401 "data/maps/RustboroCity/scripts.pory"
	lockall
# 402 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 403 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 404 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 405 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 406 "data/maps/RustboroCity/scripts.pory"
	end
# 407 "data/maps/RustboroCity/scripts.pory"

# 408 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 409 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 410 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 411 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 412 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 413 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 414 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 415 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 416 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 417 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 418 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 419 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 420 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 421 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 422 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 423 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 424 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 425 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 426 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 427 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 428 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 429 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 430 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 431 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 432 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 433 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 434 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 435 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 436 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 437 "data/maps/RustboroCity/scripts.pory"
	end
# 438 "data/maps/RustboroCity/scripts.pory"

# 439 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 440 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 441 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 442 "data/maps/RustboroCity/scripts.pory"
	return
# 443 "data/maps/RustboroCity/scripts.pory"

# 444 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 445 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 446 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 447 "data/maps/RustboroCity/scripts.pory"
	return
# 448 "data/maps/RustboroCity/scripts.pory"

# 449 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 450 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 451 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 452 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 453 "data/maps/RustboroCity/scripts.pory"
	return
# 454 "data/maps/RustboroCity/scripts.pory"

# 455 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 456 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 457 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 458 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 459 "data/maps/RustboroCity/scripts.pory"
	return
# 460 "data/maps/RustboroCity/scripts.pory"

# 461 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 462 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 463 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 464 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 465 "data/maps/RustboroCity/scripts.pory"
	return
# 466 "data/maps/RustboroCity/scripts.pory"

# 467 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 468 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 469 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 470 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 471 "data/maps/RustboroCity/scripts.pory"
	return
# 472 "data/maps/RustboroCity/scripts.pory"

# 473 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 474 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 475 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 476 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 477 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 478 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 479 "data/maps/RustboroCity/scripts.pory"
	return
# 480 "data/maps/RustboroCity/scripts.pory"

# 481 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 482 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 483 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 484 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 485 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 486 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 487 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 488 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 489 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 490 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 491 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 492 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 493 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 494 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 495 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 496 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 497 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 498 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 499 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 500 "data/maps/RustboroCity/scripts.pory"
	step_end
# 501 "data/maps/RustboroCity/scripts.pory"

# 502 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 503 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 504 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 505 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 506 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 507 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 508 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 509 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 510 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 511 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 512 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 513 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 514 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 515 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 516 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 517 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 518 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 519 "data/maps/RustboroCity/scripts.pory"
	step_end
# 520 "data/maps/RustboroCity/scripts.pory"

# 521 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 522 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 523 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 524 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 525 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 526 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 527 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 528 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 529 "data/maps/RustboroCity/scripts.pory"
	step_end
# 530 "data/maps/RustboroCity/scripts.pory"

# 531 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 532 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 533 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 534 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 535 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 536 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 537 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 538 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 539 "data/maps/RustboroCity/scripts.pory"
	step_end
# 540 "data/maps/RustboroCity/scripts.pory"

# 541 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 542 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 543 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 544 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 545 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 546 "data/maps/RustboroCity/scripts.pory"
	step_end
# 547 "data/maps/RustboroCity/scripts.pory"

# 548 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 549 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 550 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 551 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 552 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 553 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 554 "data/maps/RustboroCity/scripts.pory"
	step_end
# 555 "data/maps/RustboroCity/scripts.pory"

# 556 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 557 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 558 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 559 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 560 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 561 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 562 "data/maps/RustboroCity/scripts.pory"
	step_end
# 563 "data/maps/RustboroCity/scripts.pory"

# 564 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 565 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 566 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 567 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 568 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 569 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 570 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 571 "data/maps/RustboroCity/scripts.pory"
	step_end
# 572 "data/maps/RustboroCity/scripts.pory"

# 573 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 574 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 575 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 576 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 577 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 578 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 579 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 580 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 581 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 582 "data/maps/RustboroCity/scripts.pory"
	step_end
# 583 "data/maps/RustboroCity/scripts.pory"

# 584 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 585 "data/maps/RustboroCity/scripts.pory"
	lock
# 586 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 587 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 588 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 589 "data/maps/RustboroCity/scripts.pory"
	release
# 590 "data/maps/RustboroCity/scripts.pory"
	end
# 591 "data/maps/RustboroCity/scripts.pory"

# 592 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 593 "data/maps/RustboroCity/scripts.pory"
	waitse
# 594 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 595 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 596 "data/maps/RustboroCity/scripts.pory"
	end
# 597 "data/maps/RustboroCity/scripts.pory"

# 598 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 599 "data/maps/RustboroCity/scripts.pory"
	lockall
# 600 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 601 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 602 "data/maps/RustboroCity/scripts.pory"
	end
# 603 "data/maps/RustboroCity/scripts.pory"

# 604 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 605 "data/maps/RustboroCity/scripts.pory"
	lockall
# 606 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 607 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 608 "data/maps/RustboroCity/scripts.pory"
	end
# 609 "data/maps/RustboroCity/scripts.pory"

# 610 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 611 "data/maps/RustboroCity/scripts.pory"
	lockall
# 612 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 613 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 614 "data/maps/RustboroCity/scripts.pory"
	end
# 615 "data/maps/RustboroCity/scripts.pory"

# 616 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 617 "data/maps/RustboroCity/scripts.pory"
	lockall
# 618 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 619 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 620 "data/maps/RustboroCity/scripts.pory"
	end
# 621 "data/maps/RustboroCity/scripts.pory"

# 622 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 623 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 624 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 625 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 626 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 627 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 628 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 629 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 630 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 631 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 632 "data/maps/RustboroCity/scripts.pory"
	end
# 633 "data/maps/RustboroCity/scripts.pory"

# 634 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 635 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	return
# 646 "data/maps/RustboroCity/scripts.pory"

# 647 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	return
# 658 "data/maps/RustboroCity/scripts.pory"

# 659 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 660 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 661 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 664 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 665 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 668 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/RustboroCity/scripts.pory"
	return
# 670 "data/maps/RustboroCity/scripts.pory"

# 671 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 673 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 675 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 676 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 678 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 679 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 680 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 681 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 682 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 683 "data/maps/RustboroCity/scripts.pory"
	return
# 684 "data/maps/RustboroCity/scripts.pory"

# 685 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 686 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 687 "data/maps/RustboroCity/scripts.pory"
	step_end
# 688 "data/maps/RustboroCity/scripts.pory"

# 689 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 690 "data/maps/RustboroCity/scripts.pory"
	lockall
# 691 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 692 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 693 "data/maps/RustboroCity/scripts.pory"
	end
# 694 "data/maps/RustboroCity/scripts.pory"

# 695 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 696 "data/maps/RustboroCity/scripts.pory"
	lockall
# 697 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 698 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 699 "data/maps/RustboroCity/scripts.pory"
	end
# 700 "data/maps/RustboroCity/scripts.pory"

# 701 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 702 "data/maps/RustboroCity/scripts.pory"
	lockall
# 703 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 704 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 705 "data/maps/RustboroCity/scripts.pory"
	end
# 706 "data/maps/RustboroCity/scripts.pory"

# 707 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 708 "data/maps/RustboroCity/scripts.pory"
	lockall
# 709 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 710 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 711 "data/maps/RustboroCity/scripts.pory"
	end
# 712 "data/maps/RustboroCity/scripts.pory"

# 713 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 714 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 715 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 716 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 717 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 718 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 719 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 720 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 721 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 722 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 723 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 724 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 725 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 726 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 727 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 728 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 729 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 730 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 731 "data/maps/RustboroCity/scripts.pory"
	end
# 732 "data/maps/RustboroCity/scripts.pory"

# 733 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 734 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 735 "data/maps/RustboroCity/scripts.pory"
	return
# 736 "data/maps/RustboroCity/scripts.pory"

# 737 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 738 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 739 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 740 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 741 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 742 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 744 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 746 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/RustboroCity/scripts.pory"
	return
# 748 "data/maps/RustboroCity/scripts.pory"

# 749 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 750 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 751 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 752 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 753 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 754 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 755 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 756 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 758 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 759 "data/maps/RustboroCity/scripts.pory"
	return
# 760 "data/maps/RustboroCity/scripts.pory"

# 761 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 768 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 769 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 770 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 771 "data/maps/RustboroCity/scripts.pory"
	return
# 772 "data/maps/RustboroCity/scripts.pory"

# 773 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 774 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 775 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 776 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 780 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 782 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 783 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 784 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 785 "data/maps/RustboroCity/scripts.pory"
	return
# 786 "data/maps/RustboroCity/scripts.pory"

# 787 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 788 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 789 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 791 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 792 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	return
# 796 "data/maps/RustboroCity/scripts.pory"

# 797 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 798 "data/maps/RustboroCity/scripts.pory"
	lockall
# 799 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 800 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 801 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 803 "data/maps/RustboroCity/scripts.pory"

# 804 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 805 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 806 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 807 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 808 "data/maps/RustboroCity/scripts.pory"
	return
# 809 "data/maps/RustboroCity/scripts.pory"

# 810 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 811 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 812 "data/maps/RustboroCity/scripts.pory"
	return
# 813 "data/maps/RustboroCity/scripts.pory"

# 814 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 815 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 816 "data/maps/RustboroCity/scripts.pory"
	return
# 817 "data/maps/RustboroCity/scripts.pory"

# 818 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 819 "data/maps/RustboroCity/scripts.pory"
	lockall
# 820 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 821 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 822 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 823 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 824 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 825 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 826 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 827 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 829 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 830 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 831 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 832 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 833 "data/maps/RustboroCity/scripts.pory"

# 834 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 835 "data/maps/RustboroCity/scripts.pory"
	lockall
# 836 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 837 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 838 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 839 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 840 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 841 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 842 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 843 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 844 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 845 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 846 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 847 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 848 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 849 "data/maps/RustboroCity/scripts.pory"

# 850 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 851 "data/maps/RustboroCity/scripts.pory"
	lockall
# 852 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 853 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 854 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 855 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 856 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 857 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 858 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 859 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 860 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 861 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 862 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 863 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 864 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 865 "data/maps/RustboroCity/scripts.pory"

# 866 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 867 "data/maps/RustboroCity/scripts.pory"
	lockall
# 868 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 869 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 870 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 871 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 872 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 873 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 874 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 875 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 876 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 877 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 878 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 879 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 880 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 881 "data/maps/RustboroCity/scripts.pory"

# 882 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 883 "data/maps/RustboroCity/scripts.pory"
	lockall
# 884 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 885 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 886 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 887 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 888 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 889 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 890 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 891 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 892 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 893 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 894 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 895 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 896 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 897 "data/maps/RustboroCity/scripts.pory"

# 898 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 899 "data/maps/RustboroCity/scripts.pory"
	lockall
# 900 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 901 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 902 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 903 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 904 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 905 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 906 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 907 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 908 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 909 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 910 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 911 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 912 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 913 "data/maps/RustboroCity/scripts.pory"

# 914 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 915 "data/maps/RustboroCity/scripts.pory"
	lockall
# 916 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 917 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 918 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 919 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 920 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 921 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 922 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 923 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 924 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 925 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 926 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 927 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 928 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 929 "data/maps/RustboroCity/scripts.pory"

# 930 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 931 "data/maps/RustboroCity/scripts.pory"
	lockall
# 932 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 933 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 934 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 935 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 936 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 937 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 938 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 939 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 940 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 941 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 942 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 943 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 944 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 945 "data/maps/RustboroCity/scripts.pory"

# 946 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 947 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 948 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 949 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 950 "data/maps/RustboroCity/scripts.pory"
	end
# 951 "data/maps/RustboroCity/scripts.pory"

# 952 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 953 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 954 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 955 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 956 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 957 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 958 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 959 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 960 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 961 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 962 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 963 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 964 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 965 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 966 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 967 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 968 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 969 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 970 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 971 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 972 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 973 "data/maps/RustboroCity/scripts.pory"
	end
# 974 "data/maps/RustboroCity/scripts.pory"

# 975 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 976 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 977 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 978 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 979 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 980 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 981 "data/maps/RustboroCity/scripts.pory"
	end
# 982 "data/maps/RustboroCity/scripts.pory"

# 983 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 984 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 985 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 986 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 987 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 988 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 989 "data/maps/RustboroCity/scripts.pory"
	end
# 990 "data/maps/RustboroCity/scripts.pory"

# 991 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 992 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 993 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 994 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 995 "data/maps/RustboroCity/scripts.pory"
	end
# 996 "data/maps/RustboroCity/scripts.pory"

# 997 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 998 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 999 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 1000 "data/maps/RustboroCity/scripts.pory"
	return
# 1001 "data/maps/RustboroCity/scripts.pory"

# 1002 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 1003 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 1004 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1005 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1006 "data/maps/RustboroCity/scripts.pory"
	end
# 1007 "data/maps/RustboroCity/scripts.pory"

# 1008 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 1009 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 1010 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1011 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1012 "data/maps/RustboroCity/scripts.pory"
	end
# 1013 "data/maps/RustboroCity/scripts.pory"

# 1014 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 1015 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 1016 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1017 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1018 "data/maps/RustboroCity/scripts.pory"
	end
# 1019 "data/maps/RustboroCity/scripts.pory"

# 1020 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 1021 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 1022 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 1023 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 1024 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 1025 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1026 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1027 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1028 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 1029 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 1030 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1031 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1032 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 1033 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1034 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1035 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 1036 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 1037 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1038 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1039 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1040 "data/maps/RustboroCity/scripts.pory"
	end
# 1041 "data/maps/RustboroCity/scripts.pory"

# 1042 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 1043 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 1044 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 1045 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1046 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1047 "data/maps/RustboroCity/scripts.pory"
	end
# 1048 "data/maps/RustboroCity/scripts.pory"

# 1049 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 1050 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 1051 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 1052 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 1053 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 1054 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 1055 "data/maps/RustboroCity/scripts.pory"
	end
# 1056 "data/maps/RustboroCity/scripts.pory"

# 1057 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 1058 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 1059 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 1060 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1061 "data/maps/RustboroCity/scripts.pory"
	end
# 1062 "data/maps/RustboroCity/scripts.pory"

# 1063 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 1064 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 1065 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1066 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1067 "data/maps/RustboroCity/scripts.pory"
	end
# 1068 "data/maps/RustboroCity/scripts.pory"

# 1069 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 1070 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 1071 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1072 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1073 "data/maps/RustboroCity/scripts.pory"
	end
# 1074 "data/maps/RustboroCity/scripts.pory"

# 1075 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 1076 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 1077 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1078 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1079 "data/maps/RustboroCity/scripts.pory"
	end
# 1080 "data/maps/RustboroCity/scripts.pory"

# 1081 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1082 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1083 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1084 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1085 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1086 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1087 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1088 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1089 "data/maps/RustboroCity/scripts.pory"

# 1090 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1091 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1092 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1093 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1094 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1095 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1096 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1097 "data/maps/RustboroCity/scripts.pory"

# 1098 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1099 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1100 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1101 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1102 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1103 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1104 "data/maps/RustboroCity/scripts.pory"

# 1105 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1106 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1107 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1108 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1109 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1110 "data/maps/RustboroCity/scripts.pory"

# 1111 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1112 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1113 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1114 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1115 "data/maps/RustboroCity/scripts.pory"

# 1116 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1117 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1118 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1119 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1120 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1121 "data/maps/RustboroCity/scripts.pory"

# 1122 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1123 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1124 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1125 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1126 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1127 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1128 "data/maps/RustboroCity/scripts.pory"

# 1129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1130 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1131 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1132 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1133 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1134 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1135 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1136 "data/maps/RustboroCity/scripts.pory"

# 1137 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1138 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1139 "data/maps/RustboroCity/scripts.pory"
	end
# 1140 "data/maps/RustboroCity/scripts.pory"

# 1141 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1146 "data/maps/RustboroCity/scripts.pory"

# 1147 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1148 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1151 "data/maps/RustboroCity/scripts.pory"

# 1152 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1158 "data/maps/RustboroCity/scripts.pory"

# 1159 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1163 "data/maps/RustboroCity/scripts.pory"

# 1164 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1169 "data/maps/RustboroCity/scripts.pory"

# 1170 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1176 "data/maps/RustboroCity/scripts.pory"

# 1177 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1182 "data/maps/RustboroCity/scripts.pory"

# 1183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1185 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1186 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1190 "data/maps/RustboroCity/scripts.pory"

# 1191 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1193 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1194 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1195 "data/maps/RustboroCity/scripts.pory"

# 1196 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1198 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1200 "data/maps/RustboroCity/scripts.pory"

# 1201 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1205 "data/maps/RustboroCity/scripts.pory"

# 1206 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1209 "data/maps/RustboroCity/scripts.pory"

# 1210 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1215 "data/maps/RustboroCity/scripts.pory"

# 1216 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1219 "data/maps/RustboroCity/scripts.pory"

# 1220 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1222 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1223 "data/maps/RustboroCity/scripts.pory"

# 1224 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1231 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1232 "data/maps/RustboroCity/scripts.pory"

# 1233 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1236 "data/maps/RustboroCity/scripts.pory"

# 1237 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1245 "data/maps/RustboroCity/scripts.pory"

# 1246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1249 "data/maps/RustboroCity/scripts.pory"

# 1250 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1253 "data/maps/RustboroCity/scripts.pory"

# 1254 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1261 "data/maps/RustboroCity/scripts.pory"

# 1262 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1265 "data/maps/RustboroCity/scripts.pory"

# 1266 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1275 "data/maps/RustboroCity/scripts.pory"

# 1276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1280 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1281 "data/maps/RustboroCity/scripts.pory"

# 1282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1285 "data/maps/RustboroCity/scripts.pory"

# 1286 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1289 "data/maps/RustboroCity/scripts.pory"

# 1290 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1291 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1292 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1293 "data/maps/RustboroCity/scripts.pory"

# 1294 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1296 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1300 "data/maps/RustboroCity/scripts.pory"

# 1301 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1305 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1308 "data/maps/RustboroCity/scripts.pory"

# 1309 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1310 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1311 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1312 "data/maps/RustboroCity/scripts.pory"

# 1313 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1314 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1315 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1316 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1317 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1319 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1320 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1321 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1323 "data/maps/RustboroCity/scripts.pory"

# 1324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1325 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1326 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1327 "data/maps/RustboroCity/scripts.pory"

# 1328 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1329 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1330 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1331 "data/maps/RustboroCity/scripts.pory"

# 1332 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1333 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1334 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1335 "data/maps/RustboroCity/scripts.pory"

# 1336 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1337 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1338 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1339 "data/maps/RustboroCity/scripts.pory"

# 1340 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1341 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1342 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1343 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1344 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1345 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1346 "data/maps/RustboroCity/scripts.pory"

# 1347 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1348 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1349 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1350 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1351 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1352 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1353 "data/maps/RustboroCity/scripts.pory"

# 1354 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1355 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1356 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1357 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1358 "data/maps/RustboroCity/scripts.pory"

# 1359 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1360 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1361 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1362 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1363 "data/maps/RustboroCity/scripts.pory"

# 1364 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1365 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1366 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1367 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1368 "data/maps/RustboroCity/scripts.pory"

# 1369 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1370 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1371 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1372 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1373 "data/maps/RustboroCity/scripts.pory"

# 1374 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1375 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1376 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1377 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1378 "data/maps/RustboroCity/scripts.pory"

# 1379 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1380 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1381 "data/maps/RustboroCity/scripts.pory"

# 1382 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1383 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1384 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1385 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1386 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1387 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1388 "data/maps/RustboroCity/scripts.pory"

# 1389 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1390 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1391 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1392 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1393 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1394 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1395 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1396 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1397 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1398 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1399 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1400 "data/maps/RustboroCity/scripts.pory"

# 1401 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1402 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1403 "data/maps/RustboroCity/scripts.pory"

# 1404 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1405 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1406 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1407 "data/maps/RustboroCity/scripts.pory"

# 1408 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1409 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1410 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1411 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1412 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1413 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1414 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1415 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1416 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_EventScript_SchoolKids_Text_0:
# 10 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, you are alright. We've got\n"
	.string "something for you, but your BAG is full!\l"
	.string "Come back with some room.$"

RustboroCity_EventScript_SchoolKids_Text_1:
# 15 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, you are alright. If you are going to\n"
	.string "school today, take this.$"

RustboroCity_EventScript_SchoolKids_Text_2:
# 17 "data/maps/RustboroCity/scripts.pory"
	.string "Heheheh... See you around.$"
