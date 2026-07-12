Route111_EventScript_Colin::
# 2 "data/maps/Route111/scripts.pory"
	lock
# 3 "data/maps/Route111/scripts.pory"
	faceplayer
# 4 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_RECEIVED_HEAVY_DUTY_BOOTS_ROUTE111, Route111_EventScript_Colin_2
# 9 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Colin_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/Route111/scripts.pory"
	closemessage
# 11 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinFaceBorder
# 12 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 13 "data/maps/Route111/scripts.pory"
	delay 20
# 15 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE111_COLIN_HIKER
# 16 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_COLIN_HIKER
# 17 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN_HIKER, Route111_Movement_HikerFleeSouth
# 18 "data/maps/Route111/scripts.pory"
	delay 16
# 19 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 20 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Common_Movement_ExclamationMark
# 21 "data/maps/Route111/scripts.pory"
	waitmovement LOCALID_ROUTE111_COLIN
# 22 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinTrackHiker
# 23 "data/maps/Route111/scripts.pory"
	waitmovement LOCALID_ROUTE111_COLIN
# 24 "data/maps/Route111/scripts.pory"
	waitmovement LOCALID_ROUTE111_COLIN_HIKER
# 26 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN_HIKER, Route111_Movement_HikerFleeWest
# 27 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinFaceLeft
# 28 "data/maps/Route111/scripts.pory"
	waitmovement LOCALID_ROUTE111_COLIN
# 29 "data/maps/Route111/scripts.pory"
	playse SE_BALL_THROW
# 30 "data/maps/Route111/scripts.pory"
	delay 16
# 31 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE111_COLIN_CHARIZARD
# 32 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_COLIN_CHARIZARD
# 33 "data/maps/Route111/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 34 "data/maps/Route111/scripts.pory"
	delay 20
# 35 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Colin_Text_2, MSGBOX_DEFAULT
# 36 "data/maps/Route111/scripts.pory"
	closemessage
# 37 "data/maps/Route111/scripts.pory"
	waitmovement LOCALID_ROUTE111_COLIN_HIKER
# 38 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_COLIN_HIKER
# 39 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_COLIN_HIKER
# 40 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN_CHARIZARD, Route111_Movement_CharizardChase
# 41 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinFaceDown
# 42 "data/maps/Route111/scripts.pory"
	waitmovement LOCALID_ROUTE111_COLIN_CHARIZARD
# 44 "data/maps/Route111/scripts.pory"
	playse SE_M_FLAMETHROWER
# 48 "data/maps/Route111/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 49 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_COLIN_CHARIZARD
# 50 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_COLIN_CHARIZARD
# 51 "data/maps/Route111/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 52 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 53 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8005, 2
# 54 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8006, 8
# 55 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8007, 3
# 56 "data/maps/Route111/scripts.pory"
	special ShakeCamera
# 57 "data/maps/Route111/scripts.pory"
	waitstate
# 58 "data/maps/Route111/scripts.pory"
	waitse
# 59 "data/maps/Route111/scripts.pory"
	delay 20
# 60 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Colin_Text_3, MSGBOX_DEFAULT
# 61 "data/maps/Route111/scripts.pory"
	closemessage
# 64 "data/maps/Route111/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Route111_EventScript_Colin_5
# 71 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinExit
# 72 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route111/scripts.pory"
	delay 60
# 74 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinReturn
# 75 "data/maps/Route111/scripts.pory"
	waitmovement 0
Route111_EventScript_Colin_4:
# 77 "data/maps/Route111/scripts.pory"
	faceplayer
# 78 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Colin_Text_4, MSGBOX_DEFAULT
# 79 "data/maps/Route111/scripts.pory"
	giveitem ITEM_HEAVY_DUTY_BOOTS
# 80 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_EventScript_Colin_9
# 85 "data/maps/Route111/scripts.pory"
	setflag FLAG_RECEIVED_HEAVY_DUTY_BOOTS_ROUTE111
