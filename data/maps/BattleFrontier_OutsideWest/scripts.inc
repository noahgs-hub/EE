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
	dynmultipush ServiceNerd_Text_Stats, 1
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
	goto BattleFrontier_OutsideWest_EventScript_StatEditor
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


BattleFrontier_OutsideWest_EventScript_StatEditor::
# 56 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_StatEditor_2
BattleFrontier_OutsideWest_EventScript_StatEditor_1:
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_StatEditor_Text_1, MSGBOX_DEFAULT
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_StatEditor_5
BattleFrontier_OutsideWest_EventScript_StatEditor_4:
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_0x8004
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_StatEditor_8
BattleFrontier_OutsideWest_EventScript_StatEditor_7:
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_StatEditor_Text_3, MSGBOX_YESNO
# 76 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_StatEditor_11
BattleFrontier_OutsideWest_EventScript_StatEditor_10:
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_2
# 85 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special OpenStatEditorFromScript
# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_StatEditor_Text_4, MSGBOX_DEFAULT
# 87 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_StatEditor_2:
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_StatEditor_Text_0, MSGBOX_DEFAULT
# 59 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_StatEditor_1

BattleFrontier_OutsideWest_EventScript_StatEditor_5:
# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_StatEditor_4

BattleFrontier_OutsideWest_EventScript_StatEditor_8:
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_StatEditor_Text_2, MSGBOX_DEFAULT
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_StatEditor_7

BattleFrontier_OutsideWest_EventScript_StatEditor_11:
# 77 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_StatEditor_10


BattleFrontier_OutsideWest_EventScript_EVReset::
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_EVReset_2
BattleFrontier_OutsideWest_EventScript_EVReset_1:
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_1, MSGBOX_DEFAULT
# 98 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_EVReset_5
BattleFrontier_OutsideWest_EventScript_EVReset_4:
# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_8
BattleFrontier_OutsideWest_EventScript_EVReset_7:
# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonEvTotal
# 110 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_11
BattleFrontier_OutsideWest_EventScript_EVReset_10:
# 115 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_3
# 116 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_4, MSGBOX_YESNO
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_14
BattleFrontier_OutsideWest_EventScript_EVReset_13:
# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ResetMonEvs
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 124 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_5, MSGBOX_DEFAULT
# 127 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_EVReset_2:
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_0, MSGBOX_DEFAULT
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_1

BattleFrontier_OutsideWest_EventScript_EVReset_5:
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_4

BattleFrontier_OutsideWest_EventScript_EVReset_8:
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_2, MSGBOX_DEFAULT
# 106 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_7

BattleFrontier_OutsideWest_EventScript_EVReset_11:
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_3, MSGBOX_DEFAULT
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_10

BattleFrontier_OutsideWest_EventScript_EVReset_14:
# 118 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_13


BattleFrontier_OutsideWest_EventScript_NatureService::
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_NatureService_2
BattleFrontier_OutsideWest_EventScript_NatureService_1:
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_1, MSGBOX_DEFAULT
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_NatureService_5
BattleFrontier_OutsideWest_EventScript_NatureService_4:
# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureService_8
BattleFrontier_OutsideWest_EventScript_NatureService_7:
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetHiddenNature
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_3, MSGBOX_DEFAULT
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature
	return

BattleFrontier_OutsideWest_EventScript_NatureService_2:
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_0, MSGBOX_DEFAULT
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_1

BattleFrontier_OutsideWest_EventScript_NatureService_5:
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_4

BattleFrontier_OutsideWest_EventScript_NatureService_8:
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_2, MSGBOX_DEFAULT
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_7


BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature::
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE, NatureManiac_Text_Hardy, NatureManiac_Text_Lonely, NatureManiac_Text_Brave, NatureManiac_Text_Adamant, NatureManiac_Text_Naughty, NatureManiac_Text_Bold, NatureManiac_Text_Docile, NatureManiac_Text_Relaxed, NatureManiac_Text_Impish, NatureManiac_Text_Lax, NatureManiac_Text_Timid, NatureManiac_Text_Hasty, NatureManiac_Text_Serious, NatureManiac_Text_Jolly, NatureManiac_Text_Naive, NatureManiac_Text_Modest, NatureManiac_Text_Mild, NatureManiac_Text_Quiet, NatureManiac_Text_Bashful, NatureManiac_Text_Rash, NatureManiac_Text_Calm, NatureManiac_Text_Gentle, NatureManiac_Text_Sassy, NatureManiac_Text_Careful, NatureManiac_Text_Quirky
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_2
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_1:
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_5
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_4:
# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_1, MSGBOX_YESNO
# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_8
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_7:
# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 197 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetHiddenNature
# 198 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_2, MSGBOX_DEFAULT
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_2:
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_1

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_5:
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_0, MSGBOX_DEFAULT
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_4

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_8:
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_7


