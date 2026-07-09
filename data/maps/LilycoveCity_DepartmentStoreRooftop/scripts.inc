LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer::
# 2 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 3 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 4 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_set FLAG_LILYCOVE_ROOF_EVENT_DONE, LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_2
# 9 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	closemessage
# 11 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Text_2, MSGBOX_DEFAULT
# 12 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	closemessage
# 13 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_BALL_THROW
# 14 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitse
# 15 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_ROOF_PIKACHU
# 16 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	addobject LOCALID_LILYCOVE_ROOF_PIKACHU
# 17 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LOCALID_LILYCOVE_ROOF_PIKACHU, LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Movement_0
# 18 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
# 19 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 20 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmoncry
# 21 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	delay 16
# 23 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_5
LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_4:
# 28 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LOCALID_LILYCOVE_ROOF_SPENCER, LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Movement_2
# 29 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
# 30 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	delay 16
# 32 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_M_MEGA_KICK
# 33 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_ENCOUNTER
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LOCALID_LILYCOVE_ROOF_PIKACHU, LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Movement_3
# 35 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
# 36 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removeobject LOCALID_LILYCOVE_ROOF_PIKACHU
# 37 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_ROOF_PIKACHU
# 38 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	delay 16
# 39 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Text_3, MSGBOX_DEFAULT
# 40 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	closemessage
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LOCALID_LILYCOVE_ROOF_CHALLENGER, LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Movement_4
# 42 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
# 43 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removeobject LOCALID_LILYCOVE_ROOF_CHALLENGER
# 44 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	delay 24
# 45 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Text_4, MSGBOX_DEFAULT
# 46 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	giveitem ITEM_BLACK_SLUDGE
# 47 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_LILYCOVE_ROOF_EVENT_DONE
# 48 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_2:
# 5 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Text_0, MSGBOX_DEFAULT
# 6 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_5:
# 24 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Movement_1
# 25 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_4


LilycoveCity_DepartmentStoreRooftop_EventScript_RoofChallenger::
# 53 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_RoofChallenger_Text_0, MSGBOX_NPC
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_Neal::
# 57 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 58 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 60 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_set FLAG_LILYCOVE_NEAL_FREED, LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_2
# 66 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_1, MSGBOX_YESNO
# 67 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_5
# 73 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace ITEM_LEMONADE, 1
# 74 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_8
# 79 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace ITEM_EVIOLITE, 1
# 80 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_11
# 86 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_4, MSGBOX_DEFAULT
# 87 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	closemessage
# 88 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	fadescreen FADE_TO_WHITE
# 89 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 90 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_0x8008, 8
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_15
LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_13:
# 93 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MILES
# 94 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	addobject LOCALID_LILYCOVE_MILES
# 95 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 97 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_5, MSGBOX_DEFAULT
# 98 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	closemessage
# 99 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LOCALID_LILYCOVE_MILES, Rooftop_Movement_MilesTug
# 100 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
# 101 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_BALL_OPEN
# 102 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LilycoveCity_DepartmentStoreRooftop_Neal, Rooftop_Movement_BounceBack
# 103 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LOCALID_LILYCOVE_MILES, Rooftop_Movement_BounceBack
# 104 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
# 105 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LilycoveCity_DepartmentStoreRooftop_Neal, Common_Movement_FacePlayer
# 106 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	applymovement LOCALID_LILYCOVE_MILES, Common_Movement_FacePlayer
# 107 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmovement 0
# 109 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_6, MSGBOX_DEFAULT
# 110 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	giveitem ITEM_LEMONADE
# 111 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_7, MSGBOX_DEFAULT
# 112 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	giveitem ITEM_EVIOLITE
# 113 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_LILYCOVE_NEAL_FREED
# 114 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_8, MSGBOX_DEFAULT
# 115 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_2:
# 61 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_0, MSGBOX_DEFAULT
# 62 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_5:
# 68 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_2, MSGBOX_DEFAULT
# 69 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_8:
# 75 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_3, MSGBOX_DEFAULT
# 76 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_11:
# 81 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_3, MSGBOX_DEFAULT
# 82 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_14:
# 91 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 3
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_13

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_15:
# 90 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_0x8009, 3
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_14
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_13


