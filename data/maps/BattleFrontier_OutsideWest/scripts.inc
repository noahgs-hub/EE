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
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue
	return

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


BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue::
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_TEMP_4, 0
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_2:
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, 32
	goto_if_lt BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_3
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_6
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_5:
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_4, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_9
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_8:
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_1, MSGBOX_YESNO
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_12
BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_11:
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8006, VAR_TEMP_4
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonIv
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_2, MSGBOX_DEFAULT
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_3:
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush IVManiac_Text_Number, VAR_TEMP_4
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_2

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_6:
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_5

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_9:
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_0, MSGBOX_DEFAULT
# 152 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_8

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_12:
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_IVManiacDecline
	goto BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_11


BattleFrontier_OutsideWest_EventScript_IVManiacDecline::
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_IVManiacDecline_Text_0, MSGBOX_DEFAULT
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_NatureManiacDecline::
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_NatureManiacDecline_Text_0, MSGBOX_DEFAULT
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_MoveRelearner::
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_0, MSGBOX_YESNO
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearner_2
BattleFrontier_OutsideWest_EventScript_MoveRelearner_1:
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_MoveRelearner_5
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_2, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush FrontierTutor_Text_LevelUpMoves, MOVE_RELEARNER_LEVEL_UP_MOVES
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush FrontierTutor_Text_EggMoves, MOVE_RELEARNER_EGG_MOVES
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush FrontierTutor_Text_TutorMoves, MOVE_RELEARNER_TUTOR_MOVES
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, MOVE_RELEARNER_LEVEL_UP_MOVES, DYN_MULTICHOICE_CB_NONE
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearner_8
BattleFrontier_OutsideWest_EventScript_MoveRelearner_7:
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	return

BattleFrontier_OutsideWest_EventScript_MoveRelearner_2:
# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearner_1

BattleFrontier_OutsideWest_EventScript_MoveRelearner_5:
# 209 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_1, MSGBOX_DEFAULT
# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_MoveRelearner_8:
# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearner_7


BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon::
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_0, MSGBOX_DEFAULT
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setmoverelearnerstate VAR_TEMP_2
# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_2
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_1:
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special IsSelectedMonEgg
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_5
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_4:
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special Special_HasMoveToRelearn
# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_8
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_7:
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_3, MSGBOX_DEFAULT
# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TeachMoveRelearnerMove
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_11
BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_10:
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_4, MSGBOX_DEFAULT
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_2:
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_1

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_5:
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_1, MSGBOX_DEFAULT
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_4

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_8:
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_2, MSGBOX_DEFAULT
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_7

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_11:
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon
	goto BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_10


BattleFrontier_OutsideWest_EventScript_friendship::
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_0, MSGBOX_YESNO
# 264 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_friendship_2
BattleFrontier_OutsideWest_EventScript_friendship_1:
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt BattleFrontier_OutsideWest_EventScript_friendship_5
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_2, MSGBOX_DEFAULT
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_friendship_8
BattleFrontier_OutsideWest_EventScript_friendship_7:
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_friendship_11
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose
	return

BattleFrontier_OutsideWest_EventScript_friendship_2:
# 265 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_friendship_1

BattleFrontier_OutsideWest_EventScript_friendship_5:
# 270 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_1, MSGBOX_DEFAULT
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_friendship_8:
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_friendship_7

BattleFrontier_OutsideWest_EventScript_friendship_11:
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_friendship_Text_3, MSGBOX_DEFAULT
# 284 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_FriendshipChoose::
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_0, MSGBOX_DEFAULT
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush Friendship_Text_Highest, MAX_FRIENDSHIP
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultipush Friendship_Text_Lowest, 0
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, MAX_FRIENDSHIP, DYN_MULTICHOICE_CB_NONE
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_2
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_1:
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 301 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_3, GetMonFriendship
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_5
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_4:
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_2, MSGBOX_YESNO
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FriendshipChoose_8
BattleFrontier_OutsideWest_EventScript_FriendshipChoose_7:
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_2
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetMonFriendship
# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 2
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_3, MSGBOX_DEFAULT
# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_2:
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_1

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_5:
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_1, MSGBOX_DEFAULT
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_4

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_8:
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FriendshipDecline
	goto BattleFrontier_OutsideWest_EventScript_FriendshipChoose_7


