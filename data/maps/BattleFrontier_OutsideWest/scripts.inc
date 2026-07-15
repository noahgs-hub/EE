BattleFrontier_OutsideWest_EventScript_ServiceNerd::
# 7 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 8 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 9 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_ServiceNerd_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_ServiceMenu::
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_ServiceMenu_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Nature, 0
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_IVs, 1
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Ability, 2
# 18 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Moves, 3
# 19 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Friendship, 4
# 20 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_EVEdit, 5
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_EVReset, 6
# 22 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Done, 7
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 8, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_ServiceMenu_3
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_ServiceMenu_4
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_ServiceMenu_5
# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 3, BattleFrontier_OutsideWest_EventScript_ServiceMenu_6
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 4, BattleFrontier_OutsideWest_EventScript_ServiceMenu_7
# 35 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 5, BattleFrontier_OutsideWest_EventScript_ServiceMenu_8
# 37 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 6, BattleFrontier_OutsideWest_EventScript_ServiceMenu_9
BattleFrontier_OutsideWest_EventScript_ServiceMenu_1:
# 40 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline
	return

BattleFrontier_OutsideWest_EventScript_ServiceMenu_3:
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureService
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_4:
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiac
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_5:
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Ability
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_6:
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearner
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_7:
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_friendship
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_8:
# 36 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_EVEdit
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_9:
# 38 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_EVReset
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1


BattleFrontier_OutsideWest_EventScript_EVEdit::
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_EVEdit_2
BattleFrontier_OutsideWest_EventScript_EVEdit_1:
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEdit_Text_1, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_EVEdit_5
BattleFrontier_OutsideWest_EventScript_EVEdit_4:
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVEdit_8
BattleFrontier_OutsideWest_EventScript_EVEdit_7:
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEdit_Text_3, MSGBOX_DEFAULT
# 76 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_HP, STAT_HP
# 77 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Attack, STAT_ATK
# 78 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Defense, STAT_DEF
# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_SpAtk, STAT_SPATK
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_SpDef, STAT_SPDEF
# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Speed, STAT_SPEED
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, STAT_HP, DYN_MULTICHOICE_CB_NONE
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVEdit_11
BattleFrontier_OutsideWest_EventScript_EVEdit_10:
# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 87 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits
	return

BattleFrontier_OutsideWest_EventScript_EVEdit_2:
# 59 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEdit_Text_0, MSGBOX_DEFAULT
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVEdit_1

BattleFrontier_OutsideWest_EventScript_EVEdit_5:
# 66 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVEdit_4

BattleFrontier_OutsideWest_EventScript_EVEdit_8:
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEdit_Text_2, MSGBOX_DEFAULT
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVEdit_7

BattleFrontier_OutsideWest_EventScript_EVEdit_11:
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVEdit_10


BattleFrontier_OutsideWest_EventScript_EVEditDigits::
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonEv
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_3
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_0, MSGBOX_DEFAULT
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_4, 0
BattleFrontier_OutsideWest_EventScript_EVEditDigits_2:
# 96 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, 3
	goto_if_lt BattleFrontier_OutsideWest_EventScript_EVEditDigits_3
# 101 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVEditDigits_6
BattleFrontier_OutsideWest_EventScript_EVEditDigits_5:
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_4, 0
# 106 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVEditDigits_9
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVEditDigits_10
BattleFrontier_OutsideWest_EventScript_EVEditDigits_8:
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_5, 0
BattleFrontier_OutsideWest_EventScript_EVEditDigits_14:
# 114 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_lt BattleFrontier_OutsideWest_EventScript_EVEditDigits_15
# 119 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVEditDigits_18
BattleFrontier_OutsideWest_EventScript_EVEditDigits_17:
# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_5, VAR_RESULT
BattleFrontier_OutsideWest_EventScript_EVEditDigits_21:
# 124 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_ne BattleFrontier_OutsideWest_EventScript_EVEditDigits_22
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_2, MSGBOX_DEFAULT
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_5, 0
BattleFrontier_OutsideWest_EventScript_EVEditDigits_25:
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_lt BattleFrontier_OutsideWest_EventScript_EVEditDigits_26
# 136 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVEditDigits_29
BattleFrontier_OutsideWest_EventScript_EVEditDigits_28:
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_5, VAR_RESULT
BattleFrontier_OutsideWest_EventScript_EVEditDigits_32:
# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_ne BattleFrontier_OutsideWest_EventScript_EVEditDigits_33
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, 252
	goto_if_gt BattleFrontier_OutsideWest_EventScript_EVEditDigits_36
