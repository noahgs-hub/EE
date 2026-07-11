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
# 45 "data/maps/Route111/scripts.pory"
	fadescreen FADE_TO_WHITE
# 46 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_COLIN_CHARIZARD
# 47 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_COLIN_CHARIZARD
# 48 "data/maps/Route111/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 49 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 50 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8005, 2
# 51 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8006, 8
# 52 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8007, 3
# 53 "data/maps/Route111/scripts.pory"
	special ShakeCamera
# 54 "data/maps/Route111/scripts.pory"
	waitstate
# 55 "data/maps/Route111/scripts.pory"
	waitse
# 56 "data/maps/Route111/scripts.pory"
	delay 20
# 57 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Colin_Text_3, MSGBOX_DEFAULT
# 58 "data/maps/Route111/scripts.pory"
	closemessage
# 61 "data/maps/Route111/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Route111_EventScript_Colin_5
# 68 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinExit
# 69 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route111/scripts.pory"
	delay 60
# 71 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinReturn
# 72 "data/maps/Route111/scripts.pory"
	waitmovement 0
Route111_EventScript_Colin_4:
# 74 "data/maps/Route111/scripts.pory"
	faceplayer
# 75 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Colin_Text_4, MSGBOX_DEFAULT
# 76 "data/maps/Route111/scripts.pory"
	giveitem ITEM_HEAVY_DUTY_BOOTS
# 77 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_EventScript_Colin_9
# 82 "data/maps/Route111/scripts.pory"
	setflag FLAG_RECEIVED_HEAVY_DUTY_BOOTS_ROUTE111
# 83 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_Colin_2:
# 5 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Colin_Text_0, MSGBOX_DEFAULT
# 6 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_Colin_5:
# 62 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinExitSidestep
# 63 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route111/scripts.pory"
	delay 60
# 65 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_COLIN, Route111_Movement_ColinReturnSidestep
# 66 "data/maps/Route111/scripts.pory"
	waitmovement 0
	goto Route111_EventScript_Colin_4

Route111_EventScript_Colin_9:
# 78 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Colin_Text_5, MSGBOX_DEFAULT
# 79 "data/maps/Route111/scripts.pory"
	release
	end


# 87 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinFaceBorder:
# 88 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 91 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinTrackHiker:
# 92 "data/maps/Route111/scripts.pory"
	face_right
# 93 "data/maps/Route111/scripts.pory"
	delay_16
# 94 "data/maps/Route111/scripts.pory"
	delay_16
# 95 "data/maps/Route111/scripts.pory"
	face_down
	step_end

# 98 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinFaceLeft:
# 99 "data/maps/Route111/scripts.pory"
	face_left
	step_end

# 102 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinFaceDown:
# 103 "data/maps/Route111/scripts.pory"
	face_down
	step_end

# 107 "data/maps/Route111/scripts.pory"
Route111_Movement_HikerFleeSouth:
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 109 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 109 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 109 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 109 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 109 "data/maps/Route111/scripts.pory"
	walk_fast_left
	step_end

# 113 "data/maps/Route111/scripts.pory"
Route111_Movement_HikerFleeWest:
# 114 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route111/scripts.pory"
	walk_fast_left
	step_end

# 120 "data/maps/Route111/scripts.pory"
Route111_Movement_CharizardChase:
# 121 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 122 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route111/scripts.pory"
	walk_fast_left
	step_end

# 126 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinExit:
# 127 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 128 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route111/scripts.pory"
	walk_fast_left
	step_end

# 131 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinReturn:
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 133 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 133 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 133 "data/maps/Route111/scripts.pory"
	walk_fast_up
	step_end

# 137 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinExitSidestep:
# 138 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 139 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 139 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 139 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 140 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route111/scripts.pory"
	walk_fast_left
	step_end

# 143 "data/maps/Route111/scripts.pory"
Route111_Movement_ColinReturnSidestep:
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 145 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route111/scripts.pory"
	walk_fast_right
	step_end

# 149 "data/maps/Route111/scripts.pory"

# 150 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 151 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 152 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 153 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 154 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 155 "data/maps/Route111/scripts.pory"
	.byte 0
# 156 "data/maps/Route111/scripts.pory"

