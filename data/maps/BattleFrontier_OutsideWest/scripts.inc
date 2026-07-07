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
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_4, MSGBOX_DEFAULT
# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, NatureManiac_Text_Hardy, NatureManiac_Text_Lonely, NatureManiac_Text_Brave, NatureManiac_Text_Adamant, NatureManiac_Text_Naughty, NatureManiac_Text_Bold, NatureManiac_Text_Docile, NatureManiac_Text_Relaxed, NatureManiac_Text_Impish, NatureManiac_Text_Lax, NatureManiac_Text_Timid, NatureManiac_Text_Hasty, NatureManiac_Text_Serious, NatureManiac_Text_Jolly, NatureManiac_Text_Naive, NatureManiac_Text_Modest, NatureManiac_Text_Mild, NatureManiac_Text_Quiet, NatureManiac_Text_Bashful, NatureManiac_Text_Rash, NatureManiac_Text_Calm, NatureManiac_Text_Gentle, NatureManiac_Text_Sassy, NatureManiac_Text_Careful, NatureManiac_Text_Quirky
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiac_14
BattleFrontier_OutsideWest_EventScript_NatureManiac_13:
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_5, MSGBOX_YESNO
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiac_17
BattleFrontier_OutsideWest_EventScript_NatureManiac_16:
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetHiddenNature
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_6, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

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

BattleFrontier_OutsideWest_EventScript_NatureManiac_14:
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiac_13

BattleFrontier_OutsideWest_EventScript_NatureManiac_17:
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiac_16


BattleFrontier_OutsideWest_EventScript_IVManiac::
# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_0, MSGBOX_YESNO
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_2
BattleFrontier_OutsideWest_EventScript_IVManiac_1:
# 87 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 88 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_IVManiac_5
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_2, MSGBOX_DEFAULT
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 96 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_IVManiac_8
BattleFrontier_OutsideWest_EventScript_IVManiac_7:
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 101 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_11
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_4, MSGBOX_DEFAULT
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_HP, STAT_HP
# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Attack, STAT_ATK
# 110 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Defense, STAT_DEF
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_SpAtk, STAT_SPATK
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_SpDef, STAT_SPDEF
# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Speed, STAT_SPEED
# 114 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, STAT_HP, DYN_MULTICHOICE_CB_NONE
# 115 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_14
BattleFrontier_OutsideWest_EventScript_IVManiac_13:
# 118 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonIv
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_3
# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_5, MSGBOX_DEFAULT
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_4, 0
BattleFrontier_OutsideWest_EventScript_IVManiac_17:
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, 32
	goto_if_lt BattleFrontier_OutsideWest_EventScript_IVManiac_18
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_21
BattleFrontier_OutsideWest_EventScript_IVManiac_20:
# 135 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_6, MSGBOX_YESNO
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_24
BattleFrontier_OutsideWest_EventScript_IVManiac_23:
# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8006, VAR_TEMP_4
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonIv
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_7, MSGBOX_DEFAULT
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_IVManiac_2:
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_1

BattleFrontier_OutsideWest_EventScript_IVManiac_5:
# 89 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_1, MSGBOX_DEFAULT
# 90 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_IVManiac_8:
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_7

BattleFrontier_OutsideWest_EventScript_IVManiac_11:
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_3, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_IVManiac_14:
# 116 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_13

BattleFrontier_OutsideWest_EventScript_IVManiac_18:
# 127 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Number, VAR_TEMP_4
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_17

BattleFrontier_OutsideWest_EventScript_IVManiac_21:
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_20

BattleFrontier_OutsideWest_EventScript_IVManiac_24:
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_23


