EverGrandeCity_EventScript_Peter::
# 2 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_single TRAINER_PETER, EverGrandeCity_Text_PeterIntro, EverGrandeCity_Text_PeterDefeat
# 3 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_PeterPostBattle, MSGBOX_AUTOCLOSE
	end


# 19 "data/maps/EverGrandeCity/scripts.pory"

# 20 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 21 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 22 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 23 "data/maps/EverGrandeCity/scripts.pory"

# 24 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 25 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 26 "data/maps/EverGrandeCity/scripts.pory"
	end
# 27 "data/maps/EverGrandeCity/scripts.pory"

# 28 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 29 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 30 "data/maps/EverGrandeCity/scripts.pory"
	end
# 31 "data/maps/EverGrandeCity/scripts.pory"

# 32 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 33 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 34 "data/maps/EverGrandeCity/scripts.pory"
	end
# 35 "data/maps/EverGrandeCity/scripts.pory"

# 36 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 37 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 38 "data/maps/EverGrandeCity/scripts.pory"
	end
# 39 "data/maps/EverGrandeCity/scripts.pory"

# 40 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 41 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 42 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 43 "data/maps/EverGrandeCity/scripts.pory"
	end
# 44 "data/maps/EverGrandeCity/scripts.pory"

# 45 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 46 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 47 "data/maps/EverGrandeCity/scripts.pory"

# 48 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 49 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 50 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 51 "data/maps/EverGrandeCity/scripts.pory"

# 52 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 53 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 54 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 55 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

EverGrandeCity_Text_PeterIntro::
# 7 "data/maps/EverGrandeCity/scripts.pory"
	.string "HI I'M PETER! You just went through a\n"
	.string "long and arduous journey through\l"
	.string "VICTORY ROAD.\p"
	.string "It taxed your resources, knocked out\n"
	.string "several of your POKéMON, and drained\l"
	.string "you both physically and emotionally.\p"
	.string "I figured I would wait outside in this\n"
	.string "literally unavoidable spot to beat you\l"
	.string "and take your money, as for whatever\l"
	.string "reason you take a financial loss in this\l"
	.string "game despite canonically being a\l"
	.string "ten-year-old fighting adults.\p"
	.string "Anyway, my team is handcrafted to\n"
	.string "accomplish very… specific goals.\p"
	.string "Let me show you!$"

EverGrandeCity_Text_PeterDefeat::
# 11 "data/maps/EverGrandeCity/scripts.pory"
	.string "Thanks for knocking my team\n"
	.string "unconscious! That was all a part of me\l"
	.string "achieving my… goals…$"

EverGrandeCity_Text_PeterPostBattle::
# 15 "data/maps/EverGrandeCity/scripts.pory"
	.string "Go on, the POKéMON LEAGUE awaits.\p"
	.string "Don't worry about PSYDUCK. He's used to\n"
	.string "being kept in the back and ignored.$"