BattleFrontier_OutsideWest_EventScript_EVEditDigits_35:
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_5, GetMonEvCap
# 152 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, VAR_TEMP_5
	goto_if_gt BattleFrontier_OutsideWest_EventScript_EVEditDigits_39
BattleFrontier_OutsideWest_EventScript_EVEditDigits_38:
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVEditDigits_42
BattleFrontier_OutsideWest_EventScript_EVEditDigits_41:
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_6, MSGBOX_YESNO
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVEditDigits_45
BattleFrontier_OutsideWest_EventScript_EVEditDigits_44:
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8006, VAR_TEMP_4
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonEv
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_7, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_EVEditDigits_3:
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 98 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Number, VAR_TEMP_4
# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_2

BattleFrontier_OutsideWest_EventScript_EVEditDigits_6:
# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_5

BattleFrontier_OutsideWest_EventScript_EVEditDigits_9:
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_4, 100
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_8

BattleFrontier_OutsideWest_EventScript_EVEditDigits_10:
# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_4, 200
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_8

BattleFrontier_OutsideWest_EventScript_EVEditDigits_15:
# 115 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_5
# 116 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Number, VAR_TEMP_5
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	addvar VAR_TEMP_5, 1
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_14

BattleFrontier_OutsideWest_EventScript_EVEditDigits_18:
# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_17

BattleFrontier_OutsideWest_EventScript_EVEditDigits_22:
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	addvar VAR_TEMP_4, 10
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	subvar VAR_TEMP_5, 1
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_21

BattleFrontier_OutsideWest_EventScript_EVEditDigits_26:
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_5
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Number, VAR_TEMP_5
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	addvar VAR_TEMP_5, 1
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_25

BattleFrontier_OutsideWest_EventScript_EVEditDigits_29:
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_28

BattleFrontier_OutsideWest_EventScript_EVEditDigits_33:
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	addvar VAR_TEMP_4, 1
# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	subvar VAR_TEMP_5, 1
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_32

BattleFrontier_OutsideWest_EventScript_EVEditDigits_36:
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_3, MSGBOX_DEFAULT
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_4, 252
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_35

BattleFrontier_OutsideWest_EventScript_EVEditDigits_39:
# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_5
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_4, MSGBOX_DEFAULT
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_4, VAR_TEMP_5
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_38

BattleFrontier_OutsideWest_EventScript_EVEditDigits_42:
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_5, MSGBOX_DEFAULT
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_41

BattleFrontier_OutsideWest_EventScript_EVEditDigits_45:
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVEditDigits_44


BattleFrontier_OutsideWest_EventScript_EVReset::
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_EVReset_2
BattleFrontier_OutsideWest_EventScript_EVReset_1:
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_1, MSGBOX_DEFAULT
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_EVReset_5
BattleFrontier_OutsideWest_EventScript_EVReset_4:
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_8
BattleFrontier_OutsideWest_EventScript_EVReset_7:
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonEvTotal
# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_11
BattleFrontier_OutsideWest_EventScript_EVReset_10:
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_3
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_3, MSGBOX_YESNO
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_14
BattleFrontier_OutsideWest_EventScript_EVReset_13:
# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ResetMonEvs
# 212 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_4, MSGBOX_DEFAULT
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_EVReset_2:
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_0, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_1

BattleFrontier_OutsideWest_EventScript_EVReset_5:
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_4

BattleFrontier_OutsideWest_EventScript_EVReset_8:
# 195 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVEdit_Text_2, MSGBOX_DEFAULT
# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_7

BattleFrontier_OutsideWest_EventScript_EVReset_11:
# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_2, MSGBOX_DEFAULT
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_10

BattleFrontier_OutsideWest_EventScript_EVReset_14:
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_13


BattleFrontier_OutsideWest_EventScript_NatureService::
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_NatureService_2
BattleFrontier_OutsideWest_EventScript_NatureService_1:
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_1, MSGBOX_DEFAULT
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_NatureService_5
BattleFrontier_OutsideWest_EventScript_NatureService_4:
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureService_8
BattleFrontier_OutsideWest_EventScript_NatureService_7:
# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetHiddenNature
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_3, MSGBOX_DEFAULT
# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature
	return

