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
# 23 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_3, MSGBOX_NPC
OldaleTown_EventScript_Psyduck_1:
# 26 "data/maps/OldaleTown/scripts.pory"
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
	givemon SPECIES_PSYDUCK, 5, ITEM_SOOTHE_BELL
# 17 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_2, MSGBOX_NPC
# 18 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 21 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_MART_Psyduck
	goto OldaleTown_EventScript_Psyduck_1

OldaleTown_EventScript_Psyduck_6:
# 9 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Psyduck_Text_1, MSGBOX_NPC
# 10 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 30 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 31 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 32 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 33 "data/maps/OldaleTown/scripts.pory"

# 34 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 35 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 36 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 37 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 38 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 39 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 40 "data/maps/OldaleTown/scripts.pory"
	end
# 41 "data/maps/OldaleTown/scripts.pory"

# 42 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 43 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 44 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 45 "data/maps/OldaleTown/scripts.pory"
	return
# 46 "data/maps/OldaleTown/scripts.pory"

# 47 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 48 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 49 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 50 "data/maps/OldaleTown/scripts.pory"
	return
# 51 "data/maps/OldaleTown/scripts.pory"

# 52 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 53 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 54 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 55 "data/maps/OldaleTown/scripts.pory"
	return
# 56 "data/maps/OldaleTown/scripts.pory"

# 57 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 58 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 59 "data/maps/OldaleTown/scripts.pory"
	end
# 60 "data/maps/OldaleTown/scripts.pory"

# 61 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 62 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 63 "data/maps/OldaleTown/scripts.pory"
	end
# 64 "data/maps/OldaleTown/scripts.pory"

# 65 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 66 "data/maps/OldaleTown/scripts.pory"
	lock
# 67 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 68 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 69 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 70 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 71 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 72 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 73 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 74 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 75 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 76 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 77 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 78 "data/maps/OldaleTown/scripts.pory"
	end
# 79 "data/maps/OldaleTown/scripts.pory"

# 80 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 81 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 82 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 83 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 84 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 85 "data/maps/OldaleTown/scripts.pory"
	end
# 86 "data/maps/OldaleTown/scripts.pory"

# 87 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 88 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 89 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 90 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 92 "data/maps/OldaleTown/scripts.pory"
	end
# 93 "data/maps/OldaleTown/scripts.pory"

# 94 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 95 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 96 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 97 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 98 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 99 "data/maps/OldaleTown/scripts.pory"
	end
# 100 "data/maps/OldaleTown/scripts.pory"

# 101 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 102 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 103 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 104 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 105 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 106 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 107 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 108 "data/maps/OldaleTown/scripts.pory"
	release
# 109 "data/maps/OldaleTown/scripts.pory"
	end
# 110 "data/maps/OldaleTown/scripts.pory"

# 111 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 112 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 113 "data/maps/OldaleTown/scripts.pory"
	release
# 114 "data/maps/OldaleTown/scripts.pory"
	end
# 115 "data/maps/OldaleTown/scripts.pory"

# 116 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 117 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 118 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 119 "data/maps/OldaleTown/scripts.pory"
	release
# 120 "data/maps/OldaleTown/scripts.pory"
	end
# 121 "data/maps/OldaleTown/scripts.pory"

# 122 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 124 "data/maps/OldaleTown/scripts.pory"
	walk_up
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
	walk_in_place_faster_down
# 131 "data/maps/OldaleTown/scripts.pory"
	step_end
# 132 "data/maps/OldaleTown/scripts.pory"

# 133 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 134 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 140 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 142 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 143 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 144 "data/maps/OldaleTown/scripts.pory"
	step_end
# 145 "data/maps/OldaleTown/scripts.pory"

# 146 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_up
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
	walk_in_place_faster_down
# 155 "data/maps/OldaleTown/scripts.pory"
	step_end
# 156 "data/maps/OldaleTown/scripts.pory"

# 157 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 158 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 159 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 160 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 163 "data/maps/OldaleTown/scripts.pory"
	walk_right
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
	delay_8
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 171 "data/maps/OldaleTown/scripts.pory"
	step_end
# 172 "data/maps/OldaleTown/scripts.pory"

# 173 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 181 "data/maps/OldaleTown/scripts.pory"
	step_end
# 182 "data/maps/OldaleTown/scripts.pory"

# 183 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 184 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 185 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 186 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 187 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 188 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 192 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 193 "data/maps/OldaleTown/scripts.pory"
	step_end
# 194 "data/maps/OldaleTown/scripts.pory"

# 195 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 197 "data/maps/OldaleTown/scripts.pory"
	walk_up
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
	step_end
# 204 "data/maps/OldaleTown/scripts.pory"

# 205 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 206 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 207 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 209 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 210 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 212 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 213 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 214 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 216 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 217 "data/maps/OldaleTown/scripts.pory"
	step_end
# 218 "data/maps/OldaleTown/scripts.pory"

# 219 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 220 "data/maps/OldaleTown/scripts.pory"
	lock
# 221 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 222 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 223 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 224 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 225 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 226 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/OldaleTown/scripts.pory"
	release
# 228 "data/maps/OldaleTown/scripts.pory"
	end
# 229 "data/maps/OldaleTown/scripts.pory"

