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
	dynmultipush ServiceNerd_Text_EVReset, 5
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Done, 6
# 22 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_ServiceMenu_3
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_ServiceMenu_4
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_ServiceMenu_5
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 3, BattleFrontier_OutsideWest_EventScript_ServiceMenu_6
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 4, BattleFrontier_OutsideWest_EventScript_ServiceMenu_7
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 5, BattleFrontier_OutsideWest_EventScript_ServiceMenu_8
BattleFrontier_OutsideWest_EventScript_ServiceMenu_1:
# 37 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline
	return

BattleFrontier_OutsideWest_EventScript_ServiceMenu_3:
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureService
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_4:
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiac
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_5:
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Ability
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_6:
# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearner
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_7:
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_friendship
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_8:
# 35 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_EVReset
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1


BattleFrontier_OutsideWest_EventScript_EVReset::
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 50 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_EVReset_2
BattleFrontier_OutsideWest_EventScript_EVReset_1:
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_EVReset_5
BattleFrontier_OutsideWest_EventScript_EVReset_4:
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_8
BattleFrontier_OutsideWest_EventScript_EVReset_7:
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonEvTotal
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_11
BattleFrontier_OutsideWest_EventScript_EVReset_10:
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_3
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_4, MSGBOX_YESNO
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_14
BattleFrontier_OutsideWest_EventScript_EVReset_13:
# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ResetMonEvs
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_5, MSGBOX_DEFAULT
# 85 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_EVReset_2:
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_1

BattleFrontier_OutsideWest_EventScript_EVReset_5:
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_4

BattleFrontier_OutsideWest_EventScript_EVReset_8:
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_2, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_7

BattleFrontier_OutsideWest_EventScript_EVReset_11:
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_3, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_10

BattleFrontier_OutsideWest_EventScript_EVReset_14:
# 76 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_13


BattleFrontier_OutsideWest_EventScript_NatureService::
# 89 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 90 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_NatureService_2
BattleFrontier_OutsideWest_EventScript_NatureService_1:
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_1, MSGBOX_DEFAULT
# 96 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_NatureService_5
BattleFrontier_OutsideWest_EventScript_NatureService_4:
# 101 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureService_8
BattleFrontier_OutsideWest_EventScript_NatureService_7:
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetHiddenNature
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_3, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature
	return

BattleFrontier_OutsideWest_EventScript_NatureService_2:
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_0, MSGBOX_DEFAULT
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_1

BattleFrontier_OutsideWest_EventScript_NatureService_5:
# 98 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_4

BattleFrontier_OutsideWest_EventScript_NatureService_8:
# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_2, MSGBOX_DEFAULT
# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_7


BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature::
# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE, NatureManiac_Text_Hardy, NatureManiac_Text_Lonely, NatureManiac_Text_Brave, NatureManiac_Text_Adamant, NatureManiac_Text_Naughty, NatureManiac_Text_Bold, NatureManiac_Text_Docile, NatureManiac_Text_Relaxed, NatureManiac_Text_Impish, NatureManiac_Text_Lax, NatureManiac_Text_Timid, NatureManiac_Text_Hasty, NatureManiac_Text_Serious, NatureManiac_Text_Jolly, NatureManiac_Text_Naive, NatureManiac_Text_Modest, NatureManiac_Text_Mild, NatureManiac_Text_Quiet, NatureManiac_Text_Bashful, NatureManiac_Text_Rash, NatureManiac_Text_Calm, NatureManiac_Text_Gentle, NatureManiac_Text_Sassy, NatureManiac_Text_Careful, NatureManiac_Text_Quirky
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_2
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_1:
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_5
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_4:
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_1, MSGBOX_YESNO
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_8
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_7:
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetHiddenNature
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_2, MSGBOX_DEFAULT
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_2:
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_1

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_5:
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_0, MSGBOX_DEFAULT
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_4

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_8:
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_7