BattleFrontier_OutsideWest_EventScript_NatureService_2:
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_0, MSGBOX_DEFAULT
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_1

BattleFrontier_OutsideWest_EventScript_NatureService_5:
# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_4

BattleFrontier_OutsideWest_EventScript_NatureService_8:
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_2, MSGBOX_DEFAULT
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_7


BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature::
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE, NatureManiac_Text_Hardy, NatureManiac_Text_Lonely, NatureManiac_Text_Brave, NatureManiac_Text_Adamant, NatureManiac_Text_Naughty, NatureManiac_Text_Bold, NatureManiac_Text_Docile, NatureManiac_Text_Relaxed, NatureManiac_Text_Impish, NatureManiac_Text_Lax, NatureManiac_Text_Timid, NatureManiac_Text_Hasty, NatureManiac_Text_Serious, NatureManiac_Text_Jolly, NatureManiac_Text_Naive, NatureManiac_Text_Modest, NatureManiac_Text_Mild, NatureManiac_Text_Quiet, NatureManiac_Text_Bashful, NatureManiac_Text_Rash, NatureManiac_Text_Calm, NatureManiac_Text_Gentle, NatureManiac_Text_Sassy, NatureManiac_Text_Careful, NatureManiac_Text_Quirky
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_2
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_1:
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_5
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_4:
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_1, MSGBOX_YESNO
# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_8
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_7:
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetHiddenNature
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_2, MSGBOX_DEFAULT
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_2:
# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_1

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_5:
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_0, MSGBOX_DEFAULT
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_4

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_8:
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_7


BattleFrontier_OutsideWest_EventScript_IVManiac::
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_IVManiac_2
BattleFrontier_OutsideWest_EventScript_IVManiac_1:
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_1, MSGBOX_DEFAULT
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_IVManiac_5
BattleFrontier_OutsideWest_EventScript_IVManiac_4:
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_8
BattleFrontier_OutsideWest_EventScript_IVManiac_7:
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_3, MSGBOX_DEFAULT
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_HP, STAT_HP
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Attack, STAT_ATK
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Defense, STAT_DEF
# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_SpAtk, STAT_SPATK
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_SpDef, STAT_SPDEF
# 321 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Speed, STAT_SPEED
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, STAT_HP, DYN_MULTICHOICE_CB_NONE
# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_11
BattleFrontier_OutsideWest_EventScript_IVManiac_10:
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonIv
# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_3
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_4, MSGBOX_DEFAULT
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue
	return

BattleFrontier_OutsideWest_EventScript_IVManiac_2:
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_0, MSGBOX_DEFAULT
# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_1

BattleFrontier_OutsideWest_EventScript_IVManiac_5:
# 306 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_4

BattleFrontier_OutsideWest_EventScript_IVManiac_8:
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_2, MSGBOX_DEFAULT
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_7

BattleFrontier_OutsideWest_EventScript_IVManiac_11:
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_10


BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue::
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_4, 0
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_2:
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, 32
	goto_if_lt BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_3
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE
# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_6
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_5:
# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_9
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_8:
# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_1, MSGBOX_YESNO
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_12
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_11:
# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8006, VAR_TEMP_4
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonIv
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_2, MSGBOX_DEFAULT
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_3:
# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Number, VAR_TEMP_4
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_2

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_6:
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_5

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_9:
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_0, MSGBOX_DEFAULT
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_8

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_12:
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_11


BattleFrontier_OutsideWest_EventScript_IVManiacDecline::
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_NatureManiacDecline::
# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline::
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline_Text_0, MSGBOX_DEFAULT
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_MoveRelearner::
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_MoveRelearner_2
BattleFrontier_OutsideWest_EventScript_MoveRelearner_1:
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_1, MSGBOX_DEFAULT
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	return

BattleFrontier_OutsideWest_EventScript_MoveRelearner_2:
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_0, MSGBOX_DEFAULT
# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearner_1


BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon::
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_0, MSGBOX_DEFAULT
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setmoverelearnerstate MOVE_RELEARNER_ALL
# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_2
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_1:
# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special IsSelectedMonEgg
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_5
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_4:
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special Special_HasMoveToRelearn
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_8
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_7:
# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_3, MSGBOX_DEFAULT
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TeachMoveRelearnerMove
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_11
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_10:
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_4, MSGBOX_DEFAULT
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_2:
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_1

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_5:
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_1, MSGBOX_DEFAULT
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_4

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_8:
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_2, MSGBOX_DEFAULT
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_7

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_11:
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_10


