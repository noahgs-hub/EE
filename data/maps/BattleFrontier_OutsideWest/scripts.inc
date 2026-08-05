BattleFrontier_OutsideWest_EventScript_Renewer::
# 11 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Renewer_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 15 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 200
	goto_if_lt BattleFrontier_OutsideWest_EventScript_Renewer_2
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Renewer_Text_2, MSGBOX_YESNO
# 22 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Renewer_5
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 200
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special RespawnAllLegendaries
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Renewer_Text_4, MSGBOX_DEFAULT
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_Renewer_2:
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Renewer_Text_1, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_Renewer_5:
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Renewer_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_ServiceNerd::
# 44 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 45 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 46 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_ServiceNerd_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_ServiceMenu::
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_ServiceMenu_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Nature, 0
# 53 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Stats, 1
# 54 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Ability, 2
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Moves, 3
# 56 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Friendship, 4
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_EVReset, 5
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush ServiceNerd_Text_Done, 6
# 59 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_ServiceMenu_3
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_ServiceMenu_4
# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_ServiceMenu_5
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 3, BattleFrontier_OutsideWest_EventScript_ServiceMenu_6
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 4, BattleFrontier_OutsideWest_EventScript_ServiceMenu_7
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 5, BattleFrontier_OutsideWest_EventScript_ServiceMenu_8
BattleFrontier_OutsideWest_EventScript_ServiceMenu_1:
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline
	return

BattleFrontier_OutsideWest_EventScript_ServiceMenu_3:
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureService
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_4:
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_StatEditor
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_5:
# 66 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Ability
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_6:
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearner
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_7:
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_friendship
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1

BattleFrontier_OutsideWest_EventScript_ServiceMenu_8:
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_EVReset
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu_1


BattleFrontier_OutsideWest_EventScript_StatEditor::
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_StatEditor_2
BattleFrontier_OutsideWest_EventScript_StatEditor_1:
# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_StatEditor_Text_1, MSGBOX_DEFAULT
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 101 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_StatEditor_5
BattleFrontier_OutsideWest_EventScript_StatEditor_4:
# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_0x8004
# 106 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_StatEditor_8
BattleFrontier_OutsideWest_EventScript_StatEditor_7:
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_StatEditor_Text_3, MSGBOX_YESNO
# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_StatEditor_11
BattleFrontier_OutsideWest_EventScript_StatEditor_10:
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 118 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 119 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_2
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special OpenStatEditorFromScript
# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_StatEditor_Text_4, MSGBOX_DEFAULT
# 124 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_StatEditor_2:
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_StatEditor_Text_0, MSGBOX_DEFAULT
# 96 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_StatEditor_1

BattleFrontier_OutsideWest_EventScript_StatEditor_5:
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_StatEditor_4

BattleFrontier_OutsideWest_EventScript_StatEditor_8:
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_StatEditor_Text_2, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_StatEditor_7

BattleFrontier_OutsideWest_EventScript_StatEditor_11:
# 114 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_StatEditor_10


BattleFrontier_OutsideWest_EventScript_EVReset::
# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_EVReset_2
BattleFrontier_OutsideWest_EventScript_EVReset_1:
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_1, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 136 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_EVReset_5
BattleFrontier_OutsideWest_EventScript_EVReset_4:
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_8
BattleFrontier_OutsideWest_EventScript_EVReset_7:
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonEvTotal
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_11
BattleFrontier_OutsideWest_EventScript_EVReset_10:
# 152 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_3
# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_4, MSGBOX_YESNO
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_EVReset_14
BattleFrontier_OutsideWest_EventScript_EVReset_13:
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ResetMonEvs
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_5, MSGBOX_DEFAULT
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_EVReset_2:
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_0, MSGBOX_DEFAULT
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_1

BattleFrontier_OutsideWest_EventScript_EVReset_5:
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_4

BattleFrontier_OutsideWest_EventScript_EVReset_8:
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_2, MSGBOX_DEFAULT
# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_7

