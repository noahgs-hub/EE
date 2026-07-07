SlateportCity_PokemonCenter_1F_EventScript_ARTUR::
# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	lock
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_DAILY_SLATEPORT_ARTUR_STONE, SlateportCity_PokemonCenter_1F_EventScript_ARTUR_2
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_EventScript_ARTUR_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	switch VAR_SLATEPORT_ARTUR_STONE_INDEX
# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 0, SlateportCity_PokemonCenter_1F_EventScript_ARTUR_6
# 16 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 1, SlateportCity_PokemonCenter_1F_EventScript_ARTUR_7
# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 2, SlateportCity_PokemonCenter_1F_EventScript_ARTUR_8
# 20 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 3, SlateportCity_PokemonCenter_1F_EventScript_ARTUR_9
# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 4, SlateportCity_PokemonCenter_1F_EventScript_ARTUR_10
# 24 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 5, SlateportCity_PokemonCenter_1F_EventScript_ARTUR_11
# 26 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 6, SlateportCity_PokemonCenter_1F_EventScript_ARTUR_12
# 28 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 7, SlateportCity_PokemonCenter_1F_EventScript_ARTUR_13
# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 8, SlateportCity_PokemonCenter_1F_EventScript_ARTUR_14
# 33 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_ICE_STONE
SlateportCity_PokemonCenter_1F_EventScript_ARTUR_4:
# 36 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_PokemonCenter_1F_EventScript_ARTUR_17
SlateportCity_PokemonCenter_1F_EventScript_ARTUR_16:
# 40 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DAILY_SLATEPORT_ARTUR_STONE
# 41 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	addvar VAR_SLATEPORT_ARTUR_STONE_INDEX, 1
# 42 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	compare VAR_SLATEPORT_ARTUR_STONE_INDEX, 9
	goto_if_gt SlateportCity_PokemonCenter_1F_EventScript_ARTUR_20
SlateportCity_PokemonCenter_1F_EventScript_ARTUR_19:
# 46 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_EventScript_ARTUR_Text_2, MSGBOX_DEFAULT
# 47 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_2:
# 6 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_EventScript_ARTUR_Text_0, MSGBOX_DEFAULT
# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_6:
# 15 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_FIRE_STONE
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_4

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_7:
# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_WATER_STONE
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_4

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_8:
# 19 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_THUNDER_STONE
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_4

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_9:
# 21 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_LEAF_STONE
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_4

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_10:
# 23 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_MOON_STONE
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_4

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_11:
# 25 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_4

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_12:
# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_SHINY_STONE
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_4

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_13:
# 29 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_DAWN_STONE
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_4

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_14:
# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_DUSK_STONE
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_4

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_17:
# 37 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_16

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_20:
# 43 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_SLATEPORT_ARTUR_STONE_INDEX, 0
	goto SlateportCity_PokemonCenter_1F_EventScript_ARTUR_19


# 51 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_MapScripts::
# 52 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
# 53 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 54 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 55 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_OnTransition:
# 57 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 58 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 59 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Nurse::
# 62 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SLATEPORT_NURSE
# 63 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 64 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 65 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 66 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 67 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 68 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 69 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Sailor::
# 70 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
# 71 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 72 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 73 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Woman::
# 74 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
# 75 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 76 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 77 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
# 78 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Want a tip for battling?\p"
# 79 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I'd say it's raising different kinds\n"
# 80 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "of POKéMON in a balanced manner.\p"
# 81 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "It's no good to make just one\n"
# 82 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON strong.\p"
# 83 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If it has a type disadvantage,\n"
# 84 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "it might not stand a chance.$"
# 85 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 86 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
# 87 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I trade POKéMON with my friends.\p"
# 88 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If a traded POKéMON is holding an\n"
# 89 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "item, it makes me twice as happy!$"

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_Text_0:
# 6 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "That's all I have for today. Come back\n"
	.string "tomorrow and I'll squeeze out another\l"
	.string "stone for you!$"

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_Text_1:
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "HNGGHGH! I came here for medical\n"
	.string "attention but they say its only for\l"
	.string "these fucking Japanese children game\l"
	.string "monsters! Oh sorry, I'm ARTUR. I drank\l"
	.string "too many energy drinks and now I have\l"
	.string "Kidney stones. AAAAAGGHHHHHH FUCK MY\l"
	.string "PENIS. OH oh god, thank god. Thank god\l"
	.string "it passed, here do you want it?$"

SlateportCity_PokemonCenter_1F_EventScript_ARTUR_Text_2:
# 46 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Oh fuck, please kill me, my dick is\n"
	.string "bleeding.$"
