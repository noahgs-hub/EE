OldaleTown_EventScript_Psyduck::
# 2 "data/maps/OldaleTown/scripts.pory"
	lock
# 3 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 4 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_0, MSGBOX_YESNO
# 6 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_EventScript_Psyduck_2
# 42 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_4, MSGBOX_NPC
OldaleTown_EventScript_Psyduck_1:
# 45 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_Psyduck_2:
# 7 "data/maps/OldaleTown/scripts.pory"
	specialvar VAR_RESULT, IsPlayerNamePeter
# 8 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_EventScript_Psyduck_6
# 23 "data/maps/OldaleTown/scripts.pory"
	getpartysize
# 24 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq OldaleTown_EventScript_Psyduck_9
# 29 "data/maps/OldaleTown/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 31 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_PSYDUCK, 5, ITEM_MYSTIC_WATER, BALL_CHERISH, NATURE_MODEST, abilityNum = 2, gender = MALE, speedEv = 252, spAtkEv = 252, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31, move1 = MOVE_CONFUSION, move2 = MOVE_WATER_GUN, move3 = MOVE_SWIFT, move4 = MOVE_HYPNOSIS, shinyMode = SHINY_MODE_ALWAYS
# 33 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_3, MSGBOX_NPC
# 34 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 35 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 37 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_PSYDUCK
# 38 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_MART_Psyduck
# 39 "data/maps/OldaleTown/scripts.pory"
	special DrawWholeMapView
	goto OldaleTown_EventScript_Psyduck_1

OldaleTown_EventScript_Psyduck_6:
# 9 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 11 "data/maps/OldaleTown/scripts.pory"
	waitse
# 12 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 13 "data/maps/OldaleTown/scripts.pory"
	delay 40
# 14 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 15 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_PSYDUCK
# 16 "data/maps/OldaleTown/scripts.pory"
	setwildbattle SPECIES_PSYDUCK, 5
# 17 "data/maps/OldaleTown/scripts.pory"
	dowildbattle
# 18 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_MART_Psyduck
# 19 "data/maps/OldaleTown/scripts.pory"
	special DrawWholeMapView
# 20 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_Psyduck_9:
# 25 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_2, MSGBOX_NPC
# 26 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 49 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 50 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 51 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 52 "data/maps/OldaleTown/scripts.pory"

# 53 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 54 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 55 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 56 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 57 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 58 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 59 "data/maps/OldaleTown/scripts.pory"
	end
# 60 "data/maps/OldaleTown/scripts.pory"

# 61 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 62 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 63 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 64 "data/maps/OldaleTown/scripts.pory"
	return
# 65 "data/maps/OldaleTown/scripts.pory"

# 66 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 67 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 68 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 69 "data/maps/OldaleTown/scripts.pory"
	return
# 70 "data/maps/OldaleTown/scripts.pory"

# 71 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 72 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 73 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 74 "data/maps/OldaleTown/scripts.pory"
	return
# 75 "data/maps/OldaleTown/scripts.pory"

# 76 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 77 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 78 "data/maps/OldaleTown/scripts.pory"
	end
# 79 "data/maps/OldaleTown/scripts.pory"

# 80 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 81 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 82 "data/maps/OldaleTown/scripts.pory"
	end
# 83 "data/maps/OldaleTown/scripts.pory"

# 84 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 85 "data/maps/OldaleTown/scripts.pory"
	lock
# 86 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 87 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 88 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 89 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 90 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 91 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 92 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 93 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 94 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 95 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 96 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 97 "data/maps/OldaleTown/scripts.pory"
	end
# 98 "data/maps/OldaleTown/scripts.pory"

# 99 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 100 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 101 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 102 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 104 "data/maps/OldaleTown/scripts.pory"
	end
# 105 "data/maps/OldaleTown/scripts.pory"

# 106 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 107 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 108 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 109 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 110 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 111 "data/maps/OldaleTown/scripts.pory"
	end
# 112 "data/maps/OldaleTown/scripts.pory"

# 113 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 114 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 115 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 116 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 117 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 118 "data/maps/OldaleTown/scripts.pory"
	end
# 119 "data/maps/OldaleTown/scripts.pory"

# 120 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 121 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 122 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 123 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 124 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 125 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 126 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 127 "data/maps/OldaleTown/scripts.pory"
	release