BattleFrontier_OutsideWest_EventScript_EVReset_11:
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_EVReset_Text_3, MSGBOX_DEFAULT
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_10

BattleFrontier_OutsideWest_EventScript_EVReset_14:
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_EVReset_13


BattleFrontier_OutsideWest_EventScript_NatureService::
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_NatureService_2
BattleFrontier_OutsideWest_EventScript_NatureService_1:
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_1, MSGBOX_DEFAULT
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_NatureService_5
BattleFrontier_OutsideWest_EventScript_NatureService_4:
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureService_8
BattleFrontier_OutsideWest_EventScript_NatureService_7:
# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetHiddenNature
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_3, MSGBOX_DEFAULT
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature
	return

BattleFrontier_OutsideWest_EventScript_NatureService_2:
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_0, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_1

BattleFrontier_OutsideWest_EventScript_NatureService_5:
# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_4

BattleFrontier_OutsideWest_EventScript_NatureService_8:
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureService_Text_2, MSGBOX_DEFAULT
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_NatureService_7


BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature::
# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE, NatureManiac_Text_Hardy, NatureManiac_Text_Lonely, NatureManiac_Text_Brave, NatureManiac_Text_Adamant, NatureManiac_Text_Naughty, NatureManiac_Text_Bold, NatureManiac_Text_Docile, NatureManiac_Text_Relaxed, NatureManiac_Text_Impish, NatureManiac_Text_Lax, NatureManiac_Text_Timid, NatureManiac_Text_Hasty, NatureManiac_Text_Serious, NatureManiac_Text_Jolly, NatureManiac_Text_Naive, NatureManiac_Text_Modest, NatureManiac_Text_Mild, NatureManiac_Text_Quiet, NatureManiac_Text_Bashful, NatureManiac_Text_Rash, NatureManiac_Text_Calm, NatureManiac_Text_Gentle, NatureManiac_Text_Sassy, NatureManiac_Text_Careful, NatureManiac_Text_Quirky
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_2
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_1:
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_5
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_4:
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_1, MSGBOX_YESNO
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_8
BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_7:
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetHiddenNature
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_2, MSGBOX_DEFAULT
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_2:
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_1

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_5:
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_0, MSGBOX_DEFAULT
# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_4

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_8:
# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_7


BattleFrontier_OutsideWest_EventScript_NatureManiacDecline::
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline::
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline_Text_0, MSGBOX_DEFAULT
# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_MoveRelearner::
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_MoveRelearner_2
BattleFrontier_OutsideWest_EventScript_MoveRelearner_1:
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_1, MSGBOX_DEFAULT
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	return

BattleFrontier_OutsideWest_EventScript_MoveRelearner_2:
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_0, MSGBOX_DEFAULT
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearner_1


BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon::
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_0, MSGBOX_DEFAULT
# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setmoverelearnerstate MOVE_RELEARNER_ALL
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_2
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_1:
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special IsSelectedMonEgg
# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_5
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_4:
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special Special_HasMoveToRelearn
# 284 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_8
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_7:
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_3, MSGBOX_DEFAULT
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TeachMoveRelearnerMove
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_11
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_10:
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_4, MSGBOX_DEFAULT
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_2:
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_1

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_5:
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_1, MSGBOX_DEFAULT
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_4

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_8:
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_2, MSGBOX_DEFAULT
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_7

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_11:
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_10


BattleFrontier_OutsideWest_EventScript_friendship::
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_friendship_2
BattleFrontier_OutsideWest_EventScript_friendship_1:
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_1, MSGBOX_DEFAULT
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_friendship_5
BattleFrontier_OutsideWest_EventScript_friendship_4:
# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_friendship_8
BattleFrontier_OutsideWest_EventScript_friendship_7:
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose
	return

BattleFrontier_OutsideWest_EventScript_friendship_2:
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_0, MSGBOX_DEFAULT
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_1