BattleFrontier_OutsideWest_EventScript_Ability::
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_0, MSGBOX_YESNO
# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_2
BattleFrontier_OutsideWest_EventScript_Ability_1:
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt BattleFrontier_OutsideWest_EventScript_Ability_5
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_2, MSGBOX_DEFAULT
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special ChoosePartyMon
# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_OutsideWest_EventScript_Ability_8
BattleFrontier_OutsideWest_EventScript_Ability_7:
# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_11
# 352 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	specialvar VAR_RESULT, BufferMonOtherAbilities
# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_14
# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_5, MSGBOX_DEFAULT
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_17
BattleFrontier_OutsideWest_EventScript_Ability_16:
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_6, MSGBOX_YESNO
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Ability_20
BattleFrontier_OutsideWest_EventScript_Ability_19:
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special SetAbility
# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, 5
# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special TakeFrontierBattlePoints
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	playse SE_SHOP
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitse
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_7, MSGBOX_DEFAULT
# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_Ability_2:
# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_1

BattleFrontier_OutsideWest_EventScript_Ability_5:
# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_1, MSGBOX_DEFAULT
# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_Ability_8:
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_7

BattleFrontier_OutsideWest_EventScript_Ability_11:
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_3, MSGBOX_DEFAULT
# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_Ability_14:
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_Ability_Text_4, MSGBOX_DEFAULT
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_Ability_17:
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_16

BattleFrontier_OutsideWest_EventScript_Ability_20:
# 368 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_AbilityDecline
	goto BattleFrontier_OutsideWest_EventScript_Ability_19