LilycoveCity_DepartmentStoreRooftop_EventScript_Miles::
# 120 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Miles_Text_0, MSGBOX_NPC
	end


# 124 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
Rooftop_Movement_MilesTug:
# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_in_place_faster_up
	step_end

# 128 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
Rooftop_Movement_BounceBack:
# 129 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	jump_down
	step_end

# 132 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_MapScripts::
# 133 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStoreRooftop_OnTransition
# 134 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.byte 0
# 135 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 136 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_OnTransition:
# 137 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 138 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman
# 139 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman
# 140 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_unset FLAG_LILYCOVE_NEAL_FREED, LilycoveCity_DepartmentStoreRooftop_EventScript_HideMiles
# 141 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_ROOF_PIKACHU
# 142 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 143 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 144 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_HideMiles::
# 145 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MILES
# 146 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 147 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 148 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman::
# 149 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 150 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 151 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 152 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman::
# 153 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 154 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 155 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 156 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman::
# 157 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 158 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 159 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message gText_HowMayIServeYou
# 160 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 161 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	pokemartdecoration LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale
# 162 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 163 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 164 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 165 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 166 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.align 2
# 167 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale:
# 168 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_MUD_BALL
# 169 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_FENCE_LENGTH
# 170 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 171 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_TIRE
# 172 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_BREAKABLE_DOOR
# 173 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SOLID_BOARD
# 174 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SAND_ORNAMENT
# 175 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_STAND
# 176 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SLIDE
# 177 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_TV
# 178 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_ROUND_TV
# 179 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_CUTE_TV
# 180 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_WAILMER_DOLL
# 181 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_RHYDON_DOLL
# 182 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte 0
# 183 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 184 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 185 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 186 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Man::
# 187 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 188 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 189 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 190 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale
# 191 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales, MSGBOX_DEFAULT
# 192 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 193 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 194 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 195 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale::
# 196 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale, MSGBOX_DEFAULT
# 197 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 198 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 199 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 200 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan::
# 201 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty, MSGBOX_NPC
# 202 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 203 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 204 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine::
# 205 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lockall
# 206 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 207 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 208 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	showmoneybox 0, 0
# 209 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
# 210 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 211 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 212 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink::
# 213 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	multichoice 16, 0, MULTI_VENDING_MACHINE, FALSE
# 214 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 215 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	switch VAR_TEMP_1
# 216 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater
# 217 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop
# 218 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade
# 219 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
# 220 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 221 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 222 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 223 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater::
# 224 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
# 225 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 226 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 227 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 228 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop::
# 229 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
# 230 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 231 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 232 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 233 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade::
# 234 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
# 235 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 236 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 237 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 238 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater::
# 239 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 200
# 240 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 241 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 242 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop::
# 243 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 300
# 244 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 245 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 246 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade::
# 247 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 350
# 248 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 249 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 250 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater::
# 251 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 200
# 252 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 253 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 254 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop::
# 255 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 300
# 256 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 257 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 258 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade::
# 259 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 350
# 260 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 261 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 262 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink::
# 263 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater
# 264 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop
# 265 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade
# 266 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink
# 267 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 268 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 269 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater
# 270 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop
# 271 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade
# 272 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	updatemoneybox
# 273 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 274 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 275 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 276 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 277 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 278 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 279 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 280 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64  @ 1/64 chance of an additional drink dropping
# 281 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 282 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 283 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 284 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 285 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 286 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 287 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 288 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 289 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 290 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64  @ 1/64 * the prev 1/64 chance of a third additional drink dropping, ~ 0.02% chance
# 291 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 292 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 293 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 294 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 295 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 296 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 297 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 298 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 299 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 300 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 301 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 302 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 303 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink::
# 304 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 305 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 306 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
# 307 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 308 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 309 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink::
# 310 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 311 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 312 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 313 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 314 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink::
# 315 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 316 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 317 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 318 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 319 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine::
# 320 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	hidemoneybox
# 321 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	releaseall
# 322 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 323 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 324 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales:
# 325 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Don't they have set dates for their\n"
# 326 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "clear-out sales?\p"
# 327 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "I watch TV, but they never show any\n"
# 328 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "commercials.$"
# 329 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 330 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale:
# 331 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Yes! I've been waiting a long time for\n"
# 332 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "this clear-out sale.\p"
# 333 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "They have items that you can only get\n"
# 334 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "here. I'm going to load up, that I am!$"
# 335 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 336 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty:
# 337 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Ohh… I'm bone-dry thirsty!$"
# 338 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 339 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike:
# 340 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "It's a VENDING MACHINE.\n"
# 341 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Which drink would you like?$"
# 342 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 343 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown:
# 344 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
# 345 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "A can of {STR_VAR_1} dropped down.$"
# 346 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 347 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown:
# 348 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
# 349 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Score! An extra can of {STR_VAR_1}\n"
# 350 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "dropped down!$"
# 351 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 352 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney:
# 353 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Not enough money…$"
# 354 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 355 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink:
# 356 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Decided against buying a drink.$"

