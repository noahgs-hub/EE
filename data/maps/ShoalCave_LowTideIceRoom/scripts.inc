ShoalCave_LowTideIceRoom_MapScripts::
# 8 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideIceRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ShoalCave_LowTideIceRoom_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

ShoalCave_LowTideIceRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_UpdateArticuno
	return

ShoalCave_LowTideIceRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 12 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ShoalCave_LowTideIceRoom_EventScript_TryRemoveArticuno
	return


ShoalCave_LowTideIceRoom_EventScript_UpdateArticuno::
# 17 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_SHOAL_CAVE_ARTICUNO
# 18 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, ShoalCave_LowTideIceRoom_EventScript_UpdateArticuno_2
# 21 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ARTICUNO, ShoalCave_LowTideIceRoom_EventScript_UpdateArticuno_5
# 24 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	clearflag FLAG_HIDE_SHOAL_CAVE_ARTICUNO
	return

ShoalCave_LowTideIceRoom_EventScript_UpdateArticuno_2:
	return

ShoalCave_LowTideIceRoom_EventScript_UpdateArticuno_5:
	return


ShoalCave_LowTideIceRoom_EventScript_TryRemoveArticuno::
# 29 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne ShoalCave_LowTideIceRoom_EventScript_TryRemoveArticuno_2
# 33 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

ShoalCave_LowTideIceRoom_EventScript_TryRemoveArticuno_2:
	return


ShoalCave_LowTideIceRoom_EventScript_Articuno::
# 38 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 39 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	faceplayer
# 40 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitse
# 41 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 42 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 43 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 44 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setwildbattle SPECIES_ARTICUNO, 70
# 45 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 46 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 47 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 48 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 49 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_Articuno_2
ShoalCave_LowTideIceRoom_EventScript_Articuno_1:
# 53 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_Articuno_5
# 53 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_Articuno_5
ShoalCave_LowTideIceRoom_EventScript_Articuno_4:
# 57 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_DEFEATED_ARTICUNO
# 58 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end

ShoalCave_LowTideIceRoom_EventScript_Articuno_2:
# 50 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_DEFEATED_ARTICUNO
# 51 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ShoalCave_LowTideIceRoom_EventScript_Articuno_1

ShoalCave_LowTideIceRoom_EventScript_Articuno_5:
# 54 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 55 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto ShoalCave_LowTideIceRoom_EventScript_Articuno_4