# 86 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_Colin_2:
# 5 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Colin_Text_0, MSGBOX_DEFAULT
# 6 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_Colin_5:
# 65 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinExitSidestep
# 66 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route111/scripts.pory"
	delay 60
# 68 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinReturnSidestep
# 69 "data/maps/Route111/scripts.pory"
	waitmovement 0
	goto Route111_EventScript_Colin_4

Route111_EventScript_Colin_9:
# 81 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Colin_Text_5, MSGBOX_DEFAULT
# 82 "data/maps/Route111/scripts.pory"
	release
	end


# 90 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinFaceBorder:
# 91 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 94 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinTrackHiker:
# 95 "data/maps/Route111/scripts.pory"
	face_right
# 96 "data/maps/Route111/scripts.pory"
	delay_16
# 97 "data/maps/Route111/scripts.pory"
	delay_16
# 98 "data/maps/Route111/scripts.pory"
	face_down
	step_end

# 101 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinFaceLeft:
# 102 "data/maps/Route111/scripts.pory"
	face_left
	step_end

# 105 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinFaceDown:
# 106 "data/maps/Route111/scripts.pory"
	face_down
	step_end

# 110 "data/maps/Route111/scripts.pory"
Route111_Movement_HikerFleeSouth:
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 112 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route111/scripts.pory"
	walk_fast_left
	step_end

# 116 "data/maps/Route111/scripts.pory"
Route111_Movement_HikerFleeWest:
# 117 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route111/scripts.pory"
	walk_fast_left
	step_end

# 123 "data/maps/Route111/scripts.pory"
Route111_Movement_CharizardChase:
# 124 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 125 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route111/scripts.pory"
	walk_fast_left
	step_end

# 129 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinExit:
# 130 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 130 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 130 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_left
	step_end

# 134 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinReturn:
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 136 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 136 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 136 "data/maps/Route111/scripts.pory"
	walk_fast_up
	step_end

# 140 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinExitSidestep:
# 141 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 142 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 142 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 142 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 143 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route111/scripts.pory"
	walk_fast_left
	step_end

# 146 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinReturnSidestep:
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 148 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 148 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 148 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 149 "data/maps/Route111/scripts.pory"
	walk_fast_right
	step_end

# 152 "data/maps/Route111/scripts.pory"

# 153 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 154 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 155 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 156 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 157 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 158 "data/maps/Route111/scripts.pory"
	.byte 0
# 159 "data/maps/Route111/scripts.pory"

# 160 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 161 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 162 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 163 "data/maps/Route111/scripts.pory"
	end
# 164 "data/maps/Route111/scripts.pory"

# 165 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 166 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 167 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 168 "data/maps/Route111/scripts.pory"
	return
# 169 "data/maps/Route111/scripts.pory"

# 170 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 171 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 172 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 173 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 174 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 175 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 176 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 177 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 178 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 179 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 180 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 181 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 182 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 183 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 184 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 185 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 186 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 187 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 188 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 189 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 190 "data/maps/Route111/scripts.pory"
	return
# 191 "data/maps/Route111/scripts.pory"

# 192 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 193 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 194 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 195 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 196 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 197 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 198 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 199 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 200 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_COLIN_HIKER
# 201 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_COLIN_CHARIZARD
# 202 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 203 "data/maps/Route111/scripts.pory"
	end
# 204 "data/maps/Route111/scripts.pory"

# 205 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 206 "data/maps/Route111/scripts.pory"
	checkplayergender
# 207 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 208 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 209 "data/maps/Route111/scripts.pory"
	return
# 210 "data/maps/Route111/scripts.pory"

# 211 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 212 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 213 "data/maps/Route111/scripts.pory"
	return
# 214 "data/maps/Route111/scripts.pory"

# 215 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 216 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 217 "data/maps/Route111/scripts.pory"
	return
# 218 "data/maps/Route111/scripts.pory"

# 219 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 220 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 221 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 222 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 223 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 224 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 225 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 226 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 227 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 228 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 229 "data/maps/Route111/scripts.pory"
	return
# 230 "data/maps/Route111/scripts.pory"

