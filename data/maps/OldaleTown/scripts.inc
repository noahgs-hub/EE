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
# 40 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_4, MSGBOX_NPC
OldaleTown_EventScript_Psyduck_1:
# 43 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_Psyduck_2:
# 7 "data/maps/OldaleTown/scripts.pory"
	specialvar VAR_RESULT, IsPlayerNamePeter
# 8 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_EventScript_Psyduck_6
# 21 "data/maps/OldaleTown/scripts.pory"
	getpartysize
# 22 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq OldaleTown_EventScript_Psyduck_9
# 27 "data/maps/OldaleTown/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 29 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_PSYDUCK, 5, ITEM_MYSTIC_WATER, BALL_CHERISH, NATURE_MODEST, abilityNum = 2, gender = MALE, speedEv = 252, spAtkEv = 252, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31, move1 = MOVE_CONFUSION, move2 = MOVE_WATER_GUN, move3 = MOVE_SWIFT, move4 = MOVE_HYPNOSIS, shinyMode = SHINY_MODE_ALWAYS
# 31 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_3, MSGBOX_NPC
# 32 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 35 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_PSYDUCK
# 36 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_MART_Psyduck
# 37 "data/maps/OldaleTown/scripts.pory"
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
	release
	end

OldaleTown_EventScript_Psyduck_9:
# 23 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_2, MSGBOX_NPC
# 24 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 47 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 48 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 49 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 50 "data/maps/OldaleTown/scripts.pory"

# 51 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 52 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 53 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 54 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 55 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 56 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 57 "data/maps/OldaleTown/scripts.pory"
	end
# 58 "data/maps/OldaleTown/scripts.pory"

# 59 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 60 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 61 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 62 "data/maps/OldaleTown/scripts.pory"
	return
# 63 "data/maps/OldaleTown/scripts.pory"

# 64 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 65 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 66 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 67 "data/maps/OldaleTown/scripts.pory"
	return
# 68 "data/maps/OldaleTown/scripts.pory"

# 69 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 70 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 71 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 72 "data/maps/OldaleTown/scripts.pory"
	return
# 73 "data/maps/OldaleTown/scripts.pory"

# 74 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 75 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 76 "data/maps/OldaleTown/scripts.pory"
	end
# 77 "data/maps/OldaleTown/scripts.pory"

# 78 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 79 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 80 "data/maps/OldaleTown/scripts.pory"
	end
# 81 "data/maps/OldaleTown/scripts.pory"

# 82 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 83 "data/maps/OldaleTown/scripts.pory"
	lock
# 84 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 85 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 86 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 87 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 88 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 89 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 90 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 91 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 92 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 93 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 94 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 95 "data/maps/OldaleTown/scripts.pory"
	end
# 96 "data/maps/OldaleTown/scripts.pory"

# 97 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 98 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 99 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 100 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 101 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 102 "data/maps/OldaleTown/scripts.pory"
	end
# 103 "data/maps/OldaleTown/scripts.pory"

# 104 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 105 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 106 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 107 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 108 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 109 "data/maps/OldaleTown/scripts.pory"
	end
# 110 "data/maps/OldaleTown/scripts.pory"

# 111 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 112 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 113 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 114 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 115 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 116 "data/maps/OldaleTown/scripts.pory"
	end
# 117 "data/maps/OldaleTown/scripts.pory"

# 118 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 119 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 120 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 121 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 122 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 123 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 124 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 125 "data/maps/OldaleTown/scripts.pory"
	release
# 126 "data/maps/OldaleTown/scripts.pory"
	end
# 127 "data/maps/OldaleTown/scripts.pory"

# 128 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 129 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 130 "data/maps/OldaleTown/scripts.pory"
	release
# 131 "data/maps/OldaleTown/scripts.pory"
	end
# 132 "data/maps/OldaleTown/scripts.pory"

# 133 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 134 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 135 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 136 "data/maps/OldaleTown/scripts.pory"
	release
# 137 "data/maps/OldaleTown/scripts.pory"
	end
# 138 "data/maps/OldaleTown/scripts.pory"

