Route125_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route125_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route125_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route125_OnFrame
	.byte 0

Route125_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_StartKyogreWeather
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_StartKyogreWeather
	end

Route125_OnLoad:
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_EventScript_PlaceTilesRoute125West
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_EventScript_PlaceTilesRoute125East
	end

Route125_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0

Route125_EventScript_Nolen::
	trainerbattle_single TRAINER_NOLEN, Route125_Text_NolenIntro, Route125_Text_NolenDefeat
	msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Stan::
	trainerbattle_single TRAINER_STAN, Route125_Text_StanIntro, Route125_Text_StanDefeat
	msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Tanya::
	trainerbattle_single TRAINER_TANYA, Route125_Text_TanyaIntro, Route125_Text_TanyaDefeat
	msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Sharon::
	trainerbattle_single TRAINER_SHARON, Route125_Text_SharonIntro, Route125_Text_SharonDefeat
	msgbox Route125_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Ernest::
	trainerbattle_single TRAINER_ERNEST_1, Route125_Text_ErnestIntro, Route125_Text_ErnestDefeat, Route125_EventScript_RegisterErnest
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route125_EventScript_RematchErnest
	msgbox Route125_Text_ErnestPostBattle, MSGBOX_DEFAULT
	release
	end

Route125_EventScript_RegisterErnest::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route125_Text_ErnestRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ERNEST_1
	release
	end

Route125_EventScript_RematchErnest::
	trainerbattle_rematch TRAINER_ERNEST_1, Route125_Text_ErnestRematchIntro, Route125_Text_ErnestRematchDefeat
	msgbox Route125_Text_ErnestRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Kim::
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_KimIntro, Route125_Text_KimDefeat, Route125_Text_KimNotEnoughMons
	msgbox Route125_Text_KimPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Iris::
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_IrisIntro, Route125_Text_IrisDefeat, Route125_Text_IrisNotEnoughMons
	msgbox Route125_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Presley::
	trainerbattle_single TRAINER_PRESLEY, Route125_Text_PresleyIntro, Route125_Text_PresleyDefeat
	msgbox Route125_Text_PresleyPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Auron::
	trainerbattle_single TRAINER_AURON, Route125_Text_AuronIntro, Route125_Text_AuronDefeat
	msgbox Route125_Text_AuronPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Misty::
	lock
	faceplayer
	goto_if_set FLAG_SYS_SHOAL_TIDE, Route125_EventScript_MistyTideIsHigh
	msgbox Route125_Text_MistyOfferRaiseTide, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route125_EventScript_MistyDecline
	call Route125_EventScript_MistyChangeTide
	setflag FLAG_SYS_SHOAL_TIDE
	msgbox Route125_Text_MistyRaisedTide, MSGBOX_DEFAULT
	release
	end

Route125_EventScript_MistyTideIsHigh::
	msgbox Route125_Text_MistyOfferLowerTide, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route125_EventScript_MistyDecline
	call Route125_EventScript_MistyChangeTide
	clearflag FLAG_SYS_SHOAL_TIDE
	msgbox Route125_Text_MistyLoweredTide, MSGBOX_DEFAULT
	release
	end

Route125_EventScript_MistyChangeTide::
	msgbox Route125_Text_MistyCallsPokemon, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
	waitmovement 0
	fadescreen FADE_TO_BLACK
	playse SE_M_SURF
	waitse
	fadescreen FADE_FROM_BLACK
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	return

Route125_EventScript_MistyDecline::
	msgbox Route125_Text_MistyDecline, MSGBOX_DEFAULT
	release
	end

Route125_Text_MistyOfferRaiseTide:
	.string "MISTY: Hi! I'm MISTY, a WATER-type\n"
	.string "specialist from far-off KANTO.\p"
	.string "The WATER POKéMON of SHOAL CAVE and\n"
	.string "I have become close friends.\p"
	.string "If I ask, they'll all push the sea\n"
	.string "into the cave together!\p"
	.string "The tide is LOW right now.\n"
	.string "Should I have them raise it?$"

Route125_Text_MistyOfferLowerTide:
	.string "MISTY: Hi! I'm MISTY, a WATER-type\n"
	.string "specialist from far-off KANTO.\p"
	.string "The WATER POKéMON of SHOAL CAVE and\n"
	.string "I have become close friends.\p"
	.string "If I ask, they'll all draw the sea\n"
	.string "out of the cave together!\p"
	.string "The tide is HIGH right now.\n"
	.string "Should I have them lower it?$"

Route125_Text_MistyCallsPokemon:
	.string "MISTY: Okay!\p"
	.string "Everyone! Lend me your strength!$"

Route125_Text_MistyRaisedTide:
	.string "…The sea rushed into SHOAL CAVE!\p"
	.string "MISTY: The tide is HIGH now.\n"
	.string "You can SURF through the upper\l"
	.string "caverns while the water is in.\p"
	.string "Come see me if you'd like the tide\n"
	.string "lowered again!$"

Route125_Text_MistyLoweredTide:
	.string "…The sea drained out of SHOAL CAVE!\p"
	.string "MISTY: The tide is LOW now.\n"
	.string "With the water out, you can climb\l"
	.string "down to the deepest icy floors.\p"
	.string "Come see me if you'd like the tide\n"
	.string "raised again!$"

Route125_Text_MistyDecline:
	.string "MISTY: Okay!\p"
	.string "The POKéMON and I will keep the tide\n"
	.string "just as it is.$"