BattleFrontier_OutsideWest_EventScript_NatureManiacDecline::
# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline::
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline_Text_0, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_MoveRelearner::
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_MoveRelearner_2
BattleFrontier_OutsideWest_EventScript_MoveRelearner_1:
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_1, MSGBOX_DEFAULT
# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	return

BattleFrontier_OutsideWest_EventScript_MoveRelearner_2:
# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_0, MSGBOX_DEFAULT
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearner_1


BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon::
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_0, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setmoverelearnerstate MOVE_RELEARNER_ALL
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_2
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_1:
# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special IsSelectedMonEgg
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_5
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_4:
# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special Special_HasMoveToRelearn
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_8
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_7:
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_3, MSGBOX_DEFAULT
# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TeachMoveRelearnerMove
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_11
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_10:
# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 258 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 259 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_4, MSGBOX_DEFAULT
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_2:
# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_1

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_5:
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_1, MSGBOX_DEFAULT
# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_4

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_8:
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_2, MSGBOX_DEFAULT
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_7

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_11:
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_10


BattleFrontier_OutsideWest_EventScript_friendship::
# 265 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_friendship_2
BattleFrontier_OutsideWest_EventScript_friendship_1:
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_1, MSGBOX_DEFAULT
# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_friendship_5
BattleFrontier_OutsideWest_EventScript_friendship_4:
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_friendship_8
BattleFrontier_OutsideWest_EventScript_friendship_7:
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose
	return

BattleFrontier_OutsideWest_EventScript_friendship_2:
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_0, MSGBOX_DEFAULT
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_1

BattleFrontier_OutsideWest_EventScript_friendship_5:
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_4

BattleFrontier_OutsideWest_EventScript_friendship_8:
# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_2, MSGBOX_DEFAULT
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_7


BattleFrontier_OutsideWest_EventScript_FriendshipChoose::
# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_0, MSGBOX_DEFAULT
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush Friendship_Text_Highest, MAX_FRIENDSHIP
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush Friendship_Text_Lowest, 0
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, MAX_FRIENDSHIP, DYN_MULTICHOICE_CB_NONE
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_2
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_1:
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonFriendship
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_5
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_4:
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_2, MSGBOX_YESNO
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_8
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_7:
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonFriendship
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_3, MSGBOX_DEFAULT
# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_2:
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_1

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_5:
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_1, MSGBOX_DEFAULT
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_4

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_8:
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_7


BattleFrontier_OutsideWest_EventScript_Ability::
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_Ability_2
BattleFrontier_OutsideWest_EventScript_Ability_1:
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_1, MSGBOX_DEFAULT
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_Ability_5
BattleFrontier_OutsideWest_EventScript_Ability_4:
# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_8
BattleFrontier_OutsideWest_EventScript_Ability_7:
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, BufferMonOtherAbilities
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_11
BattleFrontier_OutsideWest_EventScript_Ability_10:
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_4, MSGBOX_DEFAULT
# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_14
BattleFrontier_OutsideWest_EventScript_Ability_13:
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_5, MSGBOX_YESNO
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_17
BattleFrontier_OutsideWest_EventScript_Ability_16:
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetAbility
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 358 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_6, MSGBOX_DEFAULT
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_Ability_2:
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_0, MSGBOX_DEFAULT
# 321 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_1

BattleFrontier_OutsideWest_EventScript_Ability_5:
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_4

BattleFrontier_OutsideWest_EventScript_Ability_8:
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_2, MSGBOX_DEFAULT
# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_7

BattleFrontier_OutsideWest_EventScript_Ability_11:
# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_3, MSGBOX_DEFAULT
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_10

BattleFrontier_OutsideWest_EventScript_Ability_14:
# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_13

BattleFrontier_OutsideWest_EventScript_Ability_17:
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_16