BattleFrontier_OutsideWest_EventScript_IVManiac::
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_IVManiac_2
BattleFrontier_OutsideWest_EventScript_IVManiac_1:
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_1, MSGBOX_DEFAULT
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_IVManiac_5
BattleFrontier_OutsideWest_EventScript_IVManiac_4:
# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_8
BattleFrontier_OutsideWest_EventScript_IVManiac_7:
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_3, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_HP, STAT_HP
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Attack, STAT_ATK
# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Defense, STAT_DEF
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_SpAtk, STAT_SPATK
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_SpDef, STAT_SPDEF
# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Speed, STAT_SPEED
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, STAT_HP, DYN_MULTICHOICE_CB_NONE
# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiac_11
BattleFrontier_OutsideWest_EventScript_IVManiac_10:
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 197 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonIv
# 198 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_3
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_4, MSGBOX_DEFAULT
# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue
	return

BattleFrontier_OutsideWest_EventScript_IVManiac_2:
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_0, MSGBOX_DEFAULT
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_1

BattleFrontier_OutsideWest_EventScript_IVManiac_5:
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_4

BattleFrontier_OutsideWest_EventScript_IVManiac_8:
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiac_Text_2, MSGBOX_DEFAULT
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_7

BattleFrontier_OutsideWest_EventScript_IVManiac_11:
# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiac_10


BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue::
# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_4, 0
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_2:
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, 32
	goto_if_lt BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_3
# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE
# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_6
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_5:
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_9
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_8:
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_1, MSGBOX_YESNO
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_12
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_11:
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8006, VAR_TEMP_4
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonIv
# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_2, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_3:
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Number, VAR_TEMP_4
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_2

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_6:
# 212 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_5

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_9:
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_0, MSGBOX_DEFAULT
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_8

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_12:
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_11


BattleFrontier_OutsideWest_EventScript_IVManiacDecline::
# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_NatureManiacDecline::
# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline::
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline_Text_0, MSGBOX_DEFAULT
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_MoveRelearner::
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_MoveRelearner_2
BattleFrontier_OutsideWest_EventScript_MoveRelearner_1:
# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_1, MSGBOX_DEFAULT
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush FrontierTutor_Text_LevelUpMoves, MOVE_RELEARNER_LEVEL_UP_MOVES
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush FrontierTutor_Text_EggMoves, MOVE_RELEARNER_EGG_MOVES
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush FrontierTutor_Text_TutorMoves, MOVE_RELEARNER_TUTOR_MOVES
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, MOVE_RELEARNER_LEVEL_UP_MOVES, DYN_MULTICHOICE_CB_NONE
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearner_5
BattleFrontier_OutsideWest_EventScript_MoveRelearner_4:
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	return

BattleFrontier_OutsideWest_EventScript_MoveRelearner_2:
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_0, MSGBOX_DEFAULT
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearner_1

BattleFrontier_OutsideWest_EventScript_MoveRelearner_5:
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearner_4


BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon::
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_0, MSGBOX_DEFAULT
# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setmoverelearnerstate VAR_TEMP_2
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_2
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_1:
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special IsSelectedMonEgg
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_5
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_4:
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special Special_HasMoveToRelearn
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_8
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_7:
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_3, MSGBOX_DEFAULT
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TeachMoveRelearnerMove
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_11
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_10:
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_4, MSGBOX_DEFAULT
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_2:
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_1

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_5:
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_1, MSGBOX_DEFAULT
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_4

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_8:
# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_2, MSGBOX_DEFAULT
# 301 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_7

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_11:
# 306 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_10


BattleFrontier_OutsideWest_EventScript_friendship::
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_friendship_2
BattleFrontier_OutsideWest_EventScript_friendship_1:
# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_1, MSGBOX_DEFAULT
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_friendship_5
BattleFrontier_OutsideWest_EventScript_friendship_4:
# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_friendship_8
BattleFrontier_OutsideWest_EventScript_friendship_7:
# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose
	return

BattleFrontier_OutsideWest_EventScript_friendship_2:
# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_0, MSGBOX_DEFAULT
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_1

BattleFrontier_OutsideWest_EventScript_friendship_5:
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_4

BattleFrontier_OutsideWest_EventScript_friendship_8:
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_2, MSGBOX_DEFAULT
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_7


BattleFrontier_OutsideWest_EventScript_FriendshipChoose::
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_0, MSGBOX_DEFAULT
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush Friendship_Text_Highest, MAX_FRIENDSHIP
# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush Friendship_Text_Lowest, 0
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, MAX_FRIENDSHIP, DYN_MULTICHOICE_CB_NONE
# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_2
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_1:
# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonFriendship
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_5
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_4:
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_2, MSGBOX_YESNO
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_8
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_7:
# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonFriendship
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_3, MSGBOX_DEFAULT
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_2:
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_1

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_5:
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_1, MSGBOX_DEFAULT
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_4

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_8:
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_7