BattleFrontier_OutsideWest_EventScript_IVManiacDecline::
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacDecline_Text_0, MSGBOX_DEFAULT
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_NatureManiacDecline::
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacDecline_Text_0, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 209 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 212 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 258 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 259 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 264 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 265 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 270 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 284 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 301 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 306 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 321 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 352 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 358 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 368 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 370 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 387 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 392 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 393 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Your path to the invincible superstar!$"
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Seek out the toughest POKéMON!$"
# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Choose one of three paths!$"
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "TRAINERS bring their best-raised\n"
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON for elimination-style matches.$"
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "May I see your TICKET?$"
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 523 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm terribly sorry.\p"
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You must have a TICKET to board\n"
# 527 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the ferry.$"
# 528 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 529 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 531 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 532 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And where would you like to go?$"
# 533 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 535 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 536 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 537 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 538 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 539 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 540 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 541 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"
# 542 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 543 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 544 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 545 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "departure.$"
# 546 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 547 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 548 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"
# 549 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 550 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 551 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
# 552 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But here…\l"
# 553 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've been useless!$"
# 554 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 555 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 556 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
# 557 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "but I can't find it even though I have\l"
# 558 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a map of the BATTLE FRONTIER.\p"
# 559 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This place is just too big!$"
# 560 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 561 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 562 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
# 563 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "as I arrived here.\p"
# 564 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But on the way, I got seasick…\n"
# 565 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Urrrrp…$"
# 566 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 567 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 568 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
# 569 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "here, you know?\p"
# 570 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Only those TRAINERS who've been\n"
# 571 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "recognized as tough are brought here.\p"
# 572 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's why many TRAINERS don't even\n"
# 573 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "know about the BATTLE FRONTIER.$"
# 574 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 575 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 576 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
# 577 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Are you sure we can make challenges\n"
# 578 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "even if we don't have any POKéMON?$"
# 579 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 580 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 581 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
# 582 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure it'll be okay.\p"
# 583 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I think…\p"
# 584 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But remember that big scary guy?\n"
# 585 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He said, “I'll lend you POKéMON!”$"
# 586 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 587 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 588 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
# 589 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You can rent strong POKéMON there.\p"
# 590 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But it makes me wonder.\n"
# 591 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Who's raising those rental POKéMON?$"
# 592 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 593 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 594 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
# 595 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "PIKE because of SEVIPER…\p"
# 596 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "B-but I came all the way here, so I will\n"
# 597 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "try to conquer everything!\l"
# 598 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "…Shudder…$"
# 599 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 600 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 601 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
# 602 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "One, two, three!\p"
# 603 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 604 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 605 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 606 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
# 607 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I will take the BATTLE PIKE challenge!$"
# 608 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 609 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 610 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 611 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I lost.\p"
# 612 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I guess I'm not very lucky today.\n"
# 613 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll put off my BATTLE PIKE challenge\l"
# 614 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "until tomorrow.$"
# 615 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 616 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 617 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
# 618 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "for some unknown reason, would choose\l"
# 619 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "fishing over battling.\p"
# 620 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? You can't catch anything here?\n"
# 621 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's disappointing…$"
# 622 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 623 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 624 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
# 625 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "matter what, until I get a Symbol.$"
# 626 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 627 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 628 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
# 629 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the BATTLE DOME?\p"
# 630 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll wish you the best of luck.\n"
# 631 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let us both win our way up and meet\l"
# 632 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in challenges.$"
# 633 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 634 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 635 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
# 636 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The BATTLE DOME is here!\l"
# 637 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Go get 'em, Grandpa!$"
# 638 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 639 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 640 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
# 641 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I won't let GENTLEMEN beat me!\p"
# 642 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But where is the entrance?$"
# 643 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 644 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 645 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
# 646 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "that long ago.\p"
# 647 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But, now look at this place! Amazing!\n"
# 648 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll bring my mother out to see this.$"
# 649 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 650 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 651 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
# 652 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "FRONTIER!\p"
# 653 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure to grab attention with\n"
# 654 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "my looks and ability!$"
# 655 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 656 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 657 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
# 658 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It looks like this square's filled with\n"
# 659 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tough people.\p"
# 660 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…$"
# 661 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 662 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 663 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 664 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A while back, I met this older girl\n"
# 665 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "at the BATTLE PIKE.\p"
# 666 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She had these eyes that were scary\n"
# 667 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in a real ornery way.\p"
# 668 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 669 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She got all furious: “Will you quit\n"
# 670 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eating!” Then she whaled on me.\p"
# 671 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It was a hair-raising kind of\n"
# 672 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "scary experience, sure enough.\p"
# 673 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…$"
# 674 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 675 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 676 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
# 677 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's nothing!\p"
# 678 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Why, the last time I cheered for him,\n"
# 679 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "our eyes met and sparks flew!$"
# 680 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 681 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 682 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
# 683 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pfft!\p"
# 684 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That only happened because\n"
# 685 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I happened to be sitting next to you!\p"
# 686 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE only looked our way\n"
# 687 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "because my cheering was so loud!$"
# 688 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 689 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 690 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
# 691 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Keep that racket down!\p"
# 692 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You fair-weather fans should stick\n"
# 693 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to cheering for some GYM LEADER!\p"
# 694 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE is mine!\n"
# 695 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The only idol for me!$"
# 696 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 697 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 698 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
# 699 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's hard to believe, but they once\n"
# 700 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "were TRAINERS, and good ones, too.\p"
# 701 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They used to be incredibly tough,\n"
# 702 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "and they were famous, too.\p"
# 703 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But they were obliterated by this\n"
# 704 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "certain TRAINER at a tournament.\p"
# 705 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They were so thoroughly whipped,\n"
# 706 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "they became smitten by the TRAINER.\p"
# 707 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Now they're just fans of the TRAINER.\n"
# 708 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They go cheer for their idol at the\l"
# 709 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "BATTLE DOME every day now.$"
# 710 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 711 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 712 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
# 713 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a POKéMON with an unusually long tail\l"
# 714 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "somewhere in the BATTLE FRONTIER.\p"
# 715 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It must be adorable. I'm sure of it…\p"
# 716 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, challenges can wait. I feel driven\n"
# 717 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
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
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And which nature would you like?$"

BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_5:
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Excellent choice! That'll be 5 Battle\n"
	.string "Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_NatureManiac_Text_6:
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "...And done! Your POKéMON has a whole\n"
	.string "new outlook on life! Come back anytime!$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_0:
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehehe... I can see a POKéMON's hidden\n"
	.string "potential. For 5 Battle Points, I'll\l"
	.string "rewrite it! Any stat, any value!\l"
	.string "Interested?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_1:
# 89 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... No Battle Points, no potential!\n"
	.string "Come back with at least 5.$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_2:
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which POKéMON shall we tinker with?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_3:
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG's potential is still a mystery,\n"
	.string "even to me!$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_4:
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which stat should I rewrite?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_5:
# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... That stat's potential is\n"
	.string "{STR_VAR_1} right now. What should\l"
	.string "it become?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_6:
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1}, is it? That'll be 5\n"
	.string "Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_7:
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehehe... It is done! Your POKéMON will\n"
	.string "never be the same!$"

BattleFrontier_OutsideWest_EventScript_IVManiacDecline_Text_0:
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... Scared of a little potential?\n"
	.string "Come back anytime.$"

BattleFrontier_OutsideWest_EventScript_NatureManiacDecline_Text_0:
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, fine. Come back if you change your\n"
	.string "mind!$"

IVManiac_Text_HP::
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "HP$"

IVManiac_Text_Attack::
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Attack$"

IVManiac_Text_Defense::
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Defense$"

IVManiac_Text_SpAtk::
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sp. Atk$"

IVManiac_Text_SpDef::
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sp. Def$"

IVManiac_Text_Speed::
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Speed$"

IVManiac_Text_Number::
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1}$"

NatureManiac_Text_Hardy::
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hardy$"

NatureManiac_Text_Lonely::
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lonely$"

NatureManiac_Text_Brave::
# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Brave$"

NatureManiac_Text_Adamant::
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Adamant$"

NatureManiac_Text_Naughty::
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naughty$"

NatureManiac_Text_Bold::
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bold$"

NatureManiac_Text_Docile::
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Docile$"

NatureManiac_Text_Relaxed::
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Relaxed$"

NatureManiac_Text_Impish::
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Impish$"

NatureManiac_Text_Lax::
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lax$"

NatureManiac_Text_Timid::
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Timid$"

NatureManiac_Text_Hasty::
# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hasty$"

NatureManiac_Text_Serious::
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Serious$"

NatureManiac_Text_Jolly::
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Jolly$"

NatureManiac_Text_Naive::
# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naive$"

NatureManiac_Text_Modest::
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Modest$"

NatureManiac_Text_Mild::
# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mild$"

NatureManiac_Text_Quiet::
# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quiet$"

NatureManiac_Text_Bashful::
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bashful$"

NatureManiac_Text_Rash::
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Rash$"

NatureManiac_Text_Calm::
# 195 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Calm$"

NatureManiac_Text_Gentle::
# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Gentle$"

NatureManiac_Text_Sassy::
# 197 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sassy$"

NatureManiac_Text_Careful::
# 198 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Careful$"

NatureManiac_Text_Quirky::
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quirky$"