BattleFrontier_OutsideWest_EventScript_friendship::
# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_friendship_2
BattleFrontier_OutsideWest_EventScript_friendship_1:
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_1, MSGBOX_DEFAULT
# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_friendship_5
BattleFrontier_OutsideWest_EventScript_friendship_4:
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_friendship_8
BattleFrontier_OutsideWest_EventScript_friendship_7:
# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose
	return

BattleFrontier_OutsideWest_EventScript_friendship_2:
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_0, MSGBOX_DEFAULT
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_1

BattleFrontier_OutsideWest_EventScript_friendship_5:
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_4

BattleFrontier_OutsideWest_EventScript_friendship_8:
# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_2, MSGBOX_DEFAULT
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_7


BattleFrontier_OutsideWest_EventScript_FriendshipChoose::
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_0, MSGBOX_DEFAULT
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush Friendship_Text_Highest, MAX_FRIENDSHIP
# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush Friendship_Text_Lowest, 0
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, MAX_FRIENDSHIP, DYN_MULTICHOICE_CB_NONE
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_2
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_1:
# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonFriendship
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_5
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_4:
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_2, MSGBOX_YESNO
# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_8
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_7:
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonFriendship
# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_3, MSGBOX_DEFAULT
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_2:
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_1

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_5:
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_1, MSGBOX_DEFAULT
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_4

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_8:
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_7


BattleFrontier_OutsideWest_EventScript_Ability::
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_Ability_2
BattleFrontier_OutsideWest_EventScript_Ability_1:
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_1, MSGBOX_DEFAULT
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_Ability_5
BattleFrontier_OutsideWest_EventScript_Ability_4:
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_8
BattleFrontier_OutsideWest_EventScript_Ability_7:
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, BufferMonOtherAbilities
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_11
BattleFrontier_OutsideWest_EventScript_Ability_10:
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_4, MSGBOX_DEFAULT
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_14
BattleFrontier_OutsideWest_EventScript_Ability_13:
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_5, MSGBOX_YESNO
# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_17
BattleFrontier_OutsideWest_EventScript_Ability_16:
# 529 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetAbility
# 531 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 532 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 533 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 535 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_6, MSGBOX_DEFAULT
# 536 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_Ability_2:
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_0, MSGBOX_DEFAULT
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_1

BattleFrontier_OutsideWest_EventScript_Ability_5:
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_4

BattleFrontier_OutsideWest_EventScript_Ability_8:
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_2, MSGBOX_DEFAULT
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_7

BattleFrontier_OutsideWest_EventScript_Ability_11:
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_3, MSGBOX_DEFAULT
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_10

BattleFrontier_OutsideWest_EventScript_Ability_14:
# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_13

BattleFrontier_OutsideWest_EventScript_Ability_17:
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_16


BattleFrontier_OutsideWest_EventScript_AbilityDecline::
# 540 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_FriendshipDecline::
# 544 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline::
# 548 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