BattleFrontier_OutsideWest_EventScript_Ability::
# 370 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_Ability_2
BattleFrontier_OutsideWest_EventScript_Ability_1:
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_1, MSGBOX_DEFAULT
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_Ability_5
BattleFrontier_OutsideWest_EventScript_Ability_4:
# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_8
BattleFrontier_OutsideWest_EventScript_Ability_7:
# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, BufferMonOtherAbilities
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_11
BattleFrontier_OutsideWest_EventScript_Ability_10:
# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_4, MSGBOX_DEFAULT
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_14
BattleFrontier_OutsideWest_EventScript_Ability_13:
# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_5, MSGBOX_YESNO
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_17
BattleFrontier_OutsideWest_EventScript_Ability_16:
# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetAbility
# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_6, MSGBOX_DEFAULT
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_Ability_2:
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_0, MSGBOX_DEFAULT
# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_1

BattleFrontier_OutsideWest_EventScript_Ability_5:
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_4

BattleFrontier_OutsideWest_EventScript_Ability_8:
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_2, MSGBOX_DEFAULT
# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_7

BattleFrontier_OutsideWest_EventScript_Ability_11:
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_3, MSGBOX_DEFAULT
# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_10

BattleFrontier_OutsideWest_EventScript_Ability_14:
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_13

BattleFrontier_OutsideWest_EventScript_Ability_17:
# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_16