# 231 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 232 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 233 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 234 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 235 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 236 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 237 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 238 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 239 "data/maps/Route111/scripts.pory"
	end
# 240 "data/maps/Route111/scripts.pory"

# 241 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 242 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 243 "data/maps/Route111/scripts.pory"
	return
# 244 "data/maps/Route111/scripts.pory"

# 245 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 246 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 247 "data/maps/Route111/scripts.pory"
	return
# 248 "data/maps/Route111/scripts.pory"

# 249 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 250 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 251 "data/maps/Route111/scripts.pory"
	.2byte 0
# 252 "data/maps/Route111/scripts.pory"

# 253 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 254 "data/maps/Route111/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 255 "data/maps/Route111/scripts.pory"
	end
# 256 "data/maps/Route111/scripts.pory"

# 257 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 258 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 259 "data/maps/Route111/scripts.pory"
	.2byte 0
# 260 "data/maps/Route111/scripts.pory"

# 261 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 262 "data/maps/Route111/scripts.pory"
	lockall
# 263 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 264 "data/maps/Route111/scripts.pory"
	delay 24
# 265 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 266 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 267 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 268 "data/maps/Route111/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 269 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 270 "data/maps/Route111/scripts.pory"
	delay 16
# 271 "data/maps/Route111/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 272 "data/maps/Route111/scripts.pory"
	delay 16
# 273 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 274 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 275 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 276 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 277 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 278 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 279 "data/maps/Route111/scripts.pory"
	releaseall
# 280 "data/maps/Route111/scripts.pory"
	end
# 281 "data/maps/Route111/scripts.pory"

# 282 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 283 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 284 "data/maps/Route111/scripts.pory"
	releaseall
# 285 "data/maps/Route111/scripts.pory"
	end
# 286 "data/maps/Route111/scripts.pory"

# 287 "data/maps/Route111/scripts.pory"
@ Unused
# 288 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 289 "data/maps/Route111/scripts.pory"
	lock_anim
# 290 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 291 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 292 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 293 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 294 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 295 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 296 "data/maps/Route111/scripts.pory"
	step_end
# 297 "data/maps/Route111/scripts.pory"

# 298 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 299 "data/maps/Route111/scripts.pory"
	lock
# 300 "data/maps/Route111/scripts.pory"
	faceplayer
# 301 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 302 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 303 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 304 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 305 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 306 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 307 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 308 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 309 "data/maps/Route111/scripts.pory"
	release
# 310 "data/maps/Route111/scripts.pory"
	end
# 311 "data/maps/Route111/scripts.pory"

# 312 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 313 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 314 "data/maps/Route111/scripts.pory"
	release
# 315 "data/maps/Route111/scripts.pory"
	end
# 316 "data/maps/Route111/scripts.pory"

# 317 "data/maps/Route111/scripts.pory"
@ Unused
# 318 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 319 "data/maps/Route111/scripts.pory"
	lockall
# 320 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 321 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 322 "data/maps/Route111/scripts.pory"
	end
# 323 "data/maps/Route111/scripts.pory"

# 324 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 325 "data/maps/Route111/scripts.pory"
	lockall
# 326 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 327 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 328 "data/maps/Route111/scripts.pory"
	end
# 329 "data/maps/Route111/scripts.pory"

# 330 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 331 "data/maps/Route111/scripts.pory"
	lockall
# 332 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 333 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 334 "data/maps/Route111/scripts.pory"
	end
# 335 "data/maps/Route111/scripts.pory"

# 336 "data/maps/Route111/scripts.pory"
@ Unused
# 337 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 338 "data/maps/Route111/scripts.pory"
	lockall
# 339 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 340 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 341 "data/maps/Route111/scripts.pory"
	end
# 342 "data/maps/Route111/scripts.pory"

# 343 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 344 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 345 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 346 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 347 "data/maps/Route111/scripts.pory"
	releaseall
# 348 "data/maps/Route111/scripts.pory"
	end
# 349 "data/maps/Route111/scripts.pory"

