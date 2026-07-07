LilycoveCity_DepartmentStoreRooftop_EventScript_Neal::
# 2 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 3 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 5 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_set FLAG_LILYCOVE_NEAL_FREED, LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_2
# 11 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_1, MSGBOX_YESNO
# 12 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_5
# 18 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace ITEM_LEMONADE, 1
# 19 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_8
# 24 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace ITEM_EVIOLITE, 1
# 25 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_11
# 31 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_4, MSGBOX_DEFAULT
# 32 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	closemessage
# 33 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	fadescreen FADE_TO_WHITE
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 35 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_0x8008, 8
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_15
LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_13:
# 38 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MILES
# 39 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	addobject LOCALID_LILYCOVE_MILES
# 40 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 42 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_5, MSGBOX_DEFAULT
# 43 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	closemessage
# 44 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LOCALID_LILYCOVE_MILES, Rooftop_Movement_MilesTug
# 45 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
# 46 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_BALL_OPEN
# 47 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LilycoveCity_DepartmentStoreRooftop_Neal, Rooftop_Movement_BounceBack
# 48 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LOCALID_LILYCOVE_MILES, Rooftop_Movement_BounceBack
# 49 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
# 50 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LilycoveCity_DepartmentStoreRooftop_Neal, Common_Movement_FacePlayer
# 51 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LOCALID_LILYCOVE_MILES, Common_Movement_FacePlayer
# 52 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
# 54 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_6, MSGBOX_DEFAULT
# 55 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	giveitem ITEM_LEMONADE
# 56 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_7, MSGBOX_DEFAULT
# 57 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	giveitem ITEM_EVIOLITE
# 58 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_LILYCOVE_NEAL_FREED
# 59 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_8, MSGBOX_DEFAULT
# 60 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_2:
# 6 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_0, MSGBOX_DEFAULT
# 7 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_5:
# 13 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_2, MSGBOX_DEFAULT
# 14 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_8:
# 20 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_3, MSGBOX_DEFAULT
# 21 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_11:
# 26 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_3, MSGBOX_DEFAULT
# 27 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_14:
# 36 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 3
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_13

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_15:
# 35 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_0x8009, 3
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_14
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_13


LilycoveCity_DepartmentStoreRooftop_EventScript_Miles::
# 65 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Miles_Text_0, MSGBOX_NPC
	end


# 69 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
Rooftop_Movement_MilesTug:
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
	step_end

# 73 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
Rooftop_Movement_BounceBack:
# 74 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	jump_down
	step_end

