FallarborTown_CozmosHouse_EventScript_Meteorite::
# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_Meteorite_Text_0, MSGBOX_YESNO
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Meteorite_2
# 15 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge FallarborTown_CozmosHouse_EventScript_Meteorite_5
# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	specialvar VAR_RESULT, MeteoriteTryDeoxysFormChange
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Meteorite_8
# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 27 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_Meteorite_Text_2, MSGBOX_DEFAULT
# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmoncry
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_Meteorite_2:
# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_Meteorite_5:
# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_Meteorite_8:
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_Meteorite_Text_1, MSGBOX_DEFAULT
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end


# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MapScripts::
# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.byte 0
# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 38 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 39 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkitem ITEM_METEORITE
# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 46 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 47 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
# 49 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
# 50 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
# 51 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
# 52 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_TM_RETURN
# 54 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 55 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_0x8004, ITEM_METEORITE
# 56 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 57 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_RETURN
# 58 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 59 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 60 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 61 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 62 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
# 63 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 64 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
# 65 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 66 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 67 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
# 68 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
# 69 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 70 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 71 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
# 72 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 73 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
# 74 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 75 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 76 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 77 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
# 78 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 79 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 80 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 81 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 82 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 83 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 84 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 85 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
# 86 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 87 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
# 88 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 89 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 90 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 91 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
# 92 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 93 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 94 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 95 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 96 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
# 98 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 99 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 100 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 101 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
# 102 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh…\n"
# 103 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I never should have let myself be\l"
# 104 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "conned into telling TEAM MAGMA where\l"
# 105 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "you can find METEORITES…\p"
# 106 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "That METEORITE from METEOR FALLS…\n"
# 107 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "It's never going to be mine now…$"
# 108 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 109 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt:
# 110 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Oh!\n"
# 111 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Hah?\p"
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "That item…\p"
# 113 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Could it be?\p"
# 114 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Is it the METEORITE that TEAM MAGMA\n"
# 115 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "took from METEOR FALLS?\p"
# 116 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Please, may I have it?\p"
# 117 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm not asking for it for free.\n"
# 118 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "How about in exchange for this TM?$"
# 119 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 120 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_PleaseUseThisTM:
# 121 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: This TM, it represents\n"
# 122 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "my feeling of gratitude.\l"
# 123 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Please use it!$"
# 124 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 125 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch:
# 126 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh, I can't believe it.\n"
# 127 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "This is really, really great!\p"
# 128 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "This is really going to help my research!$"
# 129 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 130 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
# 131 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh, but…\n"
# 132 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm crushed with disappointment…$"
# 133 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 134 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MayIHaveMeteorite:
# 135 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Please, may I have that\n"
# 136 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "METEORITE?\p"
# 137 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm not asking for it for free.\n"
# 138 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "How about in exchange for this TM?$"
# 139 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 140 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
# 141 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO went off to METEOR FALLS\n"
# 142 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "on ROUTE 114 with some people from\l"
# 143 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "TEAM MAGMA.$"
# 144 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 145 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
# 146 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Poor PROF. COZMO…\n"
# 147 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so depressed… I feel sorry for him.$"
# 148 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 149 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
# 150 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Look at PROF. COZMO…\n"
# 151 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so happy! I think it's cute.$"

FallarborTown_CozmosHouse_EventScript_Meteorite_Text_0:
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "It's the METEORITE that PROF. COZMO\n"
	.string "has been studying.\p"
	.string "It's giving off a strange, pulsing\n"
	.string "warmth…\p"
	.string "Hold up a POKéMON?$"

FallarborTown_CozmosHouse_EventScript_Meteorite_Text_1:
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Nothing happened…$"

FallarborTown_CozmosHouse_EventScript_Meteorite_Text_2:
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{STR_VAR_1} transformed into its\n"
	.string "{STR_VAR_2}!$"