BattleFrontier_OutsideWest_EventScript_AbilityDecline::
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_AbilityDecline_Text_0, MSGBOX_DEFAULT
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_FriendshipDecline::
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_FriendshipDecline_Text_0, MSGBOX_DEFAULT
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline::
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline_Text_0, MSGBOX_DEFAULT
# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 523 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 527 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 528 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 529 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 531 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 532 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 533 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 535 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 536 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 537 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 538 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 539 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 540 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 541 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 542 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 543 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 544 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 545 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 546 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 547 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 548 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 549 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 550 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 551 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 552 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 553 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 554 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 555 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 556 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 557 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 558 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 559 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 560 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 561 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 562 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 563 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 564 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 565 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 566 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 567 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 568 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 569 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 570 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 571 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 572 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 573 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 574 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 575 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 576 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 577 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 578 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 579 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 580 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 581 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 582 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 583 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 584 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 585 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 586 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 587 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 588 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 589 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 590 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 591 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 592 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 593 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 594 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 595 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 596 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 597 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 598 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 599 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 600 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 601 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 602 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 603 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 604 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 605 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 606 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 607 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 608 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 609 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 610 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 611 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 612 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 613 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 614 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 615 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 616 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 617 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 618 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 619 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 620 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 621 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 622 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 623 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 624 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 625 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 626 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 627 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 628 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 629 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 630 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 631 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 632 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 633 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 634 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 635 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 636 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 637 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 638 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 639 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 640 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 641 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 642 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 643 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 644 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 645 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 646 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 647 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 648 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 649 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 650 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 651 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 652 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 653 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 654 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 655 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 656 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 657 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 658 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 659 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 660 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 661 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 662 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 663 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 664 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 665 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 666 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 667 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 668 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 669 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 670 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 671 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 672 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 673 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 674 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 675 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 676 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 677 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 678 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 679 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 680 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 681 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 682 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 683 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 684 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 685 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 686 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 687 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 688 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 689 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 690 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 691 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 692 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 693 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 694 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 695 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 696 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 697 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 698 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 699 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 700 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 701 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 702 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 703 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 704 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 705 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 706 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 707 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 708 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 709 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 710 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 711 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 712 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 713 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 714 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 715 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 716 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 717 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 718 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 719 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 720 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 721 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 722 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 723 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 724 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 725 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 726 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 727 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 728 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
# 729 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Your path to the invincible superstar!$"
# 730 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 731 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 732 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
# 733 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Seek out the toughest POKéMON!$"
# 734 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 735 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 736 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
# 737 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Choose one of three paths!$"
# 738 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 739 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 740 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
# 741 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "TRAINERS bring their best-raised\n"
# 742 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON for elimination-style matches.$"
# 743 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 744 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 745 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 746 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "May I see your TICKET?$"
# 747 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 748 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 749 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 750 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm terribly sorry.\p"
# 751 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You must have a TICKET to board\n"
# 752 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the ferry.$"
# 753 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 754 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 755 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 756 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 757 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And where would you like to go?$"
# 758 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 759 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 760 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 761 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 762 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 763 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 764 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 765 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 766 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"
# 767 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 768 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 769 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 770 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "departure.$"
# 771 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 772 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 773 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"
# 774 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 775 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 776 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
# 777 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But here…\l"
# 778 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've been useless!$"
# 779 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 780 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 781 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
# 782 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "but I can't find it even though I have\l"
# 783 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a map of the BATTLE FRONTIER.\p"
# 784 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This place is just too big!$"
# 785 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 786 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 787 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
# 788 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "as I arrived here.\p"
# 789 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But on the way, I got seasick…\n"
# 790 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Urrrrp…$"
# 791 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 792 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 793 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
# 794 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "here, you know?\p"
# 795 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Only those TRAINERS who've been\n"
# 796 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "recognized as tough are brought here.\p"
# 797 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's why many TRAINERS don't even\n"
# 798 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "know about the BATTLE FRONTIER.$"
# 799 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 800 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 801 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
# 802 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Are you sure we can make challenges\n"
# 803 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "even if we don't have any POKéMON?$"
# 804 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 805 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 806 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
# 807 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure it'll be okay.\p"
# 808 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I think…\p"
# 809 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But remember that big scary guy?\n"
# 810 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He said, “I'll lend you POKéMON!”$"
# 811 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 812 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 813 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
# 814 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You can rent strong POKéMON there.\p"
# 815 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But it makes me wonder.\n"
# 816 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Who's raising those rental POKéMON?$"
# 817 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 818 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 819 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
# 820 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "PIKE because of SEVIPER…\p"
# 821 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "B-but I came all the way here, so I will\n"
# 822 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "try to conquer everything!\l"
# 823 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "…Shudder…$"
# 824 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 825 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 826 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
# 827 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "One, two, three!\p"
# 828 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 829 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 830 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 831 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
# 832 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I will take the BATTLE PIKE challenge!$"
# 833 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 834 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 835 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 836 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I lost.\p"
# 837 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I guess I'm not very lucky today.\n"
# 838 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll put off my BATTLE PIKE challenge\l"
# 839 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "until tomorrow.$"
# 840 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 841 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 842 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
# 843 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "for some unknown reason, would choose\l"
# 844 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "fishing over battling.\p"
# 845 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? You can't catch anything here?\n"
# 846 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's disappointing…$"
# 847 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 848 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 849 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
# 850 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "matter what, until I get a Symbol.$"
# 851 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 852 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 853 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
# 854 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the BATTLE DOME?\p"
# 855 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll wish you the best of luck.\n"
# 856 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let us both win our way up and meet\l"
# 857 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in challenges.$"
# 858 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 859 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 860 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
# 861 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The BATTLE DOME is here!\l"
# 862 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Go get 'em, Grandpa!$"
# 863 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 864 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 865 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
# 866 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I won't let GENTLEMEN beat me!\p"
# 867 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But where is the entrance?$"
# 868 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 869 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 870 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
# 871 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "that long ago.\p"
# 872 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But, now look at this place! Amazing!\n"
# 873 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll bring my mother out to see this.$"
# 874 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 875 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 876 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
# 877 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "FRONTIER!\p"
# 878 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure to grab attention with\n"
# 879 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "my looks and ability!$"
# 880 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 881 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 882 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
# 883 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It looks like this square's filled with\n"
# 884 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tough people.\p"
# 885 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…$"
# 886 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 887 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 888 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 889 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A while back, I met this older girl\n"
# 890 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "at the BATTLE PIKE.\p"
# 891 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She had these eyes that were scary\n"
# 892 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in a real ornery way.\p"
# 893 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 894 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She got all furious: “Will you quit\n"
# 895 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eating!” Then she whaled on me.\p"
# 896 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It was a hair-raising kind of\n"
# 897 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "scary experience, sure enough.\p"
# 898 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…$"
# 899 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 900 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 901 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
# 902 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's nothing!\p"
# 903 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Why, the last time I cheered for him,\n"
# 904 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "our eyes met and sparks flew!$"
# 905 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 906 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 907 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
# 908 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pfft!\p"
# 909 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That only happened because\n"
# 910 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I happened to be sitting next to you!\p"
# 911 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE only looked our way\n"
# 912 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "because my cheering was so loud!$"
# 913 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 914 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 915 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
# 916 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Keep that racket down!\p"
# 917 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You fair-weather fans should stick\n"
# 918 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to cheering for some GYM LEADER!\p"
# 919 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE is mine!\n"
# 920 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The only idol for me!$"
# 921 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 922 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 923 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
# 924 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's hard to believe, but they once\n"
# 925 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "were TRAINERS, and good ones, too.\p"
# 926 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They used to be incredibly tough,\n"
# 927 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "and they were famous, too.\p"
# 928 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But they were obliterated by this\n"
# 929 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "certain TRAINER at a tournament.\p"
# 930 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They were so thoroughly whipped,\n"
# 931 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "they became smitten by the TRAINER.\p"
# 932 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Now they're just fans of the TRAINER.\n"
# 933 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They go cheer for their idol at the\l"
# 934 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "BATTLE DOME every day now.$"
# 935 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 936 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 937 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
# 938 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a POKéMON with an unusually long tail\l"
# 939 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "somewhere in the BATTLE FRONTIER.\p"
# 940 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It must be adorable. I'm sure of it…\p"
# 941 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, challenges can wait. I feel driven\n"
# 942 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
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
	.string "Hold on! That's the nature your POKéMON\n"
	.string "already has! I can't take your Battle\l"
	.string "Points for doing nothing. Pick a\l"
	.string "different one!$"

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

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_0:
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehehe! That's ALREADY that stat's\n"
	.string "potential! I can't take your Battle\l"
	.string "Points to rewrite what's already\l"
	.string "written! Pick a different number.$"

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_1:
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1}, is it? That'll be 5\n"
	.string "Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_IVManiacChooseValue_Text_2:
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehehe... It is done! Your POKéMON will\n"
	.string "never be the same!$"