# 128 "data/maps/OldaleTown/scripts.pory"
	end
# 129 "data/maps/OldaleTown/scripts.pory"

# 130 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 131 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 132 "data/maps/OldaleTown/scripts.pory"
	release
# 133 "data/maps/OldaleTown/scripts.pory"
	end
# 134 "data/maps/OldaleTown/scripts.pory"

# 135 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 136 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 137 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 138 "data/maps/OldaleTown/scripts.pory"
	release
# 139 "data/maps/OldaleTown/scripts.pory"
	end
# 140 "data/maps/OldaleTown/scripts.pory"

# 141 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 142 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 143 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 144 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 146 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 149 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 150 "data/maps/OldaleTown/scripts.pory"
	step_end
# 151 "data/maps/OldaleTown/scripts.pory"

# 152 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 153 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 157 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 158 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 159 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 160 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 163 "data/maps/OldaleTown/scripts.pory"
	step_end
# 164 "data/maps/OldaleTown/scripts.pory"

# 165 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 166 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 167 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 168 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 171 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 172 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 173 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 174 "data/maps/OldaleTown/scripts.pory"
	step_end
# 175 "data/maps/OldaleTown/scripts.pory"

# 176 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 188 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 190 "data/maps/OldaleTown/scripts.pory"
	step_end
# 191 "data/maps/OldaleTown/scripts.pory"

# 192 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 194 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 197 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 198 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 200 "data/maps/OldaleTown/scripts.pory"
	step_end
# 201 "data/maps/OldaleTown/scripts.pory"

# 202 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 203 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 204 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 205 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 206 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 207 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 209 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 210 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 212 "data/maps/OldaleTown/scripts.pory"
	step_end
# 213 "data/maps/OldaleTown/scripts.pory"

# 214 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 216 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 217 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 218 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 219 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 220 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 221 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 222 "data/maps/OldaleTown/scripts.pory"
	step_end
# 223 "data/maps/OldaleTown/scripts.pory"

# 224 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 225 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 226 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 227 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 229 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 230 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 233 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 234 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 235 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 236 "data/maps/OldaleTown/scripts.pory"
	step_end
# 237 "data/maps/OldaleTown/scripts.pory"

# 238 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 239 "data/maps/OldaleTown/scripts.pory"
	lock
# 240 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 241 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 242 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 243 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 244 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 245 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 246 "data/maps/OldaleTown/scripts.pory"
	release
# 247 "data/maps/OldaleTown/scripts.pory"
	end
# 248 "data/maps/OldaleTown/scripts.pory"

# 249 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 250 "data/maps/OldaleTown/scripts.pory"
	lockall
# 251 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 252 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 253 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 254 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 255 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 256 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 257 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 258 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 259 "data/maps/OldaleTown/scripts.pory"
	end
# 260 "data/maps/OldaleTown/scripts.pory"

# 261 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 262 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 263 "data/maps/OldaleTown/scripts.pory"
	release
# 264 "data/maps/OldaleTown/scripts.pory"
	end
# 265 "data/maps/OldaleTown/scripts.pory"

# 266 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 267 "data/maps/OldaleTown/scripts.pory"
	lockall
# 268 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 269 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 270 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 271 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 272 "data/maps/OldaleTown/scripts.pory"
	end
# 273 "data/maps/OldaleTown/scripts.pory"

# 274 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 275 "data/maps/OldaleTown/scripts.pory"
	lockall
# 276 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 277 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 279 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 281 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 282 "data/maps/OldaleTown/scripts.pory"
	end
# 283 "data/maps/OldaleTown/scripts.pory"

# 284 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 285 "data/maps/OldaleTown/scripts.pory"
	lockall
# 286 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 287 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 289 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 290 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 291 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 292 "data/maps/OldaleTown/scripts.pory"
	end
# 293 "data/maps/OldaleTown/scripts.pory"

# 294 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 295 "data/maps/OldaleTown/scripts.pory"
	lockall
# 296 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 297 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 298 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 299 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 300 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 301 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 302 "data/maps/OldaleTown/scripts.pory"
	end
# 303 "data/maps/OldaleTown/scripts.pory"

# 304 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 305 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 306 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 307 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 308 "data/maps/OldaleTown/scripts.pory"
	end
# 309 "data/maps/OldaleTown/scripts.pory"

