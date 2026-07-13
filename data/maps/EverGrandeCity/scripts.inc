EverGrandeCity_EventScript_Peter::
# 2 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_single TRAINER_PETER, EverGrandeCity_Text_PeterIntro, EverGrandeCity_Text_PeterDefeat
# 4 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_REPEL_CHARM, EverGrandeCity_EventScript_Peter_2
# 11 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_PeterPostBattle, MSGBOX_AUTOCLOSE
	end

EverGrandeCity_EventScript_Peter_2:
# 5 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_PeterGiveCharm, MSGBOX_DEFAULT
# 6 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_REPEL_CHARM
# 7 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_RECEIVED_REPEL_CHARM
# 8 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


# 31 "data/maps/EverGrandeCity/scripts.pory"

# 32 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 33 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 34 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 35 "data/maps/EverGrandeCity/scripts.pory"

# 36 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 37 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 38 "data/maps/EverGrandeCity/scripts.pory"
	end
# 39 "data/maps/EverGrandeCity/scripts.pory"

# 40 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 41 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 42 "data/maps/EverGrandeCity/scripts.pory"
	end
# 43 "data/maps/EverGrandeCity/scripts.pory"

# 44 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 45 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 46 "data/maps/EverGrandeCity/scripts.pory"
	end
# 47 "data/maps/EverGrandeCity/scripts.pory"

# 48 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 49 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 50 "data/maps/EverGrandeCity/scripts.pory"
	end
# 51 "data/maps/EverGrandeCity/scripts.pory"

# 52 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 53 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 54 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 55 "data/maps/EverGrandeCity/scripts.pory"
	end
# 56 "data/maps/EverGrandeCity/scripts.pory"

# 57 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 58 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 59 "data/maps/EverGrandeCity/scripts.pory"

# 60 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 61 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 62 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 63 "data/maps/EverGrandeCity/scripts.pory"

# 64 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 65 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 66 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 67 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

EverGrandeCity_Text_PeterGiveCharm::
# 15 "data/maps/EverGrandeCity/scripts.pory"
	.string "Whew. You know what, kid? You've earned\n"
	.string "this.\p"
	.string "It's my REPEL CHARM. Turn it on and weak\n"
	.string "wild POKéMON will leave you alone.\l"
	.string "Permanently. No steps, no spray, no\l"
	.string "hassle.\p"
	.string "I don't need it anymore. Nothing out\n"
	.string "here bothers me… for very different\l"
	.string "reasons.$"

EverGrandeCity_Text_PeterIntro::
# 19 "data/maps/EverGrandeCity/scripts.pory"
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
# 23 "data/maps/EverGrandeCity/scripts.pory"
	.string "Thanks for knocking my team\n"
	.string "unconscious! That was all a part of me\l"
	.string "achieving my… goals…$"

EverGrandeCity_Text_PeterPostBattle::
# 27 "data/maps/EverGrandeCity/scripts.pory"
	.string "Thanks for knocking my team\n"
	.string "unconscious! That was all a part of me\l"
	.string "achieving my… goals…$"