# 157 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 158 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 159 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 160 "data/maps/Route111/scripts.pory"
	end
# 161 "data/maps/Route111/scripts.pory"

# 162 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 163 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 164 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 165 "data/maps/Route111/scripts.pory"
	return
# 166 "data/maps/Route111/scripts.pory"

# 167 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 168 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 169 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 170 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 171 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 172 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 173 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 174 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 175 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 176 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 177 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 178 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 179 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 180 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 181 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 182 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 183 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 184 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 185 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 186 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 187 "data/maps/Route111/scripts.pory"
	return
# 188 "data/maps/Route111/scripts.pory"

# 189 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 190 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 191 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 192 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 193 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 194 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 195 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 196 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 197 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_COLIN_HIKER
# 198 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_COLIN_CHARIZARD
# 199 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 200 "data/maps/Route111/scripts.pory"
	end
# 201 "data/maps/Route111/scripts.pory"

# 202 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 203 "data/maps/Route111/scripts.pory"
	checkplayergender
# 204 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 205 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 206 "data/maps/Route111/scripts.pory"
	return
# 207 "data/maps/Route111/scripts.pory"

# 208 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 209 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 210 "data/maps/Route111/scripts.pory"
	return
# 211 "data/maps/Route111/scripts.pory"

# 212 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 213 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 214 "data/maps/Route111/scripts.pory"
	return
# 215 "data/maps/Route111/scripts.pory"

# 216 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 217 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 218 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 219 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 220 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 221 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 222 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 223 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 224 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 225 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 226 "data/maps/Route111/scripts.pory"
	return
# 227 "data/maps/Route111/scripts.pory"

# 228 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 229 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 230 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 231 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 232 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 233 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 234 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 235 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 236 "data/maps/Route111/scripts.pory"
	end
# 237 "data/maps/Route111/scripts.pory"

# 238 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 239 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 240 "data/maps/Route111/scripts.pory"
	return
# 241 "data/maps/Route111/scripts.pory"

# 242 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 243 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 244 "data/maps/Route111/scripts.pory"
	return
# 245 "data/maps/Route111/scripts.pory"

# 246 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 247 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 248 "data/maps/Route111/scripts.pory"
	.2byte 0
# 249 "data/maps/Route111/scripts.pory"

# 250 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 251 "data/maps/Route111/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 252 "data/maps/Route111/scripts.pory"
	end
# 253 "data/maps/Route111/scripts.pory"

# 254 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 255 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 256 "data/maps/Route111/scripts.pory"
	.2byte 0
# 257 "data/maps/Route111/scripts.pory"

# 258 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 259 "data/maps/Route111/scripts.pory"
	lockall
# 260 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 261 "data/maps/Route111/scripts.pory"
	delay 24
# 262 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 263 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 264 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 265 "data/maps/Route111/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 266 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 267 "data/maps/Route111/scripts.pory"
	delay 16
# 268 "data/maps/Route111/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 269 "data/maps/Route111/scripts.pory"
	delay 16
# 270 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 271 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 272 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 273 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 274 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 275 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 276 "data/maps/Route111/scripts.pory"
	releaseall
# 277 "data/maps/Route111/scripts.pory"
	end
# 278 "data/maps/Route111/scripts.pory"

# 279 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 280 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 281 "data/maps/Route111/scripts.pory"
	releaseall
# 282 "data/maps/Route111/scripts.pory"
	end
# 283 "data/maps/Route111/scripts.pory"

# 284 "data/maps/Route111/scripts.pory"
@ Unused
# 285 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 286 "data/maps/Route111/scripts.pory"
	lock_anim
# 287 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 288 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 289 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 290 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 291 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 292 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 293 "data/maps/Route111/scripts.pory"
	step_end
# 294 "data/maps/Route111/scripts.pory"

# 295 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 296 "data/maps/Route111/scripts.pory"
	lock
# 297 "data/maps/Route111/scripts.pory"
	faceplayer
# 298 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 299 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 300 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 301 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 302 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 303 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 304 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 305 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 306 "data/maps/Route111/scripts.pory"
	release
# 307 "data/maps/Route111/scripts.pory"
	end