# 310 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 311 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 312 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 313 "data/maps/OldaleTown/scripts.pory"
	end
# 314 "data/maps/OldaleTown/scripts.pory"

# 315 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 316 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 317 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 318 "data/maps/OldaleTown/scripts.pory"
	end
# 319 "data/maps/OldaleTown/scripts.pory"

# 320 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 321 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 322 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 323 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 324 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 325 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 326 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 327 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 328 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 329 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 330 "data/maps/OldaleTown/scripts.pory"
	end
# 331 "data/maps/OldaleTown/scripts.pory"

# 332 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 333 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 334 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 335 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 336 "data/maps/OldaleTown/scripts.pory"
	return
# 337 "data/maps/OldaleTown/scripts.pory"

# 338 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 339 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 340 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 341 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/OldaleTown/scripts.pory"
	return
# 343 "data/maps/OldaleTown/scripts.pory"

# 344 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 345 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 346 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 347 "data/maps/OldaleTown/scripts.pory"
	step_end
# 348 "data/maps/OldaleTown/scripts.pory"

# 349 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 350 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 351 "data/maps/OldaleTown/scripts.pory"
	step_end
# 352 "data/maps/OldaleTown/scripts.pory"

# 353 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 354 "data/maps/OldaleTown/scripts.pory"
	face_left
# 355 "data/maps/OldaleTown/scripts.pory"
	step_end
# 356 "data/maps/OldaleTown/scripts.pory"

# 357 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 358 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 359 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 361 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 362 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 363 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 364 "data/maps/OldaleTown/scripts.pory"
	step_end
# 365 "data/maps/OldaleTown/scripts.pory"

# 366 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 367 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 368 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 369 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 370 "data/maps/OldaleTown/scripts.pory"
	step_end
# 371 "data/maps/OldaleTown/scripts.pory"

# 372 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 373 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 374 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 375 "data/maps/OldaleTown/scripts.pory"
	step_end
# 376 "data/maps/OldaleTown/scripts.pory"

# 377 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 378 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 379 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 380 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 381 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 382 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 383 "data/maps/OldaleTown/scripts.pory"
	step_end
# 384 "data/maps/OldaleTown/scripts.pory"

# 385 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 386 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 387 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 388 "data/maps/OldaleTown/scripts.pory"
	step_end
# 389 "data/maps/OldaleTown/scripts.pory"

# 390 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 392 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 393 "data/maps/OldaleTown/scripts.pory"

# 394 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 395 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 396 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 398 "data/maps/OldaleTown/scripts.pory"

# 399 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 400 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 401 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 402 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 403 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 404 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 405 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 406 "data/maps/OldaleTown/scripts.pory"

# 407 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 408 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 409 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 411 "data/maps/OldaleTown/scripts.pory"

# 412 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 413 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 414 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 415 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 416 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 417 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 418 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 419 "data/maps/OldaleTown/scripts.pory"

# 420 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 421 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 422 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 423 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 424 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 425 "data/maps/OldaleTown/scripts.pory"

# 426 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 427 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 428 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 429 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 430 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 431 "data/maps/OldaleTown/scripts.pory"

# 432 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 433 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 434 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 435 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 436 "data/maps/OldaleTown/scripts.pory"

# 437 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 438 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 439 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 440 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 441 "data/maps/OldaleTown/scripts.pory"

# 442 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 443 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 444 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

OldaleTown_EventScript_Psyduck_Text_0:
# 4 "data/maps/OldaleTown/scripts.pory"
	.string "Are you Peter?$"

OldaleTown_EventScript_Psyduck_Text_1:
# 9 "data/maps/OldaleTown/scripts.pory"
	.string "PSY?!! (PSYDUCK can tell you aren't\n"
	.string "really Peter. It looks furious!)$"

OldaleTown_EventScript_Psyduck_Text_2:
# 25 "data/maps/OldaleTown/scripts.pory"
	.string "Psy... (You have no room in your party!)$"

OldaleTown_EventScript_Psyduck_Text_3:
# 33 "data/maps/OldaleTown/scripts.pory"
	.string "Psy-ay! Psyduck joined the team!$"

OldaleTown_EventScript_Psyduck_Text_4:
# 42 "data/maps/OldaleTown/scripts.pory"
	.string "Psy...$"