# 350 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 351 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 352 "data/maps/Route111/scripts.pory"
	closemessage
# 353 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 354 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 355 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 356 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 357 "data/maps/Route111/scripts.pory"
	releaseall
# 358 "data/maps/Route111/scripts.pory"
	end
# 359 "data/maps/Route111/scripts.pory"

# 360 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 361 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushUpFromRoute
# 362 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 363 "data/maps/Route111/scripts.pory"
	return
# 364 "data/maps/Route111/scripts.pory"

# 365 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 366 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushDownFromRoute
# 367 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route111/scripts.pory"
	return
# 369 "data/maps/Route111/scripts.pory"

# 370 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 371 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushLeftFromRoute
# 372 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 373 "data/maps/Route111/scripts.pory"
	return
# 374 "data/maps/Route111/scripts.pory"

# 375 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 376 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushRightFromRoute
# 377 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 378 "data/maps/Route111/scripts.pory"
	return
# 379 "data/maps/Route111/scripts.pory"

# 380 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 381 "data/maps/Route111/scripts.pory"
	walk_up
# 382 "data/maps/Route111/scripts.pory"
	step_end
# 383 "data/maps/Route111/scripts.pory"

# 384 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 385 "data/maps/Route111/scripts.pory"
	walk_down
# 386 "data/maps/Route111/scripts.pory"
	step_end
# 387 "data/maps/Route111/scripts.pory"

# 388 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 389 "data/maps/Route111/scripts.pory"
	walk_left
# 390 "data/maps/Route111/scripts.pory"
	step_end
# 391 "data/maps/Route111/scripts.pory"

# 392 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 393 "data/maps/Route111/scripts.pory"
	walk_right
# 394 "data/maps/Route111/scripts.pory"
	step_end
# 395 "data/maps/Route111/scripts.pory"

# 396 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 397 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 398 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 399 "data/maps/Route111/scripts.pory"
	doweather
# 400 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 401 "data/maps/Route111/scripts.pory"
	end
# 402 "data/maps/Route111/scripts.pory"

# 403 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 404 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 405 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 406 "data/maps/Route111/scripts.pory"
	doweather
# 407 "data/maps/Route111/scripts.pory"
	end
# 408 "data/maps/Route111/scripts.pory"

# 409 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 410 "data/maps/Route111/scripts.pory"
	lock
# 411 "data/maps/Route111/scripts.pory"
	faceplayer
# 412 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 413 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 414 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 415 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 416 "data/maps/Route111/scripts.pory"
	release
# 417 "data/maps/Route111/scripts.pory"
	end
# 418 "data/maps/Route111/scripts.pory"

# 419 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 420 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 421 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 422 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 423 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 425 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 426 "data/maps/Route111/scripts.pory"
	closemessage
# 427 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Route111_Movement_WinstrateEnterHouse
# 428 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 429 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTOR
# 430 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 431 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 432 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 433 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 434 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICTORIA
# 435 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateExitHouse
# 436 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 437 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 438 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 439 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 440 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 441 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 442 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 443 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 444 "data/maps/Route111/scripts.pory"
	closemessage
# 445 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 446 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 447 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTORIA
# 448 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 449 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 450 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 452 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VIVI
# 453 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateExitHouse
# 454 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 455 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 456 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 457 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 458 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_WalkInPlaceFasterUp
# 459 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 461 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 462 "data/maps/Route111/scripts.pory"
	closemessage
# 463 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateEnterHouse
# 464 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 465 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VIVI
# 466 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 467 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 468 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 469 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 470 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICKY
# 471 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateExitHouse
# 472 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 473 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 474 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 475 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 476 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 477 "data/maps/Route111/scripts.pory"
	closemessage
# 478 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_WalkInPlaceFasterUp
# 479 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 480 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 481 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateEnterHouse
# 482 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 483 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICKY
# 484 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 485 "data/maps/Route111/scripts.pory"
	release
# 486 "data/maps/Route111/scripts.pory"
	end
# 487 "data/maps/Route111/scripts.pory"