# 308 "data/maps/Route111/scripts.pory"

# 309 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 310 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 311 "data/maps/Route111/scripts.pory"
	release
# 312 "data/maps/Route111/scripts.pory"
	end
# 313 "data/maps/Route111/scripts.pory"

# 314 "data/maps/Route111/scripts.pory"
@ Unused
# 315 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 316 "data/maps/Route111/scripts.pory"
	lockall
# 317 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 318 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 319 "data/maps/Route111/scripts.pory"
	end
# 320 "data/maps/Route111/scripts.pory"

# 321 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 322 "data/maps/Route111/scripts.pory"
	lockall
# 323 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 324 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 325 "data/maps/Route111/scripts.pory"
	end
# 326 "data/maps/Route111/scripts.pory"

# 327 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 328 "data/maps/Route111/scripts.pory"
	lockall
# 329 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 330 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 331 "data/maps/Route111/scripts.pory"
	end
# 332 "data/maps/Route111/scripts.pory"

# 333 "data/maps/Route111/scripts.pory"
@ Unused
# 334 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 335 "data/maps/Route111/scripts.pory"
	lockall
# 336 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 337 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 338 "data/maps/Route111/scripts.pory"
	end
# 339 "data/maps/Route111/scripts.pory"

# 340 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 341 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 342 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 343 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 344 "data/maps/Route111/scripts.pory"
	releaseall
# 345 "data/maps/Route111/scripts.pory"
	end
# 346 "data/maps/Route111/scripts.pory"

# 347 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 348 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 349 "data/maps/Route111/scripts.pory"
	closemessage
# 350 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 351 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 352 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 353 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 354 "data/maps/Route111/scripts.pory"
	releaseall
# 355 "data/maps/Route111/scripts.pory"
	end
# 356 "data/maps/Route111/scripts.pory"

# 357 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 358 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushUpFromRoute
# 359 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 360 "data/maps/Route111/scripts.pory"
	return
# 361 "data/maps/Route111/scripts.pory"

# 362 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 363 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushDownFromRoute
# 364 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 365 "data/maps/Route111/scripts.pory"
	return
# 366 "data/maps/Route111/scripts.pory"

# 367 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 368 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushLeftFromRoute
# 369 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route111/scripts.pory"
	return
# 371 "data/maps/Route111/scripts.pory"

# 372 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 373 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushRightFromRoute
# 374 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 375 "data/maps/Route111/scripts.pory"
	return
# 376 "data/maps/Route111/scripts.pory"

# 377 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 378 "data/maps/Route111/scripts.pory"
	walk_up
# 379 "data/maps/Route111/scripts.pory"
	step_end
# 380 "data/maps/Route111/scripts.pory"

# 381 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 382 "data/maps/Route111/scripts.pory"
	walk_down
# 383 "data/maps/Route111/scripts.pory"
	step_end
# 384 "data/maps/Route111/scripts.pory"

# 385 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 386 "data/maps/Route111/scripts.pory"
	walk_left
# 387 "data/maps/Route111/scripts.pory"
	step_end
# 388 "data/maps/Route111/scripts.pory"

# 389 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 390 "data/maps/Route111/scripts.pory"
	walk_right
# 391 "data/maps/Route111/scripts.pory"
	step_end
# 392 "data/maps/Route111/scripts.pory"

# 393 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 394 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 395 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 396 "data/maps/Route111/scripts.pory"
	doweather
# 397 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 398 "data/maps/Route111/scripts.pory"
	end
# 399 "data/maps/Route111/scripts.pory"

# 400 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 401 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 402 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 403 "data/maps/Route111/scripts.pory"
	doweather
# 404 "data/maps/Route111/scripts.pory"
	end
# 405 "data/maps/Route111/scripts.pory"

# 406 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 407 "data/maps/Route111/scripts.pory"
	lock
# 408 "data/maps/Route111/scripts.pory"
	faceplayer
# 409 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 410 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 411 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 412 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 413 "data/maps/Route111/scripts.pory"
	release
# 414 "data/maps/Route111/scripts.pory"
	end
# 415 "data/maps/Route111/scripts.pory"