BattleFrontier_OutsideWest_EventScript_AbilityDecline::
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_FriendshipDecline::
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline::
# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 523 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 527 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 528 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 529 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 531 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 532 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 533 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 535 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 536 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 537 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 538 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 539 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 540 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 541 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 542 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 543 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 544 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 545 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 546 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 547 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 548 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 549 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 550 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 551 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 552 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 553 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 554 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 555 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 556 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 557 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 558 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 559 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 560 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 561 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 562 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 563 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 564 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 565 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 566 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 567 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 568 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 569 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 570 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 571 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 572 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 573 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 574 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 575 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 576 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 577 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 578 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 579 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 580 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 581 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 582 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 583 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 584 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 585 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 586 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 587 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 588 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 589 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 590 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 591 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 592 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 593 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 594 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 595 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 596 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 597 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 598 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 599 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 600 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 601 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 602 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 603 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 604 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 605 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 606 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 607 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 608 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 609 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 610 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 611 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 612 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 613 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 614 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 615 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 616 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 617 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 618 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 619 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 620 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 621 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 622 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 623 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 624 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 625 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 626 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 627 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 628 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 629 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 630 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 631 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 632 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 633 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 634 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 635 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 636 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 637 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 638 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 639 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 640 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 641 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 642 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 643 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 644 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 645 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 646 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 647 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 648 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 649 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 650 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 651 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 652 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 653 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 654 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 655 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 656 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 657 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 658 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 659 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 660 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 661 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 662 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 663 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 664 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 665 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 666 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 667 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 668 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 669 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 670 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 671 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 672 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 673 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 674 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 675 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 676 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 677 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 678 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 679 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 680 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 681 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 682 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 683 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 684 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 685 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 686 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 687 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 688 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 689 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 690 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 691 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 692 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 693 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 694 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 695 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 696 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 697 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 698 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 699 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 700 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 701 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 702 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 703 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 704 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 705 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 706 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 707 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 708 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 709 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 710 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 711 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 712 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 713 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 714 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 715 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 716 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 717 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 718 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 719 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 720 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 721 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 722 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 723 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 724 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 725 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 726 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 727 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 728 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 729 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 730 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 731 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 732 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 733 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 734 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 735 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 736 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 737 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 738 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 739 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 740 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 741 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 742 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 743 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 744 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 745 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 746 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 747 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 748 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 749 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 750 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 751 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 752 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 753 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 754 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 755 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 756 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
# 757 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Your path to the invincible superstar!$"
# 758 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 759 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 760 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
# 761 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Seek out the toughest POKéMON!$"
# 762 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 763 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 764 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
# 765 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Choose one of three paths!$"
# 766 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 767 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 768 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
# 769 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "TRAINERS bring their best-raised\n"
# 770 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON for elimination-style matches.$"
# 771 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 772 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 773 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 774 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "May I see your TICKET?$"
# 775 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 776 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 777 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 778 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm terribly sorry.\p"
# 779 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You must have a TICKET to board\n"
# 780 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the ferry.$"
# 781 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 782 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 783 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 784 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 785 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And where would you like to go?$"
# 786 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 787 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 788 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 789 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 790 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 791 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 792 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 793 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 794 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"
# 795 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 796 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 797 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 798 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "departure.$"
# 799 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 800 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 801 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"
# 802 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 803 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 804 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
# 805 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But here…\l"
# 806 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've been useless!$"
# 807 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 808 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 809 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
# 810 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "but I can't find it even though I have\l"
# 811 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a map of the BATTLE FRONTIER.\p"
# 812 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This place is just too big!$"
# 813 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 814 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 815 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
# 816 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "as I arrived here.\p"
# 817 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But on the way, I got seasick…\n"
# 818 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Urrrrp…$"
# 819 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 820 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 821 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
# 822 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "here, you know?\p"
# 823 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Only those TRAINERS who've been\n"
# 824 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "recognized as tough are brought here.\p"
# 825 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's why many TRAINERS don't even\n"
# 826 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "know about the BATTLE FRONTIER.$"
# 827 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 828 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 829 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
# 830 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Are you sure we can make challenges\n"
# 831 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "even if we don't have any POKéMON?$"
# 832 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 833 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 834 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
# 835 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure it'll be okay.\p"
# 836 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I think…\p"
# 837 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But remember that big scary guy?\n"
# 838 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He said, “I'll lend you POKéMON!”$"
# 839 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 840 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 841 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
# 842 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You can rent strong POKéMON there.\p"
# 843 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But it makes me wonder.\n"
# 844 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Who's raising those rental POKéMON?$"
# 845 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 846 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 847 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
# 848 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "PIKE because of SEVIPER…\p"
# 849 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "B-but I came all the way here, so I will\n"
# 850 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "try to conquer everything!\l"
# 851 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "…Shudder…$"
# 852 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 853 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 854 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
# 855 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "One, two, three!\p"
# 856 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 857 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 858 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 859 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
# 860 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I will take the BATTLE PIKE challenge!$"
# 861 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 862 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 863 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 864 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I lost.\p"
# 865 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I guess I'm not very lucky today.\n"
# 866 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll put off my BATTLE PIKE challenge\l"
# 867 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "until tomorrow.$"
# 868 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 869 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 870 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
# 871 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "for some unknown reason, would choose\l"
# 872 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "fishing over battling.\p"
# 873 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? You can't catch anything here?\n"
# 874 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's disappointing…$"
# 875 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 876 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 877 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
# 878 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "matter what, until I get a Symbol.$"
# 879 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 880 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 881 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
# 882 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the BATTLE DOME?\p"
# 883 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll wish you the best of luck.\n"
# 884 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let us both win our way up and meet\l"
# 885 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in challenges.$"
# 886 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 887 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 888 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
# 889 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The BATTLE DOME is here!\l"
# 890 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Go get 'em, Grandpa!$"
# 891 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 892 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 893 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
# 894 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I won't let GENTLEMEN beat me!\p"
# 895 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But where is the entrance?$"
# 896 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 897 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 898 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
# 899 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "that long ago.\p"
# 900 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But, now look at this place! Amazing!\n"
# 901 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll bring my mother out to see this.$"
# 902 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 903 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 904 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
# 905 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "FRONTIER!\p"
# 906 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure to grab attention with\n"
# 907 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "my looks and ability!$"
# 908 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 909 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 910 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
# 911 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It looks like this square's filled with\n"
# 912 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tough people.\p"
# 913 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…$"
# 914 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 915 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 916 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 917 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A while back, I met this older girl\n"
# 918 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "at the BATTLE PIKE.\p"
# 919 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She had these eyes that were scary\n"
# 920 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in a real ornery way.\p"
# 921 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 922 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She got all furious: “Will you quit\n"
# 923 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eating!” Then she whaled on me.\p"
# 924 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It was a hair-raising kind of\n"
# 925 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "scary experience, sure enough.\p"
# 926 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…$"
# 927 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 928 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 929 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
# 930 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's nothing!\p"
# 931 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Why, the last time I cheered for him,\n"
# 932 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "our eyes met and sparks flew!$"
# 933 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 934 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 935 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
# 936 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pfft!\p"
# 937 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That only happened because\n"
# 938 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I happened to be sitting next to you!\p"
# 939 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE only looked our way\n"
# 940 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "because my cheering was so loud!$"
# 941 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 942 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 943 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
# 944 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Keep that racket down!\p"
# 945 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You fair-weather fans should stick\n"
# 946 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to cheering for some GYM LEADER!\p"
# 947 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE is mine!\n"
# 948 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The only idol for me!$"
# 949 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 950 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 951 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
# 952 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's hard to believe, but they once\n"
# 953 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "were TRAINERS, and good ones, too.\p"
# 954 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They used to be incredibly tough,\n"
# 955 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "and they were famous, too.\p"
# 956 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But they were obliterated by this\n"
# 957 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "certain TRAINER at a tournament.\p"
# 958 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They were so thoroughly whipped,\n"
# 959 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "they became smitten by the TRAINER.\p"
# 960 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Now they're just fans of the TRAINER.\n"
# 961 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They go cheer for their idol at the\l"
# 962 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "BATTLE DOME every day now.$"
# 963 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 964 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 965 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
# 966 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a POKéMON with an unusually long tail\l"
# 967 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "somewhere in the BATTLE FRONTIER.\p"
# 968 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It must be adorable. I'm sure of it…\p"
# 969 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, challenges can wait. I feel driven\n"
# 970 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
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