# 17 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Movement_0:
# 17 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	jump_in_place_left
	step_end

# 24 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Movement_1:
# 24 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_right
# 24 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	face_left
	step_end

# 28 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Movement_2:
# 28 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_right
# 28 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	face_down
	step_end

# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Movement_3:
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_fast_down
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_fast_down
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	jump_2_down
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	slide_down
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	slide_down
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	slide_down
	step_end

# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Movement_4:
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	emote_exclamation_mark
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_right
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_fast_down
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	walk_fast_down
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	jump_2_down
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	slide_down
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	slide_down
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	slide_down
	step_end

LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Text_0:
# 5 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "SPENCER: Let's kill more POKéMON!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Text_1:
# 9 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "SPENCER: This FAG challenged me to a\n"
	.string "POKéMON battle.\p"
	.string "I told him that was gay and that we\n"
	.string "should just fight instead.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Text_2:
# 11 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Go, PIKACHU!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Text_3:
# 39 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "NOOOO!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Spencer_Text_4:
# 45 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "SPENCER: Hey, that was pretty fun.\n"
	.string "Maybe POKéMON games aren't as gay as I\l"
	.string "thought.\p"
	.string "If I give you this, will you not tell the\n"
	.string "police about this?\p"
	.string "It fell out of my underwear earlier, but\n"
	.string "I think you might enjoy it more than me.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_RoofChallenger_Text_0:
# 53 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "I'm going to challenge SPENCER to a\nPOKéMON battle!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_0:
# 61 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Neal: Free at last... You're the one who\n"
	.string "made the call. I owe you everything.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_1:
# 66 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Hi, my name is Neal. Can you call my\n"
	.string "brother Miles? I have my PENIS stuck in\l"
	.string "the vending machine!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_2:
# 68 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Neal: Please... if you see Miles, tell him\n"
	.string "I love him.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_3:
# 75 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Neal: Wait--your BAG is full! Make some\n"
	.string "room first. We WILL repay you for this.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_4:
# 86 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "You pulled out your POKéNAV and dialed\n"
	.string "Miles…$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_5:
# 97 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Miles: NEAL?! AGAIN?!\p"
	.string "Hold still, baby brother. HNNNGH…$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_6:
# 109 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Neal: I'M FREE!\p"
	.string "Thank you for making the call! Take this\n"
	.string "LEMONADE--it's what got me into this\l"
	.string "mess. I never want to see one again.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_7:
# 111 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Miles: Thanks for calling me, kid. You\n"
	.string "don't want to know how many times this\l"
	.string "has happened.\p"
	.string "Take this EVIOLITE. It protects those\n"
	.string "who aren't fully developed.\p"
	.string "Like my brother.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Neal_Text_8:
# 114 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Neal: Come on, Miles. Let's go get a\n"
	.string "soda.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Miles_Text_0:
# 120 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Miles: I'm staying right here until he's\n"
	.string "done shopping.\p"
	.string "I don't trust him alone with these\n"
	.string "machines.$"