# 416 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 417 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 418 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 419 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 420 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 422 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 423 "data/maps/Route111/scripts.pory"
	closemessage
# 424 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Route111_Movement_WinstrateEnterHouse
# 425 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 426 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTOR
# 427 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 428 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 429 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 431 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICTORIA
# 432 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateExitHouse
# 433 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 435 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 436 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 437 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 438 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 439 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 440 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 441 "data/maps/Route111/scripts.pory"
	closemessage
# 442 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 443 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 444 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTORIA
# 445 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 446 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 447 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 448 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 449 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VIVI
# 450 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateExitHouse
# 451 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 452 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 453 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 454 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 455 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_WalkInPlaceFasterUp
# 456 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 457 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 458 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 459 "data/maps/Route111/scripts.pory"
	closemessage
# 460 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateEnterHouse
# 461 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VIVI
# 463 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 464 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 465 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 466 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 467 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICKY
# 468 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateExitHouse
# 469 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 470 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 471 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 472 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 473 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 474 "data/maps/Route111/scripts.pory"
	closemessage
# 475 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_WalkInPlaceFasterUp
# 476 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 478 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateEnterHouse
# 479 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 480 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICKY
# 481 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 482 "data/maps/Route111/scripts.pory"
	release
# 483 "data/maps/Route111/scripts.pory"
	end
# 484 "data/maps/Route111/scripts.pory"

# 485 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 486 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 487 "data/maps/Route111/scripts.pory"
	waitdooranim
# 488 "data/maps/Route111/scripts.pory"
	return
# 489 "data/maps/Route111/scripts.pory"

# 490 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 491 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 492 "data/maps/Route111/scripts.pory"
	waitdooranim
# 493 "data/maps/Route111/scripts.pory"
	return
# 494 "data/maps/Route111/scripts.pory"

# 495 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 496 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 497 "data/maps/Route111/scripts.pory"
	walk_up
# 498 "data/maps/Route111/scripts.pory"
	step_end
# 499 "data/maps/Route111/scripts.pory"

# 500 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 501 "data/maps/Route111/scripts.pory"
	walk_down
# 502 "data/maps/Route111/scripts.pory"
	step_end
# 503 "data/maps/Route111/scripts.pory"

# 504 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 505 "data/maps/Route111/scripts.pory"
	delay_16
# 506 "data/maps/Route111/scripts.pory"
	delay_16
# 507 "data/maps/Route111/scripts.pory"
	delay_16
# 508 "data/maps/Route111/scripts.pory"
	step_end
# 509 "data/maps/Route111/scripts.pory"

# 510 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 511 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 512 "data/maps/Route111/scripts.pory"
	end
# 513 "data/maps/Route111/scripts.pory"

# 514 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 515 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 516 "data/maps/Route111/scripts.pory"
	end
# 517 "data/maps/Route111/scripts.pory"

# 518 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 519 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 520 "data/maps/Route111/scripts.pory"
	end
# 521 "data/maps/Route111/scripts.pory"

# 522 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 523 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 524 "data/maps/Route111/scripts.pory"
	end
# 525 "data/maps/Route111/scripts.pory"

# 526 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 527 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 528 "data/maps/Route111/scripts.pory"
	end
# 529 "data/maps/Route111/scripts.pory"

# 530 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 531 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 532 "data/maps/Route111/scripts.pory"
	end
# 533 "data/maps/Route111/scripts.pory"

# 534 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 535 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 536 "data/maps/Route111/scripts.pory"
	end
# 537 "data/maps/Route111/scripts.pory"

# 538 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 539 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 540 "data/maps/Route111/scripts.pory"
	end
# 541 "data/maps/Route111/scripts.pory"

# 542 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 543 "data/maps/Route111/scripts.pory"
	lock
# 544 "data/maps/Route111/scripts.pory"
	faceplayer
# 545 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 546 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 547 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 548 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 549 "data/maps/Route111/scripts.pory"
	release
# 550 "data/maps/Route111/scripts.pory"
	end
# 551 "data/maps/Route111/scripts.pory"

# 552 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 553 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 554 "data/maps/Route111/scripts.pory"
	release
# 555 "data/maps/Route111/scripts.pory"
	end