# 230 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 231 "data/maps/OldaleTown/scripts.pory"
	lockall
# 232 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 233 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 234 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 235 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 236 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 237 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 238 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 239 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 240 "data/maps/OldaleTown/scripts.pory"
	end
# 241 "data/maps/OldaleTown/scripts.pory"

# 242 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 243 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 244 "data/maps/OldaleTown/scripts.pory"
	release
# 245 "data/maps/OldaleTown/scripts.pory"
	end
# 246 "data/maps/OldaleTown/scripts.pory"

# 247 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 248 "data/maps/OldaleTown/scripts.pory"
	lockall
# 249 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 250 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 251 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 252 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 253 "data/maps/OldaleTown/scripts.pory"
	end
# 254 "data/maps/OldaleTown/scripts.pory"

# 255 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 256 "data/maps/OldaleTown/scripts.pory"
	lockall
# 257 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 258 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 259 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 260 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 262 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 263 "data/maps/OldaleTown/scripts.pory"
	end
# 264 "data/maps/OldaleTown/scripts.pory"

# 265 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 266 "data/maps/OldaleTown/scripts.pory"
	lockall
# 267 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 268 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 269 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 270 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 271 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 272 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 273 "data/maps/OldaleTown/scripts.pory"
	end
# 274 "data/maps/OldaleTown/scripts.pory"

# 275 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 276 "data/maps/OldaleTown/scripts.pory"
	lockall
# 277 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 278 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 279 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 280 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 281 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 282 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 283 "data/maps/OldaleTown/scripts.pory"
	end
# 284 "data/maps/OldaleTown/scripts.pory"

# 285 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 286 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 287 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 288 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 289 "data/maps/OldaleTown/scripts.pory"
	end
# 290 "data/maps/OldaleTown/scripts.pory"

# 291 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 292 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 293 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 294 "data/maps/OldaleTown/scripts.pory"
	end
# 295 "data/maps/OldaleTown/scripts.pory"

# 296 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 297 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 298 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 299 "data/maps/OldaleTown/scripts.pory"
	end
# 300 "data/maps/OldaleTown/scripts.pory"

# 301 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 302 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 303 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 304 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 305 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 306 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 307 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 308 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 309 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 310 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 311 "data/maps/OldaleTown/scripts.pory"
	end
# 312 "data/maps/OldaleTown/scripts.pory"

# 313 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 314 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 315 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 316 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 317 "data/maps/OldaleTown/scripts.pory"
	return
# 318 "data/maps/OldaleTown/scripts.pory"

# 319 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 320 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 321 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 322 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 323 "data/maps/OldaleTown/scripts.pory"
	return
# 324 "data/maps/OldaleTown/scripts.pory"

# 325 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 326 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 327 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 328 "data/maps/OldaleTown/scripts.pory"
	step_end
# 329 "data/maps/OldaleTown/scripts.pory"

# 330 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 331 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 332 "data/maps/OldaleTown/scripts.pory"
	step_end
# 333 "data/maps/OldaleTown/scripts.pory"

# 334 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 335 "data/maps/OldaleTown/scripts.pory"
	face_left
# 336 "data/maps/OldaleTown/scripts.pory"
	step_end
# 337 "data/maps/OldaleTown/scripts.pory"

# 338 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 339 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 340 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 341 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 342 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 343 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 344 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 345 "data/maps/OldaleTown/scripts.pory"
	step_end
# 346 "data/maps/OldaleTown/scripts.pory"

# 347 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 348 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 349 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 350 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 351 "data/maps/OldaleTown/scripts.pory"
	step_end
# 352 "data/maps/OldaleTown/scripts.pory"

# 353 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 354 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 355 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 356 "data/maps/OldaleTown/scripts.pory"
	step_end
# 357 "data/maps/OldaleTown/scripts.pory"

# 358 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 359 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 361 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 362 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 363 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 364 "data/maps/OldaleTown/scripts.pory"
	step_end
# 365 "data/maps/OldaleTown/scripts.pory"

# 366 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 367 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 368 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 369 "data/maps/OldaleTown/scripts.pory"
	step_end
# 370 "data/maps/OldaleTown/scripts.pory"

# 371 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 372 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 373 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 374 "data/maps/OldaleTown/scripts.pory"

# 375 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 376 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 377 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 378 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 379 "data/maps/OldaleTown/scripts.pory"

# 380 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 381 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 382 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 383 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 384 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 387 "data/maps/OldaleTown/scripts.pory"

# 388 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 389 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 390 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 392 "data/maps/OldaleTown/scripts.pory"

# 393 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 394 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 395 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 396 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 398 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 399 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 400 "data/maps/OldaleTown/scripts.pory"

# 401 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 402 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 403 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 404 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 405 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 406 "data/maps/OldaleTown/scripts.pory"

# 407 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 408 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 409 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 411 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 412 "data/maps/OldaleTown/scripts.pory"

# 413 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 414 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 415 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 416 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 417 "data/maps/OldaleTown/scripts.pory"

# 418 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 419 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 420 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 421 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 422 "data/maps/OldaleTown/scripts.pory"

# 423 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 424 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 425 "data/maps/OldaleTown/scripts.pory"
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
# 23 "data/maps/OldaleTown/scripts.pory"
	.string "Psy...$"