# 77 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_MapScripts::
# 78 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStoreRooftop_OnTransition
# 79 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.byte 0
# 80 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 81 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_OnTransition:
# 82 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 83 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman
# 84 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman
# 85 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_unset FLAG_LILYCOVE_NEAL_FREED, LilycoveCity_DepartmentStoreRooftop_EventScript_HideMiles
# 86 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 87 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 88 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_HideMiles::
# 89 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MILES
# 90 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 91 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 92 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman::
# 93 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 94 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 95 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 96 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman::
# 97 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 98 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 99 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 100 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman::
# 101 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 102 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 103 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message gText_HowMayIServeYou
# 104 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 105 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	pokemartdecoration LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale
# 106 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 107 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 108 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 109 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 110 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.align 2
# 111 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale:
# 112 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_MUD_BALL
# 113 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_FENCE_LENGTH
# 114 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 115 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_TIRE
# 116 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_BREAKABLE_DOOR
# 117 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SOLID_BOARD
# 118 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SAND_ORNAMENT
# 119 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_STAND
# 120 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SLIDE
# 121 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_TV
# 122 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_ROUND_TV
# 123 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_CUTE_TV
# 124 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_WAILMER_DOLL
# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_RHYDON_DOLL
# 126 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte 0
# 127 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 128 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 129 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 130 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Man::
# 131 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 132 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 133 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 134 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale
# 135 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales, MSGBOX_DEFAULT
# 136 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 137 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 138 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 139 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale::
# 140 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale, MSGBOX_DEFAULT
# 141 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 142 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 143 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 144 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan::
# 145 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty, MSGBOX_NPC
# 146 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 147 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 148 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine::
# 149 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lockall
# 150 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 151 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 152 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	showmoneybox 0, 0
# 153 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
# 154 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 155 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 156 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink::
# 157 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	multichoice 16, 0, MULTI_VENDING_MACHINE, FALSE
# 158 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 159 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	switch VAR_TEMP_1
# 160 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater
# 161 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop
# 162 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade
# 163 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
# 164 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 165 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 166 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 167 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater::
# 168 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
# 169 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 170 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 171 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 172 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop::
# 173 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
# 174 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 175 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 176 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 177 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade::
# 178 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
# 179 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 180 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 181 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 182 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater::
# 183 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 200
# 184 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 185 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 186 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop::
# 187 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 300
# 188 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 189 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 190 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade::
# 191 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 350
# 192 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 193 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 194 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater::
# 195 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 200
# 196 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 197 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 198 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop::
# 199 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 300
# 200 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 201 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 202 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade::
# 203 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 350
# 204 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 205 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 206 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink::
# 207 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater
# 208 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop
# 209 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade
# 210 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink
# 211 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 212 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 213 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater
# 214 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop
# 215 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade
# 216 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	updatemoneybox
# 217 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 218 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 219 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 220 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 221 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 222 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 223 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 224 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64  @ 1/64 chance of an additional drink dropping
# 225 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 226 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 227 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 228 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 229 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 230 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 231 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 232 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 233 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 234 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64  @ 1/64 * the prev 1/64 chance of a third additional drink dropping, ~ 0.02% chance
# 235 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 236 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 237 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 238 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 239 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 240 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 241 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 242 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 243 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 244 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 245 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 246 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 247 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink::
# 248 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 249 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 250 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
# 251 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 252 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 253 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink::
# 254 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 255 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 256 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 257 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 258 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink::
# 259 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 260 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 261 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 262 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 263 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine::
# 264 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	hidemoneybox
# 265 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	releaseall
# 266 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 267 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 268 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales:
# 269 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Don't they have set dates for their\n"
# 270 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "clear-out sales?\p"
# 271 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "I watch TV, but they never show any\n"
# 272 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "commercials.$"
# 273 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 274 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale:
# 275 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Yes! I've been waiting a long time for\n"
# 276 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "this clear-out sale.\p"
# 277 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "They have items that you can only get\n"
# 278 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "here. I'm going to load up, that I am!$"
# 279 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 280 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty:
# 281 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Ohh… I'm bone-dry thirsty!$"
# 282 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 283 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike:
# 284 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "It's a VENDING MACHINE.\n"
# 285 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Which drink would you like?$"
# 286 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 287 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown:
# 288 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
# 289 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "A can of {STR_VAR_1} dropped down.$"
# 290 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 291 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown:
# 292 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
# 293 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Score! An extra can of {STR_VAR_1}\n"
# 294 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "dropped down!$"
# 295 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 296 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney:
# 297 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Not enough money…$"
# 298 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 299 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink:
# 300 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Decided against buying a drink.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_0:
# 6 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Neal: Free at last... You're the one who\n"
	.string "made the call. I owe you everything.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_1:
# 11 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Hi, my name is Neal. Can you call my\n"
	.string "brother Miles? I have my PENIS stuck in\l"
	.string "the vending machine!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_2:
# 13 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Neal: Please... if you see Miles, tell him\n"
	.string "I love him.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_3:
# 20 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Neal: Wait--your BAG is full! Make some\n"
	.string "room first. We WILL repay you for this.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_4:
# 31 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "You pulled out your POKéNAV and dialed\n"
	.string "Miles…$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_5:
# 42 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Miles: NEAL?! AGAIN?!\p"
	.string "Hold still, baby brother. HNNNGH…$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_6:
# 54 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Neal: I'M FREE!\p"
	.string "Thank you for making the call! Take this\n"
	.string "LEMONADE--it's what got me into this\l"
	.string "mess. I never want to see one again.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_7:
# 56 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Miles: Thanks for calling me, kid. You\n"
	.string "don't want to know how many times this\l"
	.string "has happened.\p"
	.string "Take this EVIOLITE. It protects those\n"
	.string "who aren't fully developed.\p"
	.string "Like my brother.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_8:
# 59 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Neal: Come on, Miles. Let's go get a\n"
	.string "soda.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Miles_Text_0:
# 65 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Miles: I'm staying right here until he's\n"
	.string "done shopping.\p"
	.string "I don't trust him alone with these\n"
	.string "machines.$"