BattleFrontier_OutsideWest_EventScript_IVManiacDecline_Text_0:
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ehehe... Scared of a little potential?\n"
	.string "Come back anytime.$"

BattleFrontier_OutsideWest_EventScript_NatureManiacDecline_Text_0:
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, fine. Come back if you change your\n"
	.string "mind!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_0:
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the MOVE TUTOR. I know all the moves\n"
	.string "that POKéMON learn--every one of\l"
	.string "them--and I can teach POKéMON those\l"
	.string "moves. My fee is 2 Battle Points per\l"
	.string "move. Want me to teach a move?$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_1:
# 209 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hmm... You're short on Battle Points.\n"
	.string "Come back when you have at least 2!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearner_Text_2:
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "What kind of move should I teach?$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_0:
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_1:
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG doesn't know any moves! Pick\n"
	.string "another POKéMON.$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_2:
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sorry, I don't have any move I can teach\n"
	.string "that POKéMON.$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_3:
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which move should I teach?$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerChooseMon_Text_4:
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's 2 Battle Points, thank you! Come\n"
	.string "back whenever you need another move!$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_0:
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Heehee! POKéMON hearts are putty in my\n"
	.string "hands! For 2 Battle Points, I'll make\l"
	.string "your POKéMON adore you... or utterly\l"
	.string "despise you! Interested?$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_1:
# 270 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Aww... You don't have enough Battle\n"
	.string "Points. Come back when you have at\l"
	.string "least 2!$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_2:
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which POKéMON's heart shall I meddle\n"
	.string "with?$"