BattleFrontier_OutsideWest_EventScript_AbilityDecline::
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_FriendshipDecline::
# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline::
# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 523 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 527 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 528 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 529 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 531 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 532 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 533 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 535 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 536 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 537 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 538 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 539 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 540 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 541 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 542 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 543 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 544 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 545 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 546 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 547 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 548 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 549 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 550 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 551 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 552 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 553 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 554 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 555 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 556 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 557 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 558 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 559 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 560 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 561 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 562 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 563 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 564 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 565 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 566 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 567 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 568 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 569 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 570 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 571 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 572 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 573 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 574 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 575 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 576 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 577 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 578 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 579 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 580 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 581 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 582 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 583 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 584 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 585 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 586 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 587 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 588 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 589 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 590 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 591 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 592 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 593 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 594 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 595 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 596 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 597 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 598 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 599 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 601 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 602 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 603 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 604 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 605 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 606 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 607 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 608 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 609 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 610 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 611 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 612 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 613 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 614 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 615 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 616 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 617 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 618 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 619 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 620 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 621 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 622 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 623 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 624 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 625 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 626 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 627 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 628 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 629 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 630 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 631 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 632 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 633 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 634 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 635 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 636 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 637 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 638 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 639 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 640 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 641 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 642 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 643 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 644 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 645 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 646 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 647 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 648 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 649 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 650 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 651 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 652 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 653 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 654 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 655 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 656 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 657 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 658 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 659 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 660 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 661 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 662 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 663 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 664 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 665 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 666 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 667 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 668 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 669 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 670 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 671 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 672 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 673 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 674 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 675 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 676 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 677 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 678 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 679 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 680 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 681 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 682 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 683 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 684 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 685 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 686 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 687 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 688 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 689 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 690 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 691 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 692 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 693 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 694 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 695 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 696 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 697 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 698 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 699 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 700 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 701 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 702 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 703 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 704 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
# 705 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Your path to the invincible superstar!$"
# 706 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 707 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 708 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
# 709 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Seek out the toughest POKéMON!$"
# 710 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 711 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 712 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
# 713 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Choose one of three paths!$"
# 714 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 715 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 716 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
# 717 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "TRAINERS bring their best-raised\n"
# 718 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON for elimination-style matches.$"
# 719 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 720 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 721 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 722 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "May I see your TICKET?$"
# 723 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 724 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 725 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 726 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm terribly sorry.\p"
# 727 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You must have a TICKET to board\n"
# 728 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the ferry.$"
# 729 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 730 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 731 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 732 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 733 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And where would you like to go?$"
# 734 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 735 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 736 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 737 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 738 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 739 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 740 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 741 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 742 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"
# 743 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 744 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 745 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 746 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "departure.$"
# 747 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 748 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 749 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"
# 750 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 751 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 752 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
# 753 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But here…\l"
# 754 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've been useless!$"
# 755 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 756 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 757 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
# 758 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "but I can't find it even though I have\l"
# 759 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a map of the BATTLE FRONTIER.\p"
# 760 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This place is just too big!$"
# 761 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 762 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 763 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
# 764 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "as I arrived here.\p"
# 765 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But on the way, I got seasick…\n"
# 766 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Urrrrp…$"
# 767 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 768 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 769 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
# 770 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "here, you know?\p"
# 771 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Only those TRAINERS who've been\n"
# 772 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "recognized as tough are brought here.\p"
# 773 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's why many TRAINERS don't even\n"
# 774 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "know about the BATTLE FRONTIER.$"
# 775 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 776 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 777 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
# 778 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Are you sure we can make challenges\n"
# 779 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "even if we don't have any POKéMON?$"
# 780 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 781 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 782 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
# 783 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure it'll be okay.\p"
# 784 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I think…\p"
# 785 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But remember that big scary guy?\n"
# 786 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He said, “I'll lend you POKéMON!”$"
# 787 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 788 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 789 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
# 790 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You can rent strong POKéMON there.\p"
# 791 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But it makes me wonder.\n"
# 792 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Who's raising those rental POKéMON?$"
# 793 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 794 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 795 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
# 796 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "PIKE because of SEVIPER…\p"
# 797 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "B-but I came all the way here, so I will\n"
# 798 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "try to conquer everything!\l"
# 799 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "…Shudder…$"
# 800 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 801 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 802 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
# 803 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "One, two, three!\p"
# 804 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 805 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 806 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 807 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
# 808 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I will take the BATTLE PIKE challenge!$"
# 809 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 810 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 811 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 812 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I lost.\p"
# 813 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I guess I'm not very lucky today.\n"
# 814 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll put off my BATTLE PIKE challenge\l"
# 815 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "until tomorrow.$"
# 816 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 817 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 818 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
# 819 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "for some unknown reason, would choose\l"
# 820 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "fishing over battling.\p"
# 821 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? You can't catch anything here?\n"
# 822 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's disappointing…$"
# 823 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 824 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 825 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
# 826 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "matter what, until I get a Symbol.$"
# 827 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 828 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 829 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
# 830 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the BATTLE DOME?\p"
# 831 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll wish you the best of luck.\n"
# 832 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let us both win our way up and meet\l"
# 833 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in challenges.$"
# 834 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 835 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 836 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
# 837 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The BATTLE DOME is here!\l"
# 838 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Go get 'em, Grandpa!$"
# 839 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 840 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 841 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
# 842 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I won't let GENTLEMEN beat me!\p"
# 843 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But where is the entrance?$"
# 844 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 845 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 846 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
# 847 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "that long ago.\p"
# 848 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But, now look at this place! Amazing!\n"
# 849 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll bring my mother out to see this.$"
# 850 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 851 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 852 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
# 853 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "FRONTIER!\p"
# 854 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure to grab attention with\n"
# 855 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "my looks and ability!$"
# 856 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 857 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 858 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
# 859 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It looks like this square's filled with\n"
# 860 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tough people.\p"
# 861 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…$"
# 862 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 863 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 864 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 865 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A while back, I met this older girl\n"
# 866 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "at the BATTLE PIKE.\p"
# 867 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She had these eyes that were scary\n"
# 868 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in a real ornery way.\p"
# 869 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 870 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She got all furious: “Will you quit\n"
# 871 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eating!” Then she whaled on me.\p"
# 872 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It was a hair-raising kind of\n"
# 873 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "scary experience, sure enough.\p"
# 874 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…$"
# 875 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 876 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 877 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
# 878 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's nothing!\p"
# 879 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Why, the last time I cheered for him,\n"
# 880 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "our eyes met and sparks flew!$"
# 881 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 882 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 883 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
# 884 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pfft!\p"
# 885 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That only happened because\n"
# 886 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I happened to be sitting next to you!\p"
# 887 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE only looked our way\n"
# 888 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "because my cheering was so loud!$"
# 889 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 890 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 891 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
# 892 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Keep that racket down!\p"
# 893 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You fair-weather fans should stick\n"
# 894 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to cheering for some GYM LEADER!\p"
# 895 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE is mine!\n"
# 896 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The only idol for me!$"
# 897 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 898 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 899 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
# 900 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's hard to believe, but they once\n"
# 901 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "were TRAINERS, and good ones, too.\p"
# 902 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They used to be incredibly tough,\n"
# 903 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "and they were famous, too.\p"
# 904 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But they were obliterated by this\n"
# 905 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "certain TRAINER at a tournament.\p"
# 906 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They were so thoroughly whipped,\n"
# 907 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "they became smitten by the TRAINER.\p"
# 908 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Now they're just fans of the TRAINER.\n"
# 909 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They go cheer for their idol at the\l"
# 910 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "BATTLE DOME every day now.$"
# 911 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 912 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 913 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
# 914 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a POKéMON with an unusually long tail\l"
# 915 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "somewhere in the BATTLE FRONTIER.\p"
# 916 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It must be adorable. I'm sure of it…\p"
# 917 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, challenges can wait. I feel driven\n"
# 918 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
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