# 488 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 489 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 490 "data/maps/Route111/scripts.pory"
	waitdooranim
# 491 "data/maps/Route111/scripts.pory"
	return
# 492 "data/maps/Route111/scripts.pory"

# 493 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 494 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 495 "data/maps/Route111/scripts.pory"
	waitdooranim
# 496 "data/maps/Route111/scripts.pory"
	return
# 497 "data/maps/Route111/scripts.pory"

# 498 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 499 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 500 "data/maps/Route111/scripts.pory"
	walk_up
# 501 "data/maps/Route111/scripts.pory"
	step_end
# 502 "data/maps/Route111/scripts.pory"

# 503 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 504 "data/maps/Route111/scripts.pory"
	walk_down
# 505 "data/maps/Route111/scripts.pory"
	step_end
# 506 "data/maps/Route111/scripts.pory"

# 507 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 508 "data/maps/Route111/scripts.pory"
	delay_16
# 509 "data/maps/Route111/scripts.pory"
	delay_16
# 510 "data/maps/Route111/scripts.pory"
	delay_16
# 511 "data/maps/Route111/scripts.pory"
	step_end
# 512 "data/maps/Route111/scripts.pory"

# 513 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 514 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 515 "data/maps/Route111/scripts.pory"
	end
# 516 "data/maps/Route111/scripts.pory"

# 517 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 518 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 519 "data/maps/Route111/scripts.pory"
	end
# 520 "data/maps/Route111/scripts.pory"

# 521 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 522 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 523 "data/maps/Route111/scripts.pory"
	end
# 524 "data/maps/Route111/scripts.pory"

# 525 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 526 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 527 "data/maps/Route111/scripts.pory"
	end
# 528 "data/maps/Route111/scripts.pory"

# 529 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 530 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 531 "data/maps/Route111/scripts.pory"
	end
# 532 "data/maps/Route111/scripts.pory"

# 533 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 534 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 535 "data/maps/Route111/scripts.pory"
	end
# 536 "data/maps/Route111/scripts.pory"

# 537 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 538 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 539 "data/maps/Route111/scripts.pory"
	end
# 540 "data/maps/Route111/scripts.pory"

# 541 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 542 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 543 "data/maps/Route111/scripts.pory"
	end
# 544 "data/maps/Route111/scripts.pory"

# 545 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 546 "data/maps/Route111/scripts.pory"
	lock
# 547 "data/maps/Route111/scripts.pory"
	faceplayer
# 548 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 549 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 550 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 551 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 552 "data/maps/Route111/scripts.pory"
	release
# 553 "data/maps/Route111/scripts.pory"
	end
# 554 "data/maps/Route111/scripts.pory"

# 555 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 556 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 557 "data/maps/Route111/scripts.pory"
	release
# 558 "data/maps/Route111/scripts.pory"
	end
# 559 "data/maps/Route111/scripts.pory"

# 560 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 561 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 562 "data/maps/Route111/scripts.pory"
	release
# 563 "data/maps/Route111/scripts.pory"
	end
# 564 "data/maps/Route111/scripts.pory"

# 565 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 566 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 567 "data/maps/Route111/scripts.pory"
	release
# 568 "data/maps/Route111/scripts.pory"
	end
# 569 "data/maps/Route111/scripts.pory"

# 570 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 571 "data/maps/Route111/scripts.pory"
	lockall
# 572 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 573 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 574 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 575 "data/maps/Route111/scripts.pory"
	closemessage
# 576 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 577 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 578 "data/maps/Route111/scripts.pory"
	releaseall
# 579 "data/maps/Route111/scripts.pory"
	end
# 580 "data/maps/Route111/scripts.pory"

# 581 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 582 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 583 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 584 "data/maps/Route111/scripts.pory"
	end
# 585 "data/maps/Route111/scripts.pory"

# 586 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 587 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 588 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 589 "data/maps/Route111/scripts.pory"
	end
# 590 "data/maps/Route111/scripts.pory"

# 591 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 592 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 593 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 594 "data/maps/Route111/scripts.pory"
	end