# 139 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 140 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_up
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
	walk_in_place_faster_down
# 148 "data/maps/OldaleTown/scripts.pory"
	step_end
# 149 "data/maps/OldaleTown/scripts.pory"

# 150 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 153 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 157 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 158 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 159 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 160 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 161 "data/maps/OldaleTown/scripts.pory"
	step_end
# 162 "data/maps/OldaleTown/scripts.pory"

# 163 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 164 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 165 "data/maps/OldaleTown/scripts.pory"
	walk_up
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
	walk_in_place_faster_down
# 172 "data/maps/OldaleTown/scripts.pory"
	step_end
# 173 "data/maps/OldaleTown/scripts.pory"

# 174 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 186 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 188 "data/maps/OldaleTown/scripts.pory"
	step_end
# 189 "data/maps/OldaleTown/scripts.pory"

# 190 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 192 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 194 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 197 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 198 "data/maps/OldaleTown/scripts.pory"
	step_end
# 199 "data/maps/OldaleTown/scripts.pory"

# 200 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 201 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 202 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 203 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 204 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 205 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 206 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 207 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 209 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 210 "data/maps/OldaleTown/scripts.pory"
	step_end
# 211 "data/maps/OldaleTown/scripts.pory"

# 212 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 213 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 214 "data/maps/OldaleTown/scripts.pory"
	walk_up
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
	step_end
# 221 "data/maps/OldaleTown/scripts.pory"

# 222 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 223 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 224 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 225 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 226 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 227 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 229 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 230 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 233 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 234 "data/maps/OldaleTown/scripts.pory"
	step_end
# 235 "data/maps/OldaleTown/scripts.pory"

# 236 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 237 "data/maps/OldaleTown/scripts.pory"
	lock
# 238 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 239 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 240 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 241 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 242 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 243 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 244 "data/maps/OldaleTown/scripts.pory"
	release
# 245 "data/maps/OldaleTown/scripts.pory"
	end
# 246 "data/maps/OldaleTown/scripts.pory"

# 247 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 248 "data/maps/OldaleTown/scripts.pory"
	lockall
# 249 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 250 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 251 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 252 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 253 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 254 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 255 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 256 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 257 "data/maps/OldaleTown/scripts.pory"
	end
# 258 "data/maps/OldaleTown/scripts.pory"

# 259 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 260 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 261 "data/maps/OldaleTown/scripts.pory"
	release
# 262 "data/maps/OldaleTown/scripts.pory"
	end
# 263 "data/maps/OldaleTown/scripts.pory"

# 264 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 265 "data/maps/OldaleTown/scripts.pory"
	lockall
# 266 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 267 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 268 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 269 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 270 "data/maps/OldaleTown/scripts.pory"
	end
# 271 "data/maps/OldaleTown/scripts.pory"

# 272 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 273 "data/maps/OldaleTown/scripts.pory"
	lockall
# 274 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 275 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 276 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 277 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 279 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 280 "data/maps/OldaleTown/scripts.pory"
	end
# 281 "data/maps/OldaleTown/scripts.pory"

# 282 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 283 "data/maps/OldaleTown/scripts.pory"
	lockall
# 284 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 285 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 286 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 287 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 289 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 290 "data/maps/OldaleTown/scripts.pory"
	end
# 291 "data/maps/OldaleTown/scripts.pory"

# 292 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 293 "data/maps/OldaleTown/scripts.pory"
	lockall
# 294 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 295 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 296 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 297 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 298 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 299 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 300 "data/maps/OldaleTown/scripts.pory"
	end
# 301 "data/maps/OldaleTown/scripts.pory"

# 302 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 303 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 304 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 305 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 306 "data/maps/OldaleTown/scripts.pory"
	end
# 307 "data/maps/OldaleTown/scripts.pory"

# 308 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 309 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 310 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 311 "data/maps/OldaleTown/scripts.pory"
	end
# 312 "data/maps/OldaleTown/scripts.pory"

# 313 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 314 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 315 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 316 "data/maps/OldaleTown/scripts.pory"
	end