BattleFrontier_OutsideWest_EventScript_friendship_5:
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_4

BattleFrontier_OutsideWest_EventScript_friendship_8:
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_2, MSGBOX_DEFAULT
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_friendship_7


BattleFrontier_OutsideWest_EventScript_FriendshipChoose::
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_0, MSGBOX_DEFAULT
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush Friendship_Text_Highest, MAX_FRIENDSHIP
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush Friendship_Text_Lowest, 0
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, MAX_FRIENDSHIP, DYN_MULTICHOICE_CB_NONE
# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_2
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_1:
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonFriendship
# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_5
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_4:
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_2, MSGBOX_YESNO
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_8
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_7:
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonFriendship
# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_3, MSGBOX_DEFAULT
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_2:
# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_1

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_5:
# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_1, MSGBOX_DEFAULT
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_4

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_8:
# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_7


BattleFrontier_OutsideWest_EventScript_Ability::
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_Ability_2
BattleFrontier_OutsideWest_EventScript_Ability_1:
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_1, MSGBOX_DEFAULT
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_Ability_5
BattleFrontier_OutsideWest_EventScript_Ability_4:
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 368 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_8
BattleFrontier_OutsideWest_EventScript_Ability_7:
# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, BufferMonOtherAbilities
# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_11
BattleFrontier_OutsideWest_EventScript_Ability_10:
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_4, MSGBOX_DEFAULT
# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_14
BattleFrontier_OutsideWest_EventScript_Ability_13:
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_5, MSGBOX_YESNO
# 387 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_17
BattleFrontier_OutsideWest_EventScript_Ability_16:
# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 392 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetAbility
# 393 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_6, MSGBOX_DEFAULT
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return

BattleFrontier_OutsideWest_EventScript_Ability_2:
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_0, MSGBOX_DEFAULT
# 358 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_1

BattleFrontier_OutsideWest_EventScript_Ability_5:
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_4

BattleFrontier_OutsideWest_EventScript_Ability_8:
# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_2, MSGBOX_DEFAULT
# 370 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_7

BattleFrontier_OutsideWest_EventScript_Ability_11:
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_3, MSGBOX_DEFAULT
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	goto BattleFrontier_OutsideWest_EventScript_Ability_10

BattleFrontier_OutsideWest_EventScript_Ability_14:
# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_13

BattleFrontier_OutsideWest_EventScript_Ability_17:
# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_16


BattleFrontier_OutsideWest_EventScript_AbilityDecline::
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_FriendshipDecline::
# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline::
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ServiceMenu
	return


# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 523 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 527 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 528 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 529 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 531 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 532 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 533 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 535 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 536 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 537 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 538 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 539 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 540 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 541 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 542 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 543 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 544 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 545 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 546 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 547 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 548 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 549 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 550 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 551 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 552 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 553 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 554 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 555 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 556 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 557 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 558 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 559 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 560 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 561 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 562 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 563 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 564 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 565 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 566 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 567 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 568 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 569 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 570 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 571 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 572 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 573 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 574 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 575 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 576 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 577 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 578 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 579 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 580 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 581 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 582 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 583 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 584 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 585 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 586 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 587 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 588 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 589 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 590 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 591 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 592 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 593 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 594 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 595 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 596 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 597 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 598 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 599 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 600 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 601 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 602 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 603 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 604 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 605 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 606 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 607 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 608 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 609 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 610 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 611 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 612 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 613 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 614 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 615 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 616 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 617 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 618 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 619 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 620 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 621 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 622 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 623 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 624 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 625 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 626 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 627 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 628 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 629 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 630 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 631 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 632 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 633 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 634 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 635 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 636 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 637 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 638 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 639 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 640 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 641 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 642 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 643 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 644 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 645 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 646 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 647 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 648 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 649 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 650 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 651 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 652 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 653 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 654 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 655 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 656 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 657 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 658 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 659 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 660 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 661 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 662 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 663 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 664 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 665 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 666 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 667 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 668 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 669 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 670 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 671 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 672 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 673 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 674 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 675 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 676 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 677 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 678 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 679 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 680 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 681 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 682 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 683 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 684 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 685 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 686 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 687 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 688 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 689 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 690 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 691 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 692 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 693 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 694 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 695 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 696 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 697 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 698 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 699 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 700 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 701 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 702 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 703 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 704 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 705 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 706 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 707 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 708 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 709 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 710 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 711 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 712 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 713 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 714 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 715 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 716 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 717 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 718 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 719 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 720 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 721 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 722 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 723 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 724 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 725 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 726 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 727 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 728 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 729 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 730 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 731 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 732 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 733 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 734 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 735 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 736 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 737 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 738 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 739 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 740 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 741 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
# 742 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Your path to the invincible superstar!$"
# 743 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 744 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 745 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
# 746 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Seek out the toughest POKéMON!$"
# 747 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 748 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 749 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
# 750 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Choose one of three paths!$"
# 751 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 752 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 753 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
# 754 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "TRAINERS bring their best-raised\n"
# 755 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON for elimination-style matches.$"
# 756 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 757 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 758 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 759 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "May I see your TICKET?$"
# 760 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 761 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 762 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 763 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm terribly sorry.\p"
# 764 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You must have a TICKET to board\n"
# 765 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the ferry.$"
# 766 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 767 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 768 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 769 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 770 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And where would you like to go?$"
# 771 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 772 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 773 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 774 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 775 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 776 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 777 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 778 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 779 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"
# 780 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 781 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 782 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 783 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "departure.$"
# 784 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 785 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 786 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"
# 787 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 788 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 789 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
# 790 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But here…\l"
# 791 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've been useless!$"
# 792 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 793 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 794 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
# 795 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "but I can't find it even though I have\l"
# 796 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a map of the BATTLE FRONTIER.\p"
# 797 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This place is just too big!$"
# 798 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 799 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 800 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
# 801 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "as I arrived here.\p"
# 802 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But on the way, I got seasick…\n"
# 803 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Urrrrp…$"
# 804 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 805 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 806 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
# 807 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "here, you know?\p"
# 808 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Only those TRAINERS who've been\n"
# 809 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "recognized as tough are brought here.\p"
# 810 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's why many TRAINERS don't even\n"
# 811 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "know about the BATTLE FRONTIER.$"
# 812 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 813 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 814 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
# 815 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Are you sure we can make challenges\n"
# 816 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "even if we don't have any POKéMON?$"
# 817 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 818 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 819 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
# 820 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure it'll be okay.\p"
# 821 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I think…\p"
# 822 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But remember that big scary guy?\n"
# 823 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He said, “I'll lend you POKéMON!”$"
# 824 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 825 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 826 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
# 827 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You can rent strong POKéMON there.\p"
# 828 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But it makes me wonder.\n"
# 829 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Who's raising those rental POKéMON?$"
# 830 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 831 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 832 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
# 833 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "PIKE because of SEVIPER…\p"
# 834 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "B-but I came all the way here, so I will\n"
# 835 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "try to conquer everything!\l"
# 836 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "…Shudder…$"
# 837 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 838 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 839 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
# 840 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "One, two, three!\p"
# 841 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 842 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 843 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 844 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
# 845 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I will take the BATTLE PIKE challenge!$"
# 846 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 847 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 848 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 849 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I lost.\p"
# 850 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I guess I'm not very lucky today.\n"
# 851 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll put off my BATTLE PIKE challenge\l"
# 852 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "until tomorrow.$"
# 853 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 854 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 855 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
# 856 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "for some unknown reason, would choose\l"
# 857 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "fishing over battling.\p"
# 858 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? You can't catch anything here?\n"
# 859 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's disappointing…$"
# 860 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 861 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 862 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
# 863 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "matter what, until I get a Symbol.$"
# 864 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 865 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 866 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
# 867 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the BATTLE DOME?\p"
# 868 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll wish you the best of luck.\n"
# 869 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let us both win our way up and meet\l"
# 870 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in challenges.$"
# 871 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 872 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 873 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
# 874 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The BATTLE DOME is here!\l"
# 875 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Go get 'em, Grandpa!$"
# 876 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 877 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 878 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
# 879 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I won't let GENTLEMEN beat me!\p"
# 880 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But where is the entrance?$"
# 881 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 882 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 883 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
# 884 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "that long ago.\p"
# 885 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But, now look at this place! Amazing!\n"
# 886 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll bring my mother out to see this.$"
# 887 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 888 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 889 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
# 890 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "FRONTIER!\p"
# 891 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure to grab attention with\n"
# 892 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "my looks and ability!$"
# 893 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 894 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 895 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
# 896 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It looks like this square's filled with\n"
# 897 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tough people.\p"
# 898 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…$"
# 899 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 900 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 901 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 902 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A while back, I met this older girl\n"
# 903 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "at the BATTLE PIKE.\p"
# 904 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She had these eyes that were scary\n"
# 905 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in a real ornery way.\p"
# 906 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 907 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She got all furious: “Will you quit\n"
# 908 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eating!” Then she whaled on me.\p"
# 909 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It was a hair-raising kind of\n"
# 910 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "scary experience, sure enough.\p"
# 911 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…$"
# 912 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 913 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 914 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
# 915 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's nothing!\p"
# 916 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Why, the last time I cheered for him,\n"
# 917 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "our eyes met and sparks flew!$"
# 918 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 919 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 920 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
# 921 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pfft!\p"
# 922 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That only happened because\n"
# 923 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I happened to be sitting next to you!\p"
# 924 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE only looked our way\n"
# 925 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "because my cheering was so loud!$"
# 926 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 927 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 928 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
# 929 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Keep that racket down!\p"
# 930 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You fair-weather fans should stick\n"
# 931 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to cheering for some GYM LEADER!\p"
# 932 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE is mine!\n"
# 933 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The only idol for me!$"
# 934 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 935 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 936 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
# 937 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's hard to believe, but they once\n"
# 938 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "were TRAINERS, and good ones, too.\p"
# 939 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They used to be incredibly tough,\n"
# 940 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "and they were famous, too.\p"
# 941 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But they were obliterated by this\n"
# 942 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "certain TRAINER at a tournament.\p"
# 943 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They were so thoroughly whipped,\n"
# 944 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "they became smitten by the TRAINER.\p"
# 945 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Now they're just fans of the TRAINER.\n"
# 946 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They go cheer for their idol at the\l"
# 947 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "BATTLE DOME every day now.$"
# 948 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 949 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 950 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
# 951 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a POKéMON with an unusually long tail\l"
# 952 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "somewhere in the BATTLE FRONTIER.\p"
# 953 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It must be adorable. I'm sure of it…\p"
# 954 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, challenges can wait. I feel driven\n"
# 955 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to find the delightful creature!$"