# 595 "data/maps/Route111/scripts.pory"

# 596 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 597 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 598 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 599 "data/maps/Route111/scripts.pory"
	end
# 600 "data/maps/Route111/scripts.pory"

# 601 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 602 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 603 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 604 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 605 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 606 "data/maps/Route111/scripts.pory"
	release
# 607 "data/maps/Route111/scripts.pory"
	end
# 608 "data/maps/Route111/scripts.pory"

# 609 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 610 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 611 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 612 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 613 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 614 "data/maps/Route111/scripts.pory"
	release
# 615 "data/maps/Route111/scripts.pory"
	end
# 616 "data/maps/Route111/scripts.pory"

# 617 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 618 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 619 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 620 "data/maps/Route111/scripts.pory"
	end
# 621 "data/maps/Route111/scripts.pory"

# 622 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 623 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 624 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 625 "data/maps/Route111/scripts.pory"
	end
# 626 "data/maps/Route111/scripts.pory"

# 627 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 628 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 629 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 630 "data/maps/Route111/scripts.pory"
	end
# 631 "data/maps/Route111/scripts.pory"

# 632 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 633 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 634 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 635 "data/maps/Route111/scripts.pory"
	end
# 636 "data/maps/Route111/scripts.pory"

# 637 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 638 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 639 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 640 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 641 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 642 "data/maps/Route111/scripts.pory"
	release
# 643 "data/maps/Route111/scripts.pory"
	end
# 644 "data/maps/Route111/scripts.pory"

# 645 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 646 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 647 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 648 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 649 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 650 "data/maps/Route111/scripts.pory"
	release
# 651 "data/maps/Route111/scripts.pory"
	end
# 652 "data/maps/Route111/scripts.pory"

# 653 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 654 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 655 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 656 "data/maps/Route111/scripts.pory"
	end
# 657 "data/maps/Route111/scripts.pory"

# 658 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 659 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 660 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 661 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 662 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 663 "data/maps/Route111/scripts.pory"
	release
# 664 "data/maps/Route111/scripts.pory"
	end
# 665 "data/maps/Route111/scripts.pory"

# 666 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 667 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 668 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 669 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 670 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 671 "data/maps/Route111/scripts.pory"
	release
# 672 "data/maps/Route111/scripts.pory"
	end
# 673 "data/maps/Route111/scripts.pory"

# 674 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 675 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 676 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 677 "data/maps/Route111/scripts.pory"
	end
# 678 "data/maps/Route111/scripts.pory"

# 679 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 680 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 681 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 682 "data/maps/Route111/scripts.pory"
	end
# 683 "data/maps/Route111/scripts.pory"

# 684 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 685 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 686 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 687 "data/maps/Route111/scripts.pory"
	end
# 688 "data/maps/Route111/scripts.pory"

# 689 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 690 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 691 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 692 "data/maps/Route111/scripts.pory"
	end
# 693 "data/maps/Route111/scripts.pory"

# 694 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 695 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 696 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 697 "data/maps/Route111/scripts.pory"
	end
# 698 "data/maps/Route111/scripts.pory"

# 699 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 700 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 701 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 702 "data/maps/Route111/scripts.pory"
	end
# 703 "data/maps/Route111/scripts.pory"

# 704 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 705 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 706 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 707 "data/maps/Route111/scripts.pory"
	end
# 708 "data/maps/Route111/scripts.pory"

# 709 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 710 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 711 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 712 "data/maps/Route111/scripts.pory"
	end
# 713 "data/maps/Route111/scripts.pory"

# 714 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 715 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 716 "data/maps/Route111/scripts.pory"
	end
# 717 "data/maps/Route111/scripts.pory"

# 718 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 719 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 720 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 721 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 722 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 723 "data/maps/Route111/scripts.pory"

# 724 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 725 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 726 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 727 "data/maps/Route111/scripts.pory"

# 728 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 729 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 730 "data/maps/Route111/scripts.pory"

# 731 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 732 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 733 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 734 "data/maps/Route111/scripts.pory"

