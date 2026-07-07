BattleFrontier_OutsideWest_EventScript_NatureManiac::
# 2 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 3 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 5 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_0, MSGBOX_YESNO
# 6 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiac_2
BattleFrontier_OutsideWest_EventScript_NatureManiac_1:
# 10 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 11 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_NatureManiac_5
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 19 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_NatureManiac_8
BattleFrontier_OutsideWest_EventScript_NatureManiac_7:
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiac_11
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetHiddenNature
# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_4, MSGBOX_DEFAULT
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature
	return

BattleFrontier_OutsideWest_EventScript_NatureManiac_2:
# 7 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiac_1

BattleFrontier_OutsideWest_EventScript_NatureManiac_5:
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_NatureManiac_8:
# 20 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiac_7

BattleFrontier_OutsideWest_EventScript_NatureManiac_11:
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_3, MSGBOX_DEFAULT
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature::
# 36 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE, NatureManiac_Text_Hardy, NatureManiac_Text_Lonely, NatureManiac_Text_Brave, NatureManiac_Text_Adamant, NatureManiac_Text_Naughty, NatureManiac_Text_Bold, NatureManiac_Text_Docile, NatureManiac_Text_Relaxed, NatureManiac_Text_Impish, NatureManiac_Text_Lax, NatureManiac_Text_Timid, NatureManiac_Text_Hasty, NatureManiac_Text_Serious, NatureManiac_Text_Jolly, NatureManiac_Text_Naive, NatureManiac_Text_Modest, NatureManiac_Text_Mild, NatureManiac_Text_Quiet, NatureManiac_Text_Bashful, NatureManiac_Text_Rash, NatureManiac_Text_Calm, NatureManiac_Text_Gentle, NatureManiac_Text_Sassy, NatureManiac_Text_Careful, NatureManiac_Text_Quirky
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_2
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_1:
# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_5
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_4:
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_1, MSGBOX_YESNO
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_8
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_7:
# 77 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 78 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetHiddenNature
# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_2, MSGBOX_DEFAULT
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_2:
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_1

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_5:
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_0, MSGBOX_DEFAULT
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_4

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_8:
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_7


BattleFrontier_OutsideWest_EventScript_IVManiac::
# 89 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 90 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_0, MSGBOX_YESNO
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_2
BattleFrontier_OutsideWest_EventScript_IVManiac_1:
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 98 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_IVManiac_5
# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_2, MSGBOX_DEFAULT
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 106 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_IVManiac_8
BattleFrontier_OutsideWest_EventScript_IVManiac_7:
# 110 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_11
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_4, MSGBOX_DEFAULT
# 118 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_HP, STAT_HP
# 119 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Attack, STAT_ATK
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Defense, STAT_DEF
# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_SpAtk, STAT_SPATK
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_SpDef, STAT_SPDEF
# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Speed, STAT_SPEED
# 124 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, STAT_HP, DYN_MULTICHOICE_CB_NONE
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_14
BattleFrontier_OutsideWest_EventScript_IVManiac_13:
# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonIv
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_3
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_5, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_4, 0
BattleFrontier_OutsideWest_EventScript_IVManiac_17:
# 136 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, 32
	goto_if_lt BattleFrontier_OutsideWest_EventScript_IVManiac_18
# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_21
BattleFrontier_OutsideWest_EventScript_IVManiac_20:
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_6, MSGBOX_YESNO
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_24
BattleFrontier_OutsideWest_EventScript_IVManiac_23:
# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8006, VAR_TEMP_4
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonIv
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_7, MSGBOX_DEFAULT
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_IVManiac_2:
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_1

BattleFrontier_OutsideWest_EventScript_IVManiac_5:
# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_1, MSGBOX_DEFAULT
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_IVManiac_8:
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_7

BattleFrontier_OutsideWest_EventScript_IVManiac_11:
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_3, MSGBOX_DEFAULT
# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_IVManiac_14:
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_13

BattleFrontier_OutsideWest_EventScript_IVManiac_18:
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Number, VAR_TEMP_4
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_17

BattleFrontier_OutsideWest_EventScript_IVManiac_21:
# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_20

BattleFrontier_OutsideWest_EventScript_IVManiac_24:
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_23