BattleFrontier_OutsideWest_EventScript_Renewer_Text_0:
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The world forgets, you know.\p"
	.string "Wipe out a legend and the mountain\n"
	.string "remembers the shape of it. Given long\l"
	.string "enough, and enough of my persuasion,\l"
	.string "the shape fills back in.\p"
	.string "I can do that. All of them. Today. For\n"
	.string "200 Battle Points.$"

BattleFrontier_OutsideWest_EventScript_Renewer_Text_1:
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You don't have 200 Battle Points. Come\n"
	.string "back when the world owes you more.$"

BattleFrontier_OutsideWest_EventScript_Renewer_Text_2:
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Every legend you've felled or captured,\n"
	.string "walking again in its old haunt. The\l"
	.string "birds, the beasts, the titans, the ones\l"
	.string "in the deep places--all of it.\p"
	.string "Shall I begin?$"

BattleFrontier_OutsideWest_EventScript_Renewer_Text_3:
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then the world stays as you left it. For\n"
	.string "now.$"

BattleFrontier_OutsideWest_EventScript_Renewer_Text_4:
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It is done.\p"
	.string "Go and look. They are where they always\n"
	.string "were, and they remember nothing of you.\p"
	.string "And the sky has split its mind again--a\n"
	.string "drought burning over one road, a\l"
	.string "downpour drowning another, both at\l"
	.string "once. The WEATHER INSTITUTE can tell\l"
	.string "you where. You know what that means.$"

