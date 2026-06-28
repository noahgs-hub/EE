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
# 25 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_3, MSGBOX_NPC
OldaleTown_EventScript_Psyduck_1:
# 28 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_Psyduck_2:
# 7 "data/maps/OldaleTown/scripts.pory"
	getpartysize
# 8 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq OldaleTown_EventScript_Psyduck_6
# 13 "data/maps/OldaleTown/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 15 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_PSYDUCK, 5, ITEM_MYSTIC_WATER, BALL_CHERISH, NATURE_MODEST, abilityNum = 2, gender = MALE, speedEv = 252, spAtkEv = 252, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31, move1 = MOVE_CONFUSION, move2 = MOVE_WATER_GUN, move3 = MOVE_SWIFT, move4 = MOVE_HYPNOSIS, shinyMode = SHINY_MODE_ALWAYS
# 17 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_2, MSGBOX_NPC
# 18 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 21 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_MART_Psyduck
# 22 "data/maps/OldaleTown/scripts.pory"
	special DrawWholeMapView
	goto OldaleTown_EventScript_Psyduck_1

OldaleTown_EventScript_Psyduck_6:
# 9 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_1, MSGBOX_NPC
# 10 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 32 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 33 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 34 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 35 "data/maps/OldaleTown/scripts.pory"

# 36 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 37 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 38 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 39 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 40 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 41 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 42 "data/maps/OldaleTown/scripts.pory"
	end
# 43 "data/maps/OldaleTown/scripts.pory"

# 44 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 45 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 46 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 47 "data/maps/OldaleTown/scripts.pory"
	return
# 48 "data/maps/OldaleTown/scripts.pory"

# 49 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 50 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 51 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 52 "data/maps/OldaleTown/scripts.pory"
	return
# 53 "data/maps/OldaleTown/scripts.pory"

# 54 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 55 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 56 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 57 "data/maps/OldaleTown/scripts.pory"
	return
# 58 "data/maps/OldaleTown/scripts.pory"

# 59 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 60 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 61 "data/maps/OldaleTown/scripts.pory"
	end
# 62 "data/maps/OldaleTown/scripts.pory"

# 63 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 64 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 65 "data/maps/OldaleTown/scripts.pory"
	end
# 66 "data/maps/OldaleTown/scripts.pory"

# 67 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 68 "data/maps/OldaleTown/scripts.pory"
	lock
# 69 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 70 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 71 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 72 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 73 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 74 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 75 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 76 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 77 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 78 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 79 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 80 "data/maps/OldaleTown/scripts.pory"
	end
# 81 "data/maps/OldaleTown/scripts.pory"

# 82 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 83 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 84 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 85 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 86 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 87 "data/maps/OldaleTown/scripts.pory"
	end
# 88 "data/maps/OldaleTown/scripts.pory"

# 89 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 90 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 91 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 92 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 94 "data/maps/OldaleTown/scripts.pory"
	end
# 95 "data/maps/OldaleTown/scripts.pory"

# 96 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 97 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 98 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 99 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 100 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 101 "data/maps/OldaleTown/scripts.pory"
	end
# 102 "data/maps/OldaleTown/scripts.pory"

# 103 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 104 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 105 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 106 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 107 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 108 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 109 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 110 "data/maps/OldaleTown/scripts.pory"
	release
# 111 "data/maps/OldaleTown/scripts.pory"
	end
# 112 "data/maps/OldaleTown/scripts.pory"

# 113 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 114 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 115 "data/maps/OldaleTown/scripts.pory"
	release
# 116 "data/maps/OldaleTown/scripts.pory"
	end
# 117 "data/maps/OldaleTown/scripts.pory"

# 118 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 119 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 120 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 121 "data/maps/OldaleTown/scripts.pory"
	release
# 122 "data/maps/OldaleTown/scripts.pory"
	end
# 123 "data/maps/OldaleTown/scripts.pory"