BattleFrontier_OutsideWest_EventScript_StatEditor_Text_0:
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hooking a POKéMON up to my machine\n"
	.string "costs 5 Battle Points, and you're short!$"

BattleFrontier_OutsideWest_EventScript_StatEditor_Text_1:
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... The MIN-MAXER SPECIAL! I plug\n"
	.string "your POKéMON into my machine and you\l"
	.string "rewrite it YOURSELF--training AND\l"
	.string "hidden potential, every stat, as long as\l"
	.string "you like.\p"
	.string "Which one are we plugging in?$"

BattleFrontier_OutsideWest_EventScript_StatEditor_Text_2:
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG? There's nothing in there to plug\n"
	.string "in! Bring me something that's hatched!$"

BattleFrontier_OutsideWest_EventScript_StatEditor_Text_3:
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "5 Battle Points for the session. Ready?$"

BattleFrontier_OutsideWest_EventScript_StatEditor_Text_4:
# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... A masterpiece! Come back\n"
	.string "whenever you want to tune another one!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_0:
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Wiping training data costs 2 Battle\n"
	.string "Points, and you're short!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_1:
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A clean slate! Which POKéMON's training\n"
	.string "should I erase?$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_2:
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG hasn't trained a day in its life!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_3:
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That POKéMON is ALREADY a blank slate!\n"
	.string "I can't take your Battle Points to\l"
	.string "erase nothing!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_4:
# 116 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's carrying {STR_VAR_1} EVs of\n"
	.string "training. Wipe it all for 2 Battle\l"
	.string "Points?$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_5:
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Scrubbed to zero! It's ready for a whole\n"
	.string "new training regimen!$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_0:
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, but... You don't have enough Battle\n"
	.string "Points! A new nature costs 5.$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_1:
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A whole new personality, coming up!\n"
	.string "Which POKéMON should I work on?$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_2:
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's an EGG! Who knows what's even in\n"
	.string "there? I can't work with that!$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_3:
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And which nature would you like?$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_0:
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hold on! That's the nature your POKéMON\n"
	.string "already has! I can't take your Battle\l"
	.string "Points for doing nothing. Pick a\l"
	.string "different one!$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_1:
# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Excellent choice! That'll be 5 Battle\n"
	.string "Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_2:
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "...And done! Your POKéMON has a whole\n"
	.string "new outlook on life!$"

BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline_Text_0:
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Suboptimal choice, but sure. Come back\n"
	.string "when something needs tweaking!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_0:
# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hmm... You're short on Battle Points. A\n"
	.string "move is 2 apiece!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_1:
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I know every move a POKéMON can\n"
	.string "learn--level-up, egg AND tutor\l"
	.string "moves--for 2 Battle Points apiece!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_0:
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_1:
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG doesn't know any moves! Pick\n"
	.string "another POKéMON.$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_2:
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sorry, I don't have any move I can teach\n"
	.string "that POKéMON.$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_3:
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which move should I teach? Press LEFT\n"
	.string "or RIGHT in the list to flip between\l"
	.string "level-up, egg and tutor moves!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_4:
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's 2 Battle Points, thank you!$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_0:
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Aww... You don't have enough Battle\n"
	.string "Points. Meddling with hearts costs 2!$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_1:
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON hearts are putty in my\n"
	.string "hands--adoration or despair, 2 Battle\l"
	.string "Points! Which POKéMON's heart shall I\l"
	.string "meddle with?$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_2:
# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG can't love anyone yet! Silly!$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_0:
# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Shall I fill its heart with love, or drain\n"
	.string "it dry?$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_1:
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Its friendship is ALREADY there! I\n"
	.string "can't take your Battle Points for that!$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_2:
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That'll be 2 Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_3:
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It is done! Your POKéMON will never feel\n"
	.string "the same about you again!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_0:
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sorry, friend. A new ability is 5 Battle\n"
	.string "Points!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_1:
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Every POKéMON has untapped\n"
	.string "talents--even hidden ones, if it has\l"
	.string "them in it! Which POKéMON should I work\l"
	.string "with?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_2:
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG's talents haven't even hatched\n"
	.string "yet!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_3:
# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hmm... {STR_VAR_1} is the only ability\n"
	.string "that POKéMON can ever have. There's\l"
	.string "nothing for me to do!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_4:
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Right now its ability is {STR_VAR_1}.\n"
	.string "Which ability should I bring out?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_5:
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Good choice! That'll be 5 Battle Points.\n"
	.string "Ready?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_6:
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There! Your POKéMON's new talent is\n"
	.string "shining through!$"

ServiceNerd_Text_Nature::
# 40 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Nature (5BP)$"

ServiceNerd_Text_Stats::
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "EVs/IVs (5BP)$"

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

Friendship_Text_Highest::
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Highest$"

Friendship_Text_Lowest::
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lowest$"

NatureManiac_Text_Hardy::
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hardy$"

NatureManiac_Text_Lonely::
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lonely$"

NatureManiac_Text_Brave::
# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Brave$"

NatureManiac_Text_Adamant::
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Adamant$"

NatureManiac_Text_Naughty::
# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naughty$"

NatureManiac_Text_Bold::
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bold$"

NatureManiac_Text_Docile::
# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Docile$"

NatureManiac_Text_Relaxed::
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Relaxed$"

NatureManiac_Text_Impish::
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Impish$"

NatureManiac_Text_Lax::
# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lax$"

NatureManiac_Text_Timid::
# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Timid$"

NatureManiac_Text_Hasty::
# 387 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hasty$"

NatureManiac_Text_Serious::
# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Serious$"

NatureManiac_Text_Jolly::
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Jolly$"

NatureManiac_Text_Naive::
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naive$"

NatureManiac_Text_Modest::
# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Modest$"

NatureManiac_Text_Mild::
# 392 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mild$"

NatureManiac_Text_Quiet::
# 393 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quiet$"

NatureManiac_Text_Bashful::
# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bashful$"

NatureManiac_Text_Rash::
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Rash$"

NatureManiac_Text_Calm::
# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Calm$"

NatureManiac_Text_Gentle::
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Gentle$"

NatureManiac_Text_Sassy::
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sassy$"

NatureManiac_Text_Careful::
# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Careful$"

NatureManiac_Text_Quirky::
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quirky$"