BattleFrontier_OutsideWest_EventScript_IVManiacDecline::
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacDecline_Text_0, MSGBOX_DEFAULT
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_NatureManiacDecline::
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacDecline_Text_0, MSGBOX_DEFAULT
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 212 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 258 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 259 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 264 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 265 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 270 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 284 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 301 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 306 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 321 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 352 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 358 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 368 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 370 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 387 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 392 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 393 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Your path to the invincible superstar!$"
# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Seek out the toughest POKéMON!$"
# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Choose one of three paths!$"
# 523 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "TRAINERS bring their best-raised\n"
# 527 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON for elimination-style matches.$"
# 528 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 529 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 531 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "May I see your TICKET?$"
# 532 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 533 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 535 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm terribly sorry.\p"
# 536 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You must have a TICKET to board\n"
# 537 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the ferry.$"
# 538 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 539 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 540 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 541 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 542 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And where would you like to go?$"
# 543 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 544 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 545 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 546 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 547 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 548 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 549 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 550 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 551 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"
# 552 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 553 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 554 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 555 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "departure.$"
# 556 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 557 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 558 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"
# 559 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 560 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 561 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
# 562 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But here…\l"
# 563 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've been useless!$"
# 564 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 565 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 566 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
# 567 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "but I can't find it even though I have\l"
# 568 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a map of the BATTLE FRONTIER.\p"
# 569 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This place is just too big!$"
# 570 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 571 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 572 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
# 573 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "as I arrived here.\p"
# 574 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But on the way, I got seasick…\n"
# 575 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Urrrrp…$"
# 576 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 577 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 578 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
# 579 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "here, you know?\p"
# 580 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Only those TRAINERS who've been\n"
# 581 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "recognized as tough are brought here.\p"
# 582 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's why many TRAINERS don't even\n"
# 583 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "know about the BATTLE FRONTIER.$"
# 584 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 585 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 586 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
# 587 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Are you sure we can make challenges\n"
# 588 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "even if we don't have any POKéMON?$"
# 589 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 590 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 591 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
# 592 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure it'll be okay.\p"
# 593 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I think…\p"
# 594 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But remember that big scary guy?\n"
# 595 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He said, “I'll lend you POKéMON!”$"
# 596 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 597 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 598 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
# 599 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You can rent strong POKéMON there.\p"
# 600 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But it makes me wonder.\n"
# 601 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Who's raising those rental POKéMON?$"
# 602 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 603 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 604 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
# 605 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "PIKE because of SEVIPER…\p"
# 606 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "B-but I came all the way here, so I will\n"
# 607 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "try to conquer everything!\l"
# 608 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "…Shudder…$"
# 609 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 610 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 611 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
# 612 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "One, two, three!\p"
# 613 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 614 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 615 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 616 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
# 617 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I will take the BATTLE PIKE challenge!$"
# 618 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 619 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 620 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 621 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I lost.\p"
# 622 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I guess I'm not very lucky today.\n"
# 623 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll put off my BATTLE PIKE challenge\l"
# 624 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "until tomorrow.$"
# 625 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 626 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 627 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
# 628 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "for some unknown reason, would choose\l"
# 629 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "fishing over battling.\p"
# 630 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? You can't catch anything here?\n"
# 631 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's disappointing…$"
# 632 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 633 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 634 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
# 635 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "matter what, until I get a Symbol.$"
# 636 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 637 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 638 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
# 639 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the BATTLE DOME?\p"
# 640 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll wish you the best of luck.\n"
# 641 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let us both win our way up and meet\l"
# 642 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in challenges.$"
# 643 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 644 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 645 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
# 646 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The BATTLE DOME is here!\l"
# 647 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Go get 'em, Grandpa!$"
# 648 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 649 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 650 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
# 651 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I won't let GENTLEMEN beat me!\p"
# 652 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But where is the entrance?$"
# 653 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 654 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 655 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
# 656 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "that long ago.\p"
# 657 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But, now look at this place! Amazing!\n"
# 658 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll bring my mother out to see this.$"
# 659 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 660 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 661 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
# 662 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "FRONTIER!\p"
# 663 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure to grab attention with\n"
# 664 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "my looks and ability!$"
# 665 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 666 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 667 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
# 668 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It looks like this square's filled with\n"
# 669 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tough people.\p"
# 670 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…$"
# 671 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 672 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 673 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 674 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A while back, I met this older girl\n"
# 675 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "at the BATTLE PIKE.\p"
# 676 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She had these eyes that were scary\n"
# 677 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in a real ornery way.\p"
# 678 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 679 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She got all furious: “Will you quit\n"
# 680 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eating!” Then she whaled on me.\p"
# 681 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It was a hair-raising kind of\n"
# 682 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "scary experience, sure enough.\p"
# 683 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…$"
# 684 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 685 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 686 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
# 687 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's nothing!\p"
# 688 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Why, the last time I cheered for him,\n"
# 689 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "our eyes met and sparks flew!$"
# 690 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 691 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 692 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
# 693 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pfft!\p"
# 694 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That only happened because\n"
# 695 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I happened to be sitting next to you!\p"
# 696 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE only looked our way\n"
# 697 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "because my cheering was so loud!$"
# 698 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 699 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 700 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
# 701 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Keep that racket down!\p"
# 702 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You fair-weather fans should stick\n"
# 703 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to cheering for some GYM LEADER!\p"
# 704 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE is mine!\n"
# 705 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The only idol for me!$"
# 706 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 707 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 708 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
# 709 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's hard to believe, but they once\n"
# 710 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "were TRAINERS, and good ones, too.\p"
# 711 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They used to be incredibly tough,\n"
# 712 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "and they were famous, too.\p"
# 713 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But they were obliterated by this\n"
# 714 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "certain TRAINER at a tournament.\p"
# 715 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They were so thoroughly whipped,\n"
# 716 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "they became smitten by the TRAINER.\p"
# 717 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Now they're just fans of the TRAINER.\n"
# 718 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They go cheer for their idol at the\l"
# 719 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "BATTLE DOME every day now.$"
# 720 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 721 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 722 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
# 723 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a POKéMON with an unusually long tail\l"
# 724 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "somewhere in the BATTLE FRONTIER.\p"
# 725 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It must be adorable. I'm sure of it…\p"
# 726 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, challenges can wait. I feel driven\n"
# 727 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to find the delightful creature!$"

BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_0:
# 5 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hiya! I'm the NATURE MANIAC! For just 5\n"
	.string "Battle Points, I can bring out a whole\l"
	.string "new side of your POKéMON's personality!\l"
	.string "Any nature you like! Interested?$"

BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_1:
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, but... You don't have enough Battle\n"
	.string "Points! Come back when you've earned at\l"
	.string "least 5.$"

BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_2:
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which POKéMON should I work on?$"

BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_3:
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's an EGG! Who knows what's even in\n"
	.string "there? I can't work with that!$"

BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_4:
# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And which nature would you like?$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_0:
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Wahaha! Your POKéMON already HAS that\n"
	.string "nature! Pick a different one!$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_1:
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Excellent choice! That'll be 5 Battle\n"
	.string "Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_2:
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "...And done! Your POKéMON has a whole\n"
	.string "new outlook on life! Come back anytime!$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_0:
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehehe... I can see a POKéMON's hidden\n"
	.string "potential. For 5 Battle Points, I'll\l"
	.string "rewrite it! Any stat, any value!\l"
	.string "Interested?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_1:
# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... No Battle Points, no potential!\n"
	.string "Come back with at least 5.$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_2:
# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which POKéMON shall we tinker with?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_3:
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG's potential is still a mystery,\n"
	.string "even to me!$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_4:
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which stat should I rewrite?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_5:
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... That stat's potential is\n"
	.string "{STR_VAR_1} right now. What should\l"
	.string "it become?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_6:
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1}, is it? That'll be 5\n"
	.string "Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_7:
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehehe... It is done! Your POKéMON will\n"
	.string "never be the same!$"

BattleFrontier_OutsideWest_EventScript_IVManiacDecline_Text_0:
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... Scared of a little potential?\n"
	.string "Come back anytime.$"

BattleFrontier_OutsideWest_EventScript_NatureManiacDecline_Text_0:
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, fine. Come back if you change your\n"
	.string "mind!$"

IVManiac_Text_HP::
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "HP$"

IVManiac_Text_Attack::
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Attack$"

IVManiac_Text_Defense::
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Defense$"

IVManiac_Text_SpAtk::
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sp. Atk$"

IVManiac_Text_SpDef::
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sp. Def$"

IVManiac_Text_Speed::
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Speed$"

IVManiac_Text_Number::
# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1}$"

NatureManiac_Text_Hardy::
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hardy$"

NatureManiac_Text_Lonely::
# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lonely$"

NatureManiac_Text_Brave::
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Brave$"

NatureManiac_Text_Adamant::
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Adamant$"

NatureManiac_Text_Naughty::
# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naughty$"

NatureManiac_Text_Bold::
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bold$"

NatureManiac_Text_Docile::
# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Docile$"

NatureManiac_Text_Relaxed::
# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Relaxed$"

NatureManiac_Text_Impish::
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Impish$"

NatureManiac_Text_Lax::
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lax$"

NatureManiac_Text_Timid::
# 195 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Timid$"

NatureManiac_Text_Hasty::
# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hasty$"

NatureManiac_Text_Serious::
# 197 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Serious$"

NatureManiac_Text_Jolly::
# 198 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Jolly$"

NatureManiac_Text_Naive::
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naive$"

NatureManiac_Text_Modest::
# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Modest$"

NatureManiac_Text_Mild::
# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mild$"

NatureManiac_Text_Quiet::
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quiet$"

NatureManiac_Text_Bashful::
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bashful$"

NatureManiac_Text_Rash::
# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Rash$"

NatureManiac_Text_Calm::
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Calm$"

NatureManiac_Text_Gentle::
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Gentle$"

NatureManiac_Text_Sassy::
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sassy$"

NatureManiac_Text_Careful::
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Careful$"

NatureManiac_Text_Quirky::
# 209 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quirky$"