# 124 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 125 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 128 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 129 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 130 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 132 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 133 "data/maps/OldaleTown/scripts.pory"
	step_end
# 134 "data/maps/OldaleTown/scripts.pory"

# 135 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_right
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
	walk_in_place_faster_down
# 146 "data/maps/OldaleTown/scripts.pory"
	step_end
# 147 "data/maps/OldaleTown/scripts.pory"

# 148 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 149 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 150 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 153 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 157 "data/maps/OldaleTown/scripts.pory"
	step_end
# 158 "data/maps/OldaleTown/scripts.pory"

# 159 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 160 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 163 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 164 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 165 "data/maps/OldaleTown/scripts.pory"
	walk_right
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
	delay_8
# 172 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 173 "data/maps/OldaleTown/scripts.pory"
	step_end
# 174 "data/maps/OldaleTown/scripts.pory"

# 175 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 183 "data/maps/OldaleTown/scripts.pory"
	step_end
# 184 "data/maps/OldaleTown/scripts.pory"

# 185 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 186 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 187 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 188 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 189 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 192 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 194 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 195 "data/maps/OldaleTown/scripts.pory"
	step_end
# 196 "data/maps/OldaleTown/scripts.pory"

# 197 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 198 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 200 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 201 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 203 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 204 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 205 "data/maps/OldaleTown/scripts.pory"
	step_end
# 206 "data/maps/OldaleTown/scripts.pory"

# 207 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 209 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 210 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 212 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 213 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 214 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 216 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 217 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 218 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 219 "data/maps/OldaleTown/scripts.pory"
	step_end
# 220 "data/maps/OldaleTown/scripts.pory"

# 221 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 222 "data/maps/OldaleTown/scripts.pory"
	lock
# 223 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 224 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 225 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 226 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 227 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 228 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 229 "data/maps/OldaleTown/scripts.pory"
	release
# 230 "data/maps/OldaleTown/scripts.pory"
	end
# 231 "data/maps/OldaleTown/scripts.pory"

# 232 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 233 "data/maps/OldaleTown/scripts.pory"
	lockall
# 234 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 235 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 236 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 237 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 238 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 239 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 240 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 242 "data/maps/OldaleTown/scripts.pory"
	end
# 243 "data/maps/OldaleTown/scripts.pory"

# 244 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 245 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 246 "data/maps/OldaleTown/scripts.pory"
	release
# 247 "data/maps/OldaleTown/scripts.pory"
	end
# 248 "data/maps/OldaleTown/scripts.pory"

# 249 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 250 "data/maps/OldaleTown/scripts.pory"
	lockall
# 251 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 252 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 253 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 254 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 255 "data/maps/OldaleTown/scripts.pory"
	end
# 256 "data/maps/OldaleTown/scripts.pory"

# 257 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 258 "data/maps/OldaleTown/scripts.pory"
	lockall
# 259 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 260 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 262 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 263 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 264 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 265 "data/maps/OldaleTown/scripts.pory"
	end
# 266 "data/maps/OldaleTown/scripts.pory"

# 267 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 268 "data/maps/OldaleTown/scripts.pory"
	lockall
# 269 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 270 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 271 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 272 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 273 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 274 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 275 "data/maps/OldaleTown/scripts.pory"
	end
# 276 "data/maps/OldaleTown/scripts.pory"

# 277 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 278 "data/maps/OldaleTown/scripts.pory"
	lockall
# 279 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 280 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 281 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 282 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 283 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 284 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 285 "data/maps/OldaleTown/scripts.pory"
	end
# 286 "data/maps/OldaleTown/scripts.pory"

# 287 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 288 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 289 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 290 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 291 "data/maps/OldaleTown/scripts.pory"
	end
# 292 "data/maps/OldaleTown/scripts.pory"

# 293 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 294 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 295 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 296 "data/maps/OldaleTown/scripts.pory"
	end