# 735 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 736 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 737 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 738 "data/maps/Route111/scripts.pory"

# 739 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 740 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 741 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 742 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 743 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 744 "data/maps/Route111/scripts.pory"

# 745 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 746 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 747 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 748 "data/maps/Route111/scripts.pory"

# 749 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 750 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 751 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 752 "data/maps/Route111/scripts.pory"

# 753 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 754 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 755 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 756 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 757 "data/maps/Route111/scripts.pory"

# 758 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 759 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 760 "data/maps/Route111/scripts.pory"

# 761 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 762 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 763 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 764 "data/maps/Route111/scripts.pory"

# 765 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 766 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 767 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 768 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 769 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 770 "data/maps/Route111/scripts.pory"

# 771 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 772 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 773 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 774 "data/maps/Route111/scripts.pory"

# 775 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 776 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 777 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 778 "data/maps/Route111/scripts.pory"

# 779 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 780 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 781 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 782 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 783 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 784 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 785 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 786 "data/maps/Route111/scripts.pory"

# 787 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 788 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 789 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 790 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 791 "data/maps/Route111/scripts.pory"

# 792 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 793 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 794 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 795 "data/maps/Route111/scripts.pory"

# 796 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 797 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 798 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 799 "data/maps/Route111/scripts.pory"

# 800 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 801 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 802 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 803 "data/maps/Route111/scripts.pory"

# 804 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 805 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 806 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 807 "data/maps/Route111/scripts.pory"

# 808 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 809 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 810 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 811 "data/maps/Route111/scripts.pory"

# 812 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 813 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 814 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 815 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 816 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 817 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 818 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 819 "data/maps/Route111/scripts.pory"

# 820 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 821 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 822 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 823 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 824 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 825 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 826 "data/maps/Route111/scripts.pory"

# 827 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 828 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 829 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 830 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 831 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 832 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 833 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 834 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 835 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 836 "data/maps/Route111/scripts.pory"

# 837 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 838 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 839 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 840 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 841 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 842 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 843 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 844 "data/maps/Route111/scripts.pory"

# 845 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 846 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 847 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 848 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 849 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 850 "data/maps/Route111/scripts.pory"

# 851 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 852 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 853 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 854 "data/maps/Route111/scripts.pory"

# 855 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 856 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 857 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 858 "data/maps/Route111/scripts.pory"

# 859 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 860 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 861 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 862 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 863 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 864 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 865 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 866 "data/maps/Route111/scripts.pory"

# 867 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 868 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 869 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 870 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

Route111_EventScript_Colin_Text_0:
# 5 "data/maps/Route111/scripts.pory"
	.string "COLIN: I hope that one wasn't related\n"
	.string "to Diego.$"

Route111_EventScript_Colin_Text_1:
# 9 "data/maps/Route111/scripts.pory"
	.string "COLIN: Hey, fellow American! My name is\n"
	.string "COLIN. I am standing guard on this here\l"
	.string "border, keeping our country safe from\l"
	.string "Illegals.\p"
	.string "People keep telling me this takes place\n"
	.string "in some obscure region of Japan, but\l"
	.string "that's just Ricetalk from unpatriotic\l"
	.string "traitors.$"

Route111_EventScript_Colin_Text_2:
# 35 "data/maps/Route111/scripts.pory"
	.string "COLIN: Chase him down and use\n"
	.string "FLAMETHROWER!$"

Route111_EventScript_Colin_Text_3:
# 60 "data/maps/Route111/scripts.pory"
	.string "COLIN: And THAT'S how I make barbequed\n"
	.string "tacos, boy!$"

Route111_EventScript_Colin_Text_4:
# 78 "data/maps/Route111/scripts.pory"
	.string "COLIN: Here. He won't be needing this\n"
	.string "anymore.$"

Route111_EventScript_Colin_Text_5:
# 81 "data/maps/Route111/scripts.pory"
	.string "COLIN: Your bag's plumb full, boy! Come\n"
	.string "back when you've made some room.$"