BattleFrontier_OutsideWest_EventScript_ServiceNerd_Text_0:
# 46 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hiya! I'm the MIN-MAXER! Natures,\n"
	.string "potential, abilities, moves,\l"
	.string "friendship--if your POKéMON has a stat,\l"
	.string "I can tweak it!\p"
	.string "The other guys who worked here?\n"
	.string "Obsolete. I automated them away!$"

BattleFrontier_OutsideWest_EventScript_ServiceMenu_Text_0:
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "So! What are we optimizing today?$"

BattleFrontier_OutsideWest_EventScript_StatEditor_Text_0:
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hooking a POKéMON up to my machine\n"
	.string "costs 5 Battle Points, and you're short!$"

BattleFrontier_OutsideWest_EventScript_StatEditor_Text_1:
# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... The MIN-MAXER SPECIAL! I plug\n"
	.string "your POKéMON into my machine and you\l"
	.string "rewrite it YOURSELF--training AND\l"
	.string "hidden potential, every stat, as long as\l"
	.string "you like.\p"
	.string "Which one are we plugging in?$"

BattleFrontier_OutsideWest_EventScript_StatEditor_Text_2:
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG? There's nothing in there to plug\n"
	.string "in! Bring me something that's hatched!$"

BattleFrontier_OutsideWest_EventScript_StatEditor_Text_3:
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "5 Battle Points for the session. Ready?$"

BattleFrontier_OutsideWest_EventScript_StatEditor_Text_4:
# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... A masterpiece! Come back\n"
	.string "whenever you want to tune another one!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_0:
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Wiping training data costs 2 Battle\n"
	.string "Points, and you're short!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_1:
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A clean slate! Which POKéMON's training\n"
	.string "should I erase?$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_2:
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG hasn't trained a day in its life!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_3:
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That POKéMON is ALREADY a blank slate!\n"
	.string "I can't take your Battle Points to\l"
	.string "erase nothing!$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_4:
# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's carrying {STR_VAR_1} EVs of\n"
	.string "training. Wipe it all for 2 Battle\l"
	.string "Points?$"

BattleFrontier_OutsideWest_EventScript_EVReset_Text_5:
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Scrubbed to zero! It's ready for a whole\n"
	.string "new training regimen!$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_0:
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, but... You don't have enough Battle\n"
	.string "Points! A new nature costs 5.$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_1:
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A whole new personality, coming up!\n"
	.string "Which POKéMON should I work on?$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_2:
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's an EGG! Who knows what's even in\n"
	.string "there? I can't work with that!$"

BattleFrontier_OutsideWest_EventScript_NatureService_Text_3:
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And which nature would you like?$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_0:
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hold on! That's the nature your POKéMON\n"
	.string "already has! I can't take your Battle\l"
	.string "Points for doing nothing. Pick a\l"
	.string "different one!$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_1:
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Excellent choice! That'll be 5 Battle\n"
	.string "Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_NatureManiacChooseNature_Text_2:
# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "...And done! Your POKéMON has a whole\n"
	.string "new outlook on life!$"