# 317 "data/maps/OldaleTown/scripts.pory"

# 318 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 319 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 320 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 321 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 322 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 323 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 324 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 325 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 326 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 327 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 328 "data/maps/OldaleTown/scripts.pory"
	end
# 329 "data/maps/OldaleTown/scripts.pory"

# 330 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 331 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 332 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 333 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 334 "data/maps/OldaleTown/scripts.pory"
	return
# 335 "data/maps/OldaleTown/scripts.pory"

# 336 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 337 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 338 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 339 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 340 "data/maps/OldaleTown/scripts.pory"
	return
# 341 "data/maps/OldaleTown/scripts.pory"

# 342 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 343 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 344 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 345 "data/maps/OldaleTown/scripts.pory"
	step_end
# 346 "data/maps/OldaleTown/scripts.pory"

# 347 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 348 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 349 "data/maps/OldaleTown/scripts.pory"
	step_end
# 350 "data/maps/OldaleTown/scripts.pory"

# 351 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 352 "data/maps/OldaleTown/scripts.pory"
	face_left
# 353 "data/maps/OldaleTown/scripts.pory"
	step_end
# 354 "data/maps/OldaleTown/scripts.pory"

# 355 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 356 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 357 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 358 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 359 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 361 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 362 "data/maps/OldaleTown/scripts.pory"
	step_end
# 363 "data/maps/OldaleTown/scripts.pory"

# 364 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 365 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 366 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 367 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 368 "data/maps/OldaleTown/scripts.pory"
	step_end
# 369 "data/maps/OldaleTown/scripts.pory"

# 370 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 371 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 372 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 373 "data/maps/OldaleTown/scripts.pory"
	step_end
# 374 "data/maps/OldaleTown/scripts.pory"

# 375 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 376 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 377 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 378 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 379 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 380 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 381 "data/maps/OldaleTown/scripts.pory"
	step_end
# 382 "data/maps/OldaleTown/scripts.pory"

# 383 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 384 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 386 "data/maps/OldaleTown/scripts.pory"
	step_end
# 387 "data/maps/OldaleTown/scripts.pory"

# 388 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 389 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 390 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 391 "data/maps/OldaleTown/scripts.pory"

# 392 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 393 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 394 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 395 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 396 "data/maps/OldaleTown/scripts.pory"

# 397 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 398 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 399 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 400 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 401 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 402 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 403 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 404 "data/maps/OldaleTown/scripts.pory"

# 405 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 406 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 407 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 408 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 409 "data/maps/OldaleTown/scripts.pory"

# 410 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 411 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 412 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 413 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 414 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 415 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 416 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 417 "data/maps/OldaleTown/scripts.pory"

# 418 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 419 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 420 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 421 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 422 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 423 "data/maps/OldaleTown/scripts.pory"

# 424 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 425 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 426 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 427 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 428 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 429 "data/maps/OldaleTown/scripts.pory"

# 430 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 431 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 432 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 433 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 434 "data/maps/OldaleTown/scripts.pory"

# 435 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 436 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 437 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 438 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 439 "data/maps/OldaleTown/scripts.pory"

# 440 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 441 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 442 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

OldaleTown_EventScript_Psyduck_Text_0:
# 4 "data/maps/OldaleTown/scripts.pory"
	.string "Are you Peter?$"

OldaleTown_EventScript_Psyduck_Text_1:
# 9 "data/maps/OldaleTown/scripts.pory"
	.string "PSY?!! (PSYDUCK can tell you aren't\n"
	.string "really Peter. It looks furious!)$"

OldaleTown_EventScript_Psyduck_Text_2:
# 23 "data/maps/OldaleTown/scripts.pory"
	.string "Psy... (You have no room in your party!)$"

OldaleTown_EventScript_Psyduck_Text_3:
# 31 "data/maps/OldaleTown/scripts.pory"
	.string "Psy-ay! Psyduck joined the team!$"

OldaleTown_EventScript_Psyduck_Text_4:
# 40 "data/maps/OldaleTown/scripts.pory"
	.string "Psy...$"