BattleFrontier_OutsideWest_EventScript_EVReset_Text_0:
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Wiping training data costs 2 Battle\n"
	.string "Points, and you're short!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_1:
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A clean slate! Which POKéMON's training\n"
	.string "should I erase?$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_2:
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG hasn't trained a day in its life!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_3:
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That POKéMON is ALREADY a blank slate!\n"
	.string "I can't take your Battle Points to\l"
	.string "erase nothing!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_4:
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's carrying {STR_VAR_1} EVs of\n"
	.string "training. Wipe it all for 2 Battle\l"
	.string "Points?$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_5:
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Scrubbed to zero! It's ready for a whole\n"
	.string "new training regimen!$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_0:
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, but... You don't have enough Battle\n"
	.string "Points! A new nature costs 5.$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_1:
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A whole new personality, coming up!\n"
	.string "Which POKéMON should I work on?$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_2:
# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's an EGG! Who knows what's even in\n"
	.string "there? I can't work with that!$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_3:
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And which nature would you like?$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_0:
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hold on! That's the nature your POKéMON\n"
	.string "already has! I can't take your Battle\l"
	.string "Points for doing nothing. Pick a\l"
	.string "different one!$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_1:
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Excellent choice! That'll be 5 Battle\n"
	.string "Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_2:
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "...And done! Your POKéMON has a whole\n"
	.string "new outlook on life!$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_0:
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "No Battle Points, no potential!\n"
	.string "Rewriting a stat costs 5.$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_1:
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I can see a POKéMON's hidden\n"
	.string "potential--any stat, any value! Which\l"
	.string "POKéMON shall we tinker with?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_2:
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG's potential is still a mystery,\n"
	.string "even to me!$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_3:
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which stat should I rewrite?$"

BattleFrontier_OutsideWest_EventScript_IVManiac_Text_4:
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... That stat's potential is\n"
	.string "{STR_VAR_1} right now. What should\l"
	.string "it become?$"

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_0:
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's ALREADY that stat's potential! I\n"
	.string "can't take your Battle Points to\l"
	.string "rewrite what's already written! Pick a\l"
	.string "different number.$"

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_1:
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1}, is it? That'll be 5\n"
	.string "Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_2:
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It is done! Your POKéMON will never be\n"
	.string "the same!$"

BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline_Text_0:
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Suboptimal choice, but sure. Come back\n"
	.string "when something needs tweaking!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_0:
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hmm... You're short on Battle Points. A\n"
	.string "move is 2 apiece!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_1:
# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I know every move a POKéMON can\n"
	.string "learn--2 Battle Points per move. What\l"
	.string "kind of move should I teach?$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_0:
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_1:
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG doesn't know any moves! Pick\n"
	.string "another POKéMON.$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_2:
# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sorry, I don't have any move I can teach\n"
	.string "that POKéMON.$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_3:
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which move should I teach?$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_4:
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's 2 Battle Points, thank you!$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_0:
# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Aww... You don't have enough Battle\n"
	.string "Points. Meddling with hearts costs 2!$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_1:
# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON hearts are putty in my\n"
	.string "hands--adoration or despair, 2 Battle\l"
	.string "Points! Which POKéMON's heart shall I\l"
	.string "meddle with?$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_2:
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG can't love anyone yet! Silly!$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_0:
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Shall I fill its heart with love, or drain\n"
	.string "it dry?$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_1:
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Its friendship is ALREADY there! I\n"
	.string "can't take your Battle Points for that!$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_2:
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That'll be 2 Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_3:
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It is done! Your POKéMON will never feel\n"
	.string "the same about you again!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_0:
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sorry, friend. A new ability is 5 Battle\n"
	.string "Points!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_1:
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Every POKéMON has untapped\n"
	.string "talents--even hidden ones, if it has\l"
	.string "them in it! Which POKéMON should I work\l"
	.string "with?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_2:
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG's talents haven't even hatched\n"
	.string "yet!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_3:
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hmm... {STR_VAR_1} is the only ability\n"
	.string "that POKéMON can ever have. There's\l"
	.string "nothing for me to do!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_4:
# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Right now its ability is {STR_VAR_1}.\n"
	.string "Which ability should I bring out?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_5:
# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Good choice! That'll be 5 Battle Points.\n"
	.string "Ready?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_6:
# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There! Your POKéMON's new talent is\n"
	.string "shining through!$"

ServiceNerd_Text_Nature::
# 40 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Nature (5BP)$"

ServiceNerd_Text_IVs::
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "IVs (5BP)$"

ServiceNerd_Text_Ability::
# 42 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ability (5BP)$"

ServiceNerd_Text_Moves::
# 43 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Moves (2BP)$"

ServiceNerd_Text_Friendship::
# 44 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Friendship (2BP)$"

ServiceNerd_Text_EVReset::
# 45 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "EV reset (2BP)$"

ServiceNerd_Text_Done::
# 46 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's all$"

IVManiac_Text_HP::
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "HP$"

IVManiac_Text_Attack::
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Attack$"

IVManiac_Text_Defense::
# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Defense$"

IVManiac_Text_SpAtk::
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sp. Atk$"

IVManiac_Text_SpDef::
# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sp. Def$"

IVManiac_Text_Speed::
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Speed$"

IVManiac_Text_Number::
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1}$"

FrontierTutor_Text_LevelUpMoves::
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Level-up moves$"

FrontierTutor_Text_EggMoves::
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Egg moves$"

FrontierTutor_Text_TutorMoves::
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Tutor moves$"

Friendship_Text_Highest::
# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Highest$"

Friendship_Text_Lowest::
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lowest$"

NatureManiac_Text_Hardy::
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hardy$"

NatureManiac_Text_Lonely::
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lonely$"

NatureManiac_Text_Brave::
# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Brave$"

NatureManiac_Text_Adamant::
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Adamant$"

NatureManiac_Text_Naughty::
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naughty$"

NatureManiac_Text_Bold::
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bold$"

NatureManiac_Text_Docile::
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Docile$"

NatureManiac_Text_Relaxed::
# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Relaxed$"

NatureManiac_Text_Impish::
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Impish$"

NatureManiac_Text_Lax::
# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lax$"

NatureManiac_Text_Timid::
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Timid$"

NatureManiac_Text_Hasty::
# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hasty$"

NatureManiac_Text_Serious::
# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Serious$"

NatureManiac_Text_Jolly::
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Jolly$"

NatureManiac_Text_Naive::
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naive$"

NatureManiac_Text_Modest::
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Modest$"

NatureManiac_Text_Mild::
# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mild$"

NatureManiac_Text_Quiet::
# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quiet$"

NatureManiac_Text_Bashful::
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bashful$"

NatureManiac_Text_Rash::
# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Rash$"

NatureManiac_Text_Calm::
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Calm$"

NatureManiac_Text_Gentle::
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Gentle$"

NatureManiac_Text_Sassy::
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sassy$"

NatureManiac_Text_Careful::
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Careful$"

NatureManiac_Text_Quirky::
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quirky$"