BattleFrontier_OutsideWest_EventScript_ServiceNerdDecline_Text_0:
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Suboptimal choice, but sure. Come back\n"
	.string "when something needs tweaking!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_0:
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hmm... You're short on Battle Points. A\n"
	.string "move is 2 apiece!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_1:
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I know every move a POKéMON can\n"
	.string "learn--level-up, egg AND tutor\l"
	.string "moves--for 2 Battle Points apiece!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_0:
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_1:
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG doesn't know any moves! Pick\n"
	.string "another POKéMON.$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_2:
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sorry, I don't have any move I can teach\n"
	.string "that POKéMON.$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_3:
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which move should I teach? Press LEFT\n"
	.string "or RIGHT in the list to flip between\l"
	.string "level-up, egg and tutor moves!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_4:
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's 2 Battle Points, thank you!$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_0:
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Aww... You don't have enough Battle\n"
	.string "Points. Meddling with hearts costs 2!$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_1:
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON hearts are putty in my\n"
	.string "hands--adoration or despair, 2 Battle\l"
	.string "Points! Which POKéMON's heart shall I\l"
	.string "meddle with?$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_2:
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG can't love anyone yet! Silly!$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_0:
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Shall I fill its heart with love, or drain\n"
	.string "it dry?$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_1:
# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Its friendship is ALREADY there! I\n"
	.string "can't take your Battle Points for that!$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_2:
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That'll be 2 Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_3:
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It is done! Your POKéMON will never feel\n"
	.string "the same about you again!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_0:
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sorry, friend. A new ability is 5 Battle\n"
	.string "Points!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_1:
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Every POKéMON has untapped\n"
	.string "talents--even hidden ones, if it has\l"
	.string "them in it! Which POKéMON should I work\l"
	.string "with?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_2:
# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG's talents haven't even hatched\n"
	.string "yet!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_3:
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hmm... {STR_VAR_1} is the only ability\n"
	.string "that POKéMON can ever have. There's\l"
	.string "nothing for me to do!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_4:
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Right now its ability is {STR_VAR_1}.\n"
	.string "Which ability should I bring out?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_5:
# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Good choice! That'll be 5 Battle Points.\n"
	.string "Ready?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_6:
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There! Your POKéMON's new talent is\n"
	.string "shining through!$"

ServiceNerd_Text_Nature::
# 77 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Nature (5BP)$"

ServiceNerd_Text_Stats::
# 78 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "EVs/IVs (5BP)$"

ServiceNerd_Text_Ability::
# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ability (5BP)$"

ServiceNerd_Text_Moves::
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Moves (2BP)$"

ServiceNerd_Text_Friendship::
# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Friendship (2BP)$"

ServiceNerd_Text_EVReset::
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "EV reset (2BP)$"

ServiceNerd_Text_Done::
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's all$"

Friendship_Text_Highest::
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Highest$"

Friendship_Text_Lowest::
# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lowest$"

NatureManiac_Text_Hardy::
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hardy$"

NatureManiac_Text_Lonely::
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lonely$"

NatureManiac_Text_Brave::
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Brave$"

NatureManiac_Text_Adamant::
# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Adamant$"

NatureManiac_Text_Naughty::
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naughty$"

NatureManiac_Text_Bold::
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bold$"

NatureManiac_Text_Docile::
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Docile$"

NatureManiac_Text_Relaxed::
# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Relaxed$"

NatureManiac_Text_Impish::
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Impish$"

NatureManiac_Text_Lax::
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lax$"

NatureManiac_Text_Timid::
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Timid$"

NatureManiac_Text_Hasty::
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hasty$"

NatureManiac_Text_Serious::
# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Serious$"

NatureManiac_Text_Jolly::
# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Jolly$"

NatureManiac_Text_Naive::
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naive$"

NatureManiac_Text_Modest::
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Modest$"

NatureManiac_Text_Mild::
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mild$"

NatureManiac_Text_Quiet::
# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quiet$"

NatureManiac_Text_Bashful::
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bashful$"

NatureManiac_Text_Rash::
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Rash$"

NatureManiac_Text_Calm::
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Calm$"

NatureManiac_Text_Gentle::
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Gentle$"

NatureManiac_Text_Sassy::
# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sassy$"

NatureManiac_Text_Careful::
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Careful$"

NatureManiac_Text_Quirky::
# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quirky$"