# 577 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 578 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 579 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 580 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 581 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 582 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 583 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 584 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 585 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 586 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 587 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 588 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 589 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 590 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 591 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 592 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 593 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 594 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 595 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 596 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 597 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 598 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 599 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 600 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 601 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 602 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 603 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 604 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 605 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 606 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 607 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 608 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 609 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 610 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 611 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 612 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 613 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 614 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 615 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 616 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 617 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 618 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 619 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 620 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 621 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 622 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 623 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 624 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 625 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 626 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 627 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 628 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 629 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 630 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 631 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 632 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 633 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 634 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 635 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 636 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 637 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 638 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 639 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 640 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 641 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 642 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 643 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 644 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 645 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 646 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 647 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 648 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 649 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 650 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 651 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 652 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 653 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 654 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 655 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 656 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 657 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 658 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 659 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 660 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 661 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 662 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 663 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 664 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 665 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 666 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 667 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 668 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 669 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 670 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 671 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 672 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 673 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 674 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 675 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 676 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 677 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 678 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 679 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 680 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 681 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 682 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 683 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 684 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 685 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 686 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 687 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 688 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 689 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 690 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 691 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 692 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 693 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 694 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 695 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 696 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 697 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 698 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 699 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 700 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 701 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 702 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 703 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 704 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 705 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 706 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 707 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 708 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 709 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 710 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 711 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 712 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 713 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 714 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 715 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 716 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 717 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 718 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 719 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 720 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 721 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 722 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 723 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 724 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 725 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 726 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 727 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 728 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 729 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 730 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 731 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 732 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 733 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 734 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 735 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 736 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 737 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 738 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 739 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 740 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 741 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 742 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 743 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 744 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 745 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 746 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 747 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 748 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 749 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 750 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 751 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 752 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 753 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 754 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 755 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 756 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 757 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 758 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 759 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 760 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 761 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 762 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 763 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 764 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 765 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 766 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 767 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 768 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 769 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 770 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 771 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 772 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 773 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 774 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 775 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 776 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 777 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 778 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 779 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 780 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 781 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 782 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 783 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 784 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 785 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 786 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 787 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 788 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 789 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 790 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 791 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 792 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 793 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 794 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 795 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 796 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 797 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 798 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 799 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 800 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 801 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 802 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 803 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 804 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 805 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 806 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 807 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 808 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 809 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 810 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 811 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 812 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 813 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 814 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 815 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 816 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 817 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 818 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 819 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 820 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 821 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 822 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 823 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 824 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 825 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 826 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 827 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 828 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 829 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 830 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 831 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 832 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 833 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 834 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 835 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 836 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 837 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 838 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 839 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 840 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 841 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 842 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 843 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 844 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 845 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 846 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 847 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 848 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 849 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 850 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 851 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 852 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 853 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 854 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 855 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 856 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 857 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 858 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 859 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 860 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 861 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 862 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 863 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 864 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 865 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 866 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 867 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 868 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 869 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 870 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 871 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 872 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 873 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 874 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 875 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 876 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 877 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 878 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 879 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
# 880 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Your path to the invincible superstar!$"
# 881 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 882 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 883 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
# 884 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Seek out the toughest POKéMON!$"
# 885 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 886 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 887 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
# 888 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Choose one of three paths!$"
# 889 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 890 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 891 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
# 892 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "TRAINERS bring their best-raised\n"
# 893 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON for elimination-style matches.$"
# 894 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 895 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 896 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 897 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "May I see your TICKET?$"
# 898 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 899 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 900 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 901 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm terribly sorry.\p"
# 902 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You must have a TICKET to board\n"
# 903 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the ferry.$"
# 904 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 905 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 906 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 907 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 908 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And where would you like to go?$"
# 909 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 910 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 911 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 912 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 913 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 914 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 915 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 916 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 917 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"
# 918 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 919 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 920 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 921 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "departure.$"
# 922 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 923 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 924 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"
# 925 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 926 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 927 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
# 928 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But here…\l"
# 929 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've been useless!$"
# 930 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 931 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 932 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
# 933 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "but I can't find it even though I have\l"
# 934 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a map of the BATTLE FRONTIER.\p"
# 935 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This place is just too big!$"
# 936 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 937 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 938 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
# 939 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "as I arrived here.\p"
# 940 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But on the way, I got seasick…\n"
# 941 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Urrrrp…$"
# 942 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 943 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 944 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
# 945 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "here, you know?\p"
# 946 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Only those TRAINERS who've been\n"
# 947 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "recognized as tough are brought here.\p"
# 948 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's why many TRAINERS don't even\n"
# 949 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "know about the BATTLE FRONTIER.$"
# 950 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 951 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 952 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
# 953 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Are you sure we can make challenges\n"
# 954 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "even if we don't have any POKéMON?$"
# 955 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 956 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 957 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
# 958 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure it'll be okay.\p"
# 959 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I think…\p"
# 960 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But remember that big scary guy?\n"
# 961 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He said, “I'll lend you POKéMON!”$"
# 962 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 963 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 964 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
# 965 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You can rent strong POKéMON there.\p"
# 966 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But it makes me wonder.\n"
# 967 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Who's raising those rental POKéMON?$"
# 968 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 969 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 970 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
# 971 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "PIKE because of SEVIPER…\p"
# 972 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "B-but I came all the way here, so I will\n"
# 973 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "try to conquer everything!\l"
# 974 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "…Shudder…$"
# 975 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 976 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 977 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
# 978 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "One, two, three!\p"
# 979 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 980 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 981 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 982 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
# 983 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I will take the BATTLE PIKE challenge!$"
# 984 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 985 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 986 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 987 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I lost.\p"
# 988 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I guess I'm not very lucky today.\n"
# 989 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll put off my BATTLE PIKE challenge\l"
# 990 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "until tomorrow.$"
# 991 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 992 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 993 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
# 994 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "for some unknown reason, would choose\l"
# 995 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "fishing over battling.\p"
# 996 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? You can't catch anything here?\n"
# 997 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's disappointing…$"
# 998 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 999 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 1000 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
# 1001 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "matter what, until I get a Symbol.$"
# 1002 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1003 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 1004 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
# 1005 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the BATTLE DOME?\p"
# 1006 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll wish you the best of luck.\n"
# 1007 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let us both win our way up and meet\l"
# 1008 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in challenges.$"
# 1009 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1010 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 1011 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
# 1012 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The BATTLE DOME is here!\l"
# 1013 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Go get 'em, Grandpa!$"
# 1014 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1015 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 1016 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
# 1017 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I won't let GENTLEMEN beat me!\p"
# 1018 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But where is the entrance?$"
# 1019 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1020 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 1021 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
# 1022 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "that long ago.\p"
# 1023 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But, now look at this place! Amazing!\n"
# 1024 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll bring my mother out to see this.$"
# 1025 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1026 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 1027 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
# 1028 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "FRONTIER!\p"
# 1029 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure to grab attention with\n"
# 1030 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "my looks and ability!$"
# 1031 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1032 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 1033 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
# 1034 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It looks like this square's filled with\n"
# 1035 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tough people.\p"
# 1036 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…$"
# 1037 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1038 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 1039 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 1040 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A while back, I met this older girl\n"
# 1041 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "at the BATTLE PIKE.\p"
# 1042 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She had these eyes that were scary\n"
# 1043 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in a real ornery way.\p"
# 1044 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 1045 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She got all furious: “Will you quit\n"
# 1046 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eating!” Then she whaled on me.\p"
# 1047 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It was a hair-raising kind of\n"
# 1048 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "scary experience, sure enough.\p"
# 1049 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…$"
# 1050 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1051 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 1052 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
# 1053 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's nothing!\p"
# 1054 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Why, the last time I cheered for him,\n"
# 1055 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "our eyes met and sparks flew!$"
# 1056 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1057 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 1058 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
# 1059 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pfft!\p"
# 1060 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That only happened because\n"
# 1061 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I happened to be sitting next to you!\p"
# 1062 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE only looked our way\n"
# 1063 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "because my cheering was so loud!$"
# 1064 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1065 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 1066 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
# 1067 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Keep that racket down!\p"
# 1068 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You fair-weather fans should stick\n"
# 1069 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to cheering for some GYM LEADER!\p"
# 1070 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE is mine!\n"
# 1071 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The only idol for me!$"
# 1072 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1073 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 1074 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
# 1075 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's hard to believe, but they once\n"
# 1076 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "were TRAINERS, and good ones, too.\p"
# 1077 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They used to be incredibly tough,\n"
# 1078 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "and they were famous, too.\p"
# 1079 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But they were obliterated by this\n"
# 1080 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "certain TRAINER at a tournament.\p"
# 1081 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They were so thoroughly whipped,\n"
# 1082 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "they became smitten by the TRAINER.\p"
# 1083 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Now they're just fans of the TRAINER.\n"
# 1084 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They go cheer for their idol at the\l"
# 1085 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "BATTLE DOME every day now.$"
# 1086 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 1087 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 1088 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
# 1089 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a POKéMON with an unusually long tail\l"
# 1090 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "somewhere in the BATTLE FRONTIER.\p"
# 1091 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It must be adorable. I'm sure of it…\p"
# 1092 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, challenges can wait. I feel driven\n"
# 1093 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to find the delightful creature!$"