# 556 "data/maps/Route111/scripts.pory"

# 557 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 558 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 559 "data/maps/Route111/scripts.pory"
	release
# 560 "data/maps/Route111/scripts.pory"
	end
# 561 "data/maps/Route111/scripts.pory"

# 562 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 563 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 564 "data/maps/Route111/scripts.pory"
	release
# 565 "data/maps/Route111/scripts.pory"
	end
# 566 "data/maps/Route111/scripts.pory"

# 567 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 568 "data/maps/Route111/scripts.pory"
	lockall
# 569 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 570 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 571 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 572 "data/maps/Route111/scripts.pory"
	closemessage
# 573 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 574 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 575 "data/maps/Route111/scripts.pory"
	releaseall
# 576 "data/maps/Route111/scripts.pory"
	end
# 577 "data/maps/Route111/scripts.pory"

# 578 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 579 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 580 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 581 "data/maps/Route111/scripts.pory"
	end
# 582 "data/maps/Route111/scripts.pory"

# 583 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 584 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 585 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 586 "data/maps/Route111/scripts.pory"
	end
# 587 "data/maps/Route111/scripts.pory"

# 588 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 589 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 590 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 591 "data/maps/Route111/scripts.pory"
	end
# 592 "data/maps/Route111/scripts.pory"

# 593 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 594 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 595 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 596 "data/maps/Route111/scripts.pory"
	end
# 597 "data/maps/Route111/scripts.pory"

# 598 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 599 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 600 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 601 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 602 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 603 "data/maps/Route111/scripts.pory"
	release
# 604 "data/maps/Route111/scripts.pory"
	end
# 605 "data/maps/Route111/scripts.pory"

# 606 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 607 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 608 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 609 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 610 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 611 "data/maps/Route111/scripts.pory"
	release
# 612 "data/maps/Route111/scripts.pory"
	end
# 613 "data/maps/Route111/scripts.pory"

# 614 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 615 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 616 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 617 "data/maps/Route111/scripts.pory"
	end
# 618 "data/maps/Route111/scripts.pory"

# 619 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 620 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 621 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 622 "data/maps/Route111/scripts.pory"
	end
# 623 "data/maps/Route111/scripts.pory"

# 624 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 625 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 626 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 627 "data/maps/Route111/scripts.pory"
	end
# 628 "data/maps/Route111/scripts.pory"

# 629 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 630 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 631 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 632 "data/maps/Route111/scripts.pory"
	end
# 633 "data/maps/Route111/scripts.pory"

# 634 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 635 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 636 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 637 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 638 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 639 "data/maps/Route111/scripts.pory"
	release
# 640 "data/maps/Route111/scripts.pory"
	end
# 641 "data/maps/Route111/scripts.pory"

# 642 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 643 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 644 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 645 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 646 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 647 "data/maps/Route111/scripts.pory"
	release
# 648 "data/maps/Route111/scripts.pory"
	end
# 649 "data/maps/Route111/scripts.pory"

# 650 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 651 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 652 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 653 "data/maps/Route111/scripts.pory"
	end
# 654 "data/maps/Route111/scripts.pory"

# 655 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 656 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 657 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 658 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 659 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 660 "data/maps/Route111/scripts.pory"
	release
# 661 "data/maps/Route111/scripts.pory"
	end
# 662 "data/maps/Route111/scripts.pory"

# 663 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 664 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 665 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 666 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 667 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 668 "data/maps/Route111/scripts.pory"
	release
# 669 "data/maps/Route111/scripts.pory"
	end
# 670 "data/maps/Route111/scripts.pory"

# 671 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 672 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 673 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 674 "data/maps/Route111/scripts.pory"
	end
# 675 "data/maps/Route111/scripts.pory"

# 676 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 677 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 678 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 679 "data/maps/Route111/scripts.pory"
	end
# 680 "data/maps/Route111/scripts.pory"

# 681 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 682 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 683 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 684 "data/maps/Route111/scripts.pory"
	end
# 685 "data/maps/Route111/scripts.pory"

# 686 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 687 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 688 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 689 "data/maps/Route111/scripts.pory"
	end
# 690 "data/maps/Route111/scripts.pory"