# 297 "data/maps/OldaleTown/scripts.pory"

# 298 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 299 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 300 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 301 "data/maps/OldaleTown/scripts.pory"
	end
# 302 "data/maps/OldaleTown/scripts.pory"

# 303 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 304 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 305 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 306 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 307 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 308 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 310 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 311 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 312 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 313 "data/maps/OldaleTown/scripts.pory"
	end
# 314 "data/maps/OldaleTown/scripts.pory"

# 315 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 316 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 317 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 318 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 319 "data/maps/OldaleTown/scripts.pory"
	return
# 320 "data/maps/OldaleTown/scripts.pory"

# 321 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 322 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 323 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 324 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 325 "data/maps/OldaleTown/scripts.pory"
	return
# 326 "data/maps/OldaleTown/scripts.pory"

# 327 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 328 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 329 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 330 "data/maps/OldaleTown/scripts.pory"
	step_end
# 331 "data/maps/OldaleTown/scripts.pory"

# 332 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 334 "data/maps/OldaleTown/scripts.pory"
	step_end
# 335 "data/maps/OldaleTown/scripts.pory"

# 336 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 337 "data/maps/OldaleTown/scripts.pory"
	face_left
# 338 "data/maps/OldaleTown/scripts.pory"
	step_end
# 339 "data/maps/OldaleTown/scripts.pory"

# 340 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 341 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 342 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 343 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 344 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 345 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 346 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 347 "data/maps/OldaleTown/scripts.pory"
	step_end
# 348 "data/maps/OldaleTown/scripts.pory"

# 349 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 350 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 351 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 352 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 353 "data/maps/OldaleTown/scripts.pory"
	step_end
# 354 "data/maps/OldaleTown/scripts.pory"

# 355 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 356 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 357 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 358 "data/maps/OldaleTown/scripts.pory"
	step_end
# 359 "data/maps/OldaleTown/scripts.pory"

# 360 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 361 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 362 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 363 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 364 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 365 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 366 "data/maps/OldaleTown/scripts.pory"
	step_end
# 367 "data/maps/OldaleTown/scripts.pory"

# 368 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 369 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 370 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 371 "data/maps/OldaleTown/scripts.pory"
	step_end
# 372 "data/maps/OldaleTown/scripts.pory"

# 373 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 374 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 375 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 376 "data/maps/OldaleTown/scripts.pory"

# 377 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 378 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 379 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 380 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 381 "data/maps/OldaleTown/scripts.pory"

# 382 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 383 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 384 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 387 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 388 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 389 "data/maps/OldaleTown/scripts.pory"

# 390 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 392 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 393 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 394 "data/maps/OldaleTown/scripts.pory"

# 395 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 396 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 398 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 399 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 400 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 401 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 402 "data/maps/OldaleTown/scripts.pory"

# 403 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 404 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 405 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 406 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 407 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 408 "data/maps/OldaleTown/scripts.pory"

# 409 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 411 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 412 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 413 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 414 "data/maps/OldaleTown/scripts.pory"

# 415 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 416 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 417 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 418 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 419 "data/maps/OldaleTown/scripts.pory"

# 420 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 421 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 422 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 423 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 424 "data/maps/OldaleTown/scripts.pory"

# 425 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 426 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 427 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

OldaleTown_EventScript_Psyduck_Text_0:
# 4 "data/maps/OldaleTown/scripts.pory"
	.string "Are you BEETER?$"

OldaleTown_EventScript_Psyduck_Text_1:
# 9 "data/maps/OldaleTown/scripts.pory"
	.string "Psy... (You have no room in your party!)$"

OldaleTown_EventScript_Psyduck_Text_2:
# 17 "data/maps/OldaleTown/scripts.pory"
	.string "Psy-ay! Psyduck joined the team!$"

OldaleTown_EventScript_Psyduck_Text_3:
# 25 "data/maps/OldaleTown/scripts.pory"
	.string "Psy...$"