BattleFrontier_OutsideWest_EventScript_ServiceNerd_Text_0:
# 9 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hiya! I'm the MIN-MAXER! Natures,\n"
	.string "potential, abilities, moves,\l"
	.string "friendship--if your POKéMON has a stat,\l"
	.string "I can tweak it!\p"
	.string "The other guys who worked here?\n"
	.string "Obsolete. I automated them away!$"

BattleFrontier_OutsideWest_EventScript_ServiceMenu_Text_0:
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "So! What are we optimizing today?$"

BattleFrontier_OutsideWest_EventScript_EVEdit_Text_0:
# 59 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Precision training costs 2 Battle\n"
	.string "Points per stat, and you're short!$"

BattleFrontier_OutsideWest_EventScript_EVEdit_Text_1:
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Precision training--2 Battle Points per\n"
	.string "stat, punched in digit by digit! Which\l"
	.string "POKéMON are we retraining?$"

BattleFrontier_OutsideWest_EventScript_EVEdit_Text_2:
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG hasn't trained a day in its life!$"

BattleFrontier_OutsideWest_EventScript_EVEdit_Text_3:
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which stat should we retrain?$"

BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_0:
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That stat is at {STR_VAR_1} EVs\n"
	.string "right now. Punch in the new value!\l"
	.string "Hundreds digit first.$"

BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_1:
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Tens digit!$"

BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_2:
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ones digit!$"

BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_3:
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A single stat maxes out at 252 EVs! I'll\n"
	.string "call it 252.$"

BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_4:
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A POKéMON can only hold 510 EVs of\n"
	.string "training in total! The most that stat\l"
	.string "can take is {STR_VAR_1}, so I'll use\l"
	.string "that.$"

BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_5:
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's EXACTLY what it's at now! I can't\n"
	.string "take your Battle Points for a no-op!\l"
	.string "Punch in a different number.$"

BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_6:
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1} EVs it is! That'll be 2\n"
	.string "Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_EVEditDigits_Text_7:
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Recalibrated! That's what I call\n"
	.string "efficient allocation!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_0:
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Wiping training data costs 2 Battle\n"
	.string "Points, and you're short!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_1:
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A clean slate! Which POKéMON's training\n"
	.string "should I erase?$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_2:
# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That POKéMON is ALREADY a blank slate!\n"
	.string "I can't take your Battle Points to\l"
	.string "erase nothing!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_3:
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's carrying {STR_VAR_1} EVs of\n"
	.string "training. Wipe it all for 2 Battle\l"
	.string "Points?$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_4:
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Scrubbed to zero! It's ready for a whole\n"
	.string "new training regimen!$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_0:
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, but... You don't have enough Battle\n"
	.string "Points! A new nature costs 5.$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_1:
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A whole new personality, coming up!\n"
	.string "Which POKéMON should I work on?$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_2:
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's an EGG! Who knows what's even in\n"
	.string "there? I can't work with that!$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_3:
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And which nature would you like?$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_0:
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hold on! That's the nature your POKéMON\n"
	.string "already has! I can't take your Battle\l"
	.string "Points for doing nothing. Pick a\l"
	.string "different one!$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_1:
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Excellent choice! That'll be 5 Battle\n"
	.string "Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_2:
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "...And done! Your POKéMON has a whole\n"
	.string "new outlook on life!$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_0:
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "No Battle Points, no potential!\n"
	.string "Rewriting a stat costs 2.$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_1:
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I can see a POKéMON's hidden\n"
	.string "potential--any stat, any value! Which\l"
	.string "POKéMON shall we tinker with?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_2:
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG's potential is still a mystery,\n"
	.string "even to me!$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_3:
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which stat should I rewrite?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_4:
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... That stat's potential is\n"
	.string "{STR_VAR_1} right now. What should\l"
	.string "it become?$"

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_0:
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's ALREADY that stat's potential! I\n"
	.string "can't take your Battle Points to\l"
	.string "rewrite what's already written! Pick a\l"
	.string "different number.$"

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_1:
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1}, is it? That'll be 2\n"
	.string "Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_2:
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It is done! Your POKéMON will never be\n"
	.string "the same!$"

BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline_Text_0:
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Suboptimal choice, but sure. Come back\n"
	.string "when something needs tweaking!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_0:
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hmm... You're short on Battle Points. A\n"
	.string "move is 2 apiece!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_1:
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I know every move a POKéMON can\n"
	.string "learn--level-up, egg AND tutor\l"
	.string "moves--for 2 Battle Points apiece!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_0:
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_1:
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG doesn't know any moves! Pick\n"
	.string "another POKéMON.$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_2:
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sorry, I don't have any move I can teach\n"
	.string "that POKéMON.$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_3:
# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which move should I teach? Press LEFT\n"
	.string "or RIGHT in the list to flip between\l"
	.string "level-up, egg and tutor moves!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_4:
# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's 2 Battle Points, thank you!$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_0:
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Aww... You don't have enough Battle\n"
	.string "Points. Meddling with hearts costs 2!$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_1:
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON hearts are putty in my\n"
	.string "hands--adoration or despair, 2 Battle\l"
	.string "Points! Which POKéMON's heart shall I\l"
	.string "meddle with?$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_2:
# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG can't love anyone yet! Silly!$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_0:
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Shall I fill its heart with love, or drain\n"
	.string "it dry?$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_1:
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Its friendship is ALREADY there! I\n"
	.string "can't take your Battle Points for that!$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_2:
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That'll be 2 Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_3:
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It is done! Your POKéMON will never feel\n"
	.string "the same about you again!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_0:
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sorry, friend. A new ability is 5 Battle\n"
	.string "Points!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_1:
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Every POKéMON has untapped\n"
	.string "talents--even hidden ones, if it has\l"
	.string "them in it! Which POKéMON should I work\l"
	.string "with?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_2:
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG's talents haven't even hatched\n"
	.string "yet!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_3:
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hmm... {STR_VAR_1} is the only ability\n"
	.string "that POKéMON can ever have. There's\l"
	.string "nothing for me to do!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_4:
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Right now its ability is {STR_VAR_1}.\n"
	.string "Which ability should I bring out?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_5:
# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Good choice! That'll be 5 Battle Points.\n"
	.string "Ready?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_6:
# 535 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There! Your POKéMON's new talent is\n"
	.string "shining through!$"

ServiceNerd_Text_Nature::
# 43 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Nature (5BP)$"

ServiceNerd_Text_IVs::
# 44 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "IVs (2BP)$"

ServiceNerd_Text_Ability::
# 45 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ability (5BP)$"

ServiceNerd_Text_Moves::
# 46 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Moves (2BP)$"

ServiceNerd_Text_Friendship::
# 47 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Friendship (2BP)$"

ServiceNerd_Text_EVEdit::
# 48 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "EV edit (2BP)$"

ServiceNerd_Text_EVReset::
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "EV reset (2BP)$"

ServiceNerd_Text_Done::
# 50 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's all$"

IVManiac_Text_HP::
# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "HP$"

IVManiac_Text_Attack::
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Attack$"

IVManiac_Text_Defense::
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Defense$"

IVManiac_Text_SpAtk::
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sp. Atk$"

IVManiac_Text_SpDef::
# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sp. Def$"

IVManiac_Text_Speed::
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Speed$"

IVManiac_Text_Number::
# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1}$"

Friendship_Text_Highest::
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Highest$"

Friendship_Text_Lowest::
# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lowest$"

NatureManiac_Text_Hardy::
# 551 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hardy$"

NatureManiac_Text_Lonely::
# 552 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lonely$"

NatureManiac_Text_Brave::
# 553 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Brave$"

NatureManiac_Text_Adamant::
# 554 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Adamant$"

NatureManiac_Text_Naughty::
# 555 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naughty$"

NatureManiac_Text_Bold::
# 556 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bold$"

NatureManiac_Text_Docile::
# 557 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Docile$"

NatureManiac_Text_Relaxed::
# 558 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Relaxed$"

NatureManiac_Text_Impish::
# 559 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Impish$"

NatureManiac_Text_Lax::
# 560 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lax$"

NatureManiac_Text_Timid::
# 561 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Timid$"

NatureManiac_Text_Hasty::
# 562 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hasty$"

NatureManiac_Text_Serious::
# 563 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Serious$"

NatureManiac_Text_Jolly::
# 564 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Jolly$"

NatureManiac_Text_Naive::
# 565 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naive$"

NatureManiac_Text_Modest::
# 566 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Modest$"

NatureManiac_Text_Mild::
# 567 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mild$"

NatureManiac_Text_Quiet::
# 568 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quiet$"

NatureManiac_Text_Bashful::
# 569 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bashful$"

NatureManiac_Text_Rash::
# 570 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Rash$"

NatureManiac_Text_Calm::
# 571 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Calm$"

NatureManiac_Text_Gentle::
# 572 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Gentle$"

NatureManiac_Text_Sassy::
# 573 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sassy$"

NatureManiac_Text_Careful::
# 574 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Careful$"

NatureManiac_Text_Quirky::
# 575 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quirky$"