# 691 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 692 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 693 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 694 "data/maps/Route111/scripts.pory"
	end
# 695 "data/maps/Route111/scripts.pory"

# 696 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 697 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 698 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 699 "data/maps/Route111/scripts.pory"
	end
# 700 "data/maps/Route111/scripts.pory"

# 701 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 702 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 703 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 704 "data/maps/Route111/scripts.pory"
	end
# 705 "data/maps/Route111/scripts.pory"

# 706 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 707 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 708 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 709 "data/maps/Route111/scripts.pory"
	end
# 710 "data/maps/Route111/scripts.pory"

# 711 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 712 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 713 "data/maps/Route111/scripts.pory"
	end
# 714 "data/maps/Route111/scripts.pory"

# 715 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 716 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 717 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 718 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 719 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 720 "data/maps/Route111/scripts.pory"

# 721 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 722 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 723 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 724 "data/maps/Route111/scripts.pory"

# 725 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 726 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 727 "data/maps/Route111/scripts.pory"

# 728 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 729 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 730 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 731 "data/maps/Route111/scripts.pory"

# 732 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 733 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 734 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 735 "data/maps/Route111/scripts.pory"

# 736 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 737 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 738 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 739 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 740 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 741 "data/maps/Route111/scripts.pory"

# 742 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 743 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 744 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 745 "data/maps/Route111/scripts.pory"

# 746 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 747 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 748 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 749 "data/maps/Route111/scripts.pory"

# 750 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 751 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 752 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 753 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 754 "data/maps/Route111/scripts.pory"

# 755 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 756 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 757 "data/maps/Route111/scripts.pory"

# 758 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 759 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 760 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 761 "data/maps/Route111/scripts.pory"

# 762 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 763 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 764 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 765 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 766 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 767 "data/maps/Route111/scripts.pory"

# 768 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 769 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 770 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 771 "data/maps/Route111/scripts.pory"

# 772 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 773 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 774 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 775 "data/maps/Route111/scripts.pory"

# 776 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 777 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 778 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 779 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 780 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 781 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 782 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 783 "data/maps/Route111/scripts.pory"

# 784 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 785 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 786 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 787 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 788 "data/maps/Route111/scripts.pory"

# 789 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 790 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 791 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 792 "data/maps/Route111/scripts.pory"

# 793 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 794 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 795 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 796 "data/maps/Route111/scripts.pory"

# 797 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 798 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 799 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 800 "data/maps/Route111/scripts.pory"

# 801 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 802 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 803 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 804 "data/maps/Route111/scripts.pory"

# 805 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 806 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 807 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 808 "data/maps/Route111/scripts.pory"

# 809 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 810 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 811 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 812 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 813 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 814 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 815 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 816 "data/maps/Route111/scripts.pory"

# 817 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 818 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 819 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 820 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 821 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 822 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 823 "data/maps/Route111/scripts.pory"

# 824 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 825 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 826 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 827 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 828 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 829 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 830 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 831 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 832 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 833 "data/maps/Route111/scripts.pory"

# 834 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 835 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 836 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 837 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 838 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 839 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 840 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 841 "data/maps/Route111/scripts.pory"

# 842 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 843 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 844 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 845 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 846 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 847 "data/maps/Route111/scripts.pory"

# 848 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 849 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 850 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 851 "data/maps/Route111/scripts.pory"

# 852 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 853 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 854 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 855 "data/maps/Route111/scripts.pory"

# 856 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 857 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 858 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 859 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 860 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 861 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 862 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 863 "data/maps/Route111/scripts.pory"

# 864 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 865 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 866 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 867 "data/maps/Route111/scripts.pory"
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
# 57 "data/maps/Route111/scripts.pory"
	.string "COLIN: And THAT'S how I make barbequed\n"
	.string "tacos, boy!$"

Route111_EventScript_Colin_Text_4:
# 75 "data/maps/Route111/scripts.pory"
	.string "COLIN: Here. He won't be needing this\n"
	.string "anymore.$"

Route111_EventScript_Colin_Text_5:
# 78 "data/maps/Route111/scripts.pory"
	.string "COLIN: Your bag's plumb full, boy! Come\n"
	.string "back when you've made some room.$"