BattleFrontier_OutsideWest_EventScript_friendship_Text_3:
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG can't love anyone yet! Silly!$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_0:
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Shall I fill its heart with love, or drain\n"
	.string "it dry?$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_1:
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Heehee! Its friendship is ALREADY\n"
	.string "there! I can't take your Battle Points\l"
	.string "for that!$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_2:
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That'll be 2 Battle Points. Ready?$"

BattleFrontier_OutsideWest_EventScript_FriendshipChoose_Text_3:
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Heehee... It is done! Your POKéMON will\n"
	.string "never feel the same about you again!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_0:
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Every POKéMON has untapped talents!\n"
	.string "For 5 Battle Points, I'll bring out a\l"
	.string "different ability--even a hidden one,\l"
	.string "if your POKéMON has it in them!\l"
	.string "Interested?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_1:
# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sorry, friend. It's 5 Battle\n"
	.string "Points--come back when you've got\l"
	.string "them!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_2:
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Which POKéMON should I work with?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_3:
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "An EGG's talents haven't even hatched\n"
	.string "yet!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_4:
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hmm... {STR_VAR_1} is the only ability\n"
	.string "that POKéMON can ever have. There's\l"
	.string "nothing for me to do!$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_5:
# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Right now its ability is {STR_VAR_1}.\n"
	.string "Which ability should I bring out?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_6:
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Good choice! That'll be 5 Battle Points.\n"
	.string "Ready?$"

BattleFrontier_OutsideWest_EventScript_Ability_Text_7:
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There! Your POKéMON's new talent is\n"
	.string "shining through! Come back anytime!$"

BattleFrontier_OutsideWest_EventScript_AbilityDecline_Text_0:
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "No worries! Come back if you ever want\n"
	.string "to try a new talent!$"

BattleFrontier_OutsideWest_EventScript_FriendshipDecline_Text_0:
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Heehee, come back when you're ready to\n"
	.string "toy with some feelings!$"

BattleFrontier_OutsideWest_EventScript_MoveRelearnerDecline_Text_0:
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Come back if a move ever slips your\n"
	.string "POKéMON's mind!$"

IVManiac_Text_HP::
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "HP$"

IVManiac_Text_Attack::
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Attack$"

IVManiac_Text_Defense::
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Defense$"

IVManiac_Text_SpAtk::
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sp. Atk$"

IVManiac_Text_SpDef::
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sp. Def$"

IVManiac_Text_Speed::
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Speed$"

IVManiac_Text_Number::
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{STR_VAR_1}$"

FrontierTutor_Text_LevelUpMoves::
# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Level-up moves$"

FrontierTutor_Text_EggMoves::
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Egg moves$"

FrontierTutor_Text_TutorMoves::
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Tutor moves$"

Friendship_Text_Highest::
# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Highest$"

Friendship_Text_Lowest::
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lowest$"

NatureManiac_Text_Hardy::
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hardy$"

NatureManiac_Text_Lonely::
# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lonely$"

NatureManiac_Text_Brave::
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Brave$"

NatureManiac_Text_Adamant::
# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Adamant$"

NatureManiac_Text_Naughty::
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naughty$"

NatureManiac_Text_Bold::
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bold$"

NatureManiac_Text_Docile::
# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Docile$"

NatureManiac_Text_Relaxed::
# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Relaxed$"

NatureManiac_Text_Impish::
# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Impish$"

NatureManiac_Text_Lax::
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lax$"

NatureManiac_Text_Timid::
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Timid$"

NatureManiac_Text_Hasty::
# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hasty$"

NatureManiac_Text_Serious::
# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Serious$"

NatureManiac_Text_Jolly::
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Jolly$"

NatureManiac_Text_Naive::
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Naive$"

NatureManiac_Text_Modest::
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Modest$"

NatureManiac_Text_Mild::
# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mild$"

NatureManiac_Text_Quiet::
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quiet$"

NatureManiac_Text_Bashful::
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bashful$"

NatureManiac_Text_Rash::
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Rash$"

NatureManiac_Text_Calm::
# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Calm$"

NatureManiac_Text_Gentle::
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Gentle$"

NatureManiac_Text_Sassy::
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sassy$"

NatureManiac_Text_Careful::
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Careful$"

NatureManiac_Text_Quirky::
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quirky$"
