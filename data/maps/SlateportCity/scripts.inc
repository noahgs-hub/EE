SlateportCity_EventScript_Abilityclerk::
# 2 "data/maps/SlateportCity/scripts.pory"
	lock
# 3 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 4 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_Abilityclerk_Text_0, MSGBOX_DEFAULT
# 5 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkMenu
	return


SlateportCity_EventScript_AbilityClerkMenu::
# 9 "data/maps/SlateportCity/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, AbilityClerk_Text_MenuShop, AbilityClerk_Text_MenuNature, AbilityClerk_Text_MenuExit
# 13 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SlateportCity_EventScript_AbilityClerkMenu_2
SlateportCity_EventScript_AbilityClerkMenu_1:
# 16 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SlateportCity_EventScript_AbilityClerkMenu_5
SlateportCity_EventScript_AbilityClerkMenu_4:
# 19 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_EventScript_AbilityClerkMenu_8
SlateportCity_EventScript_AbilityClerkMenu_7:
# 22 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_AbilityClerkShopIntro
# 23 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 24 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_AbilityClerk
# 25 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkMenu_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkMenu
	return

SlateportCity_EventScript_AbilityClerkMenu_2:
# 14 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkGoodbye
	goto SlateportCity_EventScript_AbilityClerkMenu_1

SlateportCity_EventScript_AbilityClerkMenu_5:
# 17 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkGoodbye
	goto SlateportCity_EventScript_AbilityClerkMenu_4

SlateportCity_EventScript_AbilityClerkMenu_8:
# 20 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkNature
	goto SlateportCity_EventScript_AbilityClerkMenu_7


SlateportCity_EventScript_AbilityClerkNature::
# 30 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DAILY_ABILITY_CLERK_NATURE, SlateportCity_EventScript_AbilityClerkNature_2
# 35 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkNature_Text_1, MSGBOX_YESNO
# 36 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_EventScript_AbilityClerkNature_5
SlateportCity_EventScript_AbilityClerkNature_4:
# 40 "data/maps/SlateportCity/scripts.pory"
	checkmoney 10000
# 41 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_EventScript_AbilityClerkNature_8
# 47 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkNature_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/SlateportCity/scripts.pory"
	special ChoosePartyMon
# 49 "data/maps/SlateportCity/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge SlateportCity_EventScript_AbilityClerkNature_11
SlateportCity_EventScript_AbilityClerkNature_10:
# 53 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonEgg
# 54 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_EventScript_AbilityClerkNature_14
# 60 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_TEMP_3, GetMonRealNature
# 61 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkNature_Text_5, MSGBOX_DEFAULT
# 62 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkChooseNature
	return

SlateportCity_EventScript_AbilityClerkNature_2:
# 31 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkNature_Text_0, MSGBOX_DEFAULT
# 32 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_AbilityClerkNature_5:
# 37 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkGoodbye
	goto SlateportCity_EventScript_AbilityClerkNature_4

SlateportCity_EventScript_AbilityClerkNature_8:
# 42 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkNature_Text_2, MSGBOX_DEFAULT
# 43 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_AbilityClerkNature_11:
# 50 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkGoodbye
	goto SlateportCity_EventScript_AbilityClerkNature_10

SlateportCity_EventScript_AbilityClerkNature_14:
# 55 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkNature_Text_4, MSGBOX_DEFAULT
# 56 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_AbilityClerkChooseNature::
# 66 "data/maps/SlateportCity/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, VAR_TEMP_3, DYN_MULTICHOICE_CB_NONE, NatureManiac_Text_Hardy, NatureManiac_Text_Lonely, NatureManiac_Text_Brave, NatureManiac_Text_Adamant, NatureManiac_Text_Naughty, NatureManiac_Text_Bold, NatureManiac_Text_Docile, NatureManiac_Text_Relaxed, NatureManiac_Text_Impish, NatureManiac_Text_Lax, NatureManiac_Text_Timid, NatureManiac_Text_Hasty, NatureManiac_Text_Serious, NatureManiac_Text_Jolly, NatureManiac_Text_Naive, NatureManiac_Text_Modest, NatureManiac_Text_Mild, NatureManiac_Text_Quiet, NatureManiac_Text_Bashful, NatureManiac_Text_Rash, NatureManiac_Text_Calm, NatureManiac_Text_Gentle, NatureManiac_Text_Sassy, NatureManiac_Text_Careful, NatureManiac_Text_Quirky
# 92 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SlateportCity_EventScript_AbilityClerkChooseNature_2
SlateportCity_EventScript_AbilityClerkChooseNature_1:
# 95 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 97 "data/maps/SlateportCity/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_eq SlateportCity_EventScript_AbilityClerkChooseNature_5
SlateportCity_EventScript_AbilityClerkChooseNature_4:
# 102 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkChooseNature_Text_1, MSGBOX_YESNO
# 103 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_EventScript_AbilityClerkChooseNature_8
SlateportCity_EventScript_AbilityClerkChooseNature_7:
# 107 "data/maps/SlateportCity/scripts.pory"
	removemoney 10000
# 108 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_2
# 109 "data/maps/SlateportCity/scripts.pory"
	special ChangeMonNature
# 110 "data/maps/SlateportCity/scripts.pory"
	playse SE_SHOP
# 111 "data/maps/SlateportCity/scripts.pory"
	waitse
# 112 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_DAILY_ABILITY_CLERK_NATURE
# 113 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkChooseNature_Text_2, MSGBOX_DEFAULT
# 114 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_AbilityClerkChooseNature_2:
# 93 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkGoodbye
	goto SlateportCity_EventScript_AbilityClerkChooseNature_1

SlateportCity_EventScript_AbilityClerkChooseNature_5:
# 98 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkChooseNature_Text_0, MSGBOX_DEFAULT
# 99 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkChooseNature
	goto SlateportCity_EventScript_AbilityClerkChooseNature_4

SlateportCity_EventScript_AbilityClerkChooseNature_8:
# 104 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_AbilityClerkGoodbye
	goto SlateportCity_EventScript_AbilityClerkChooseNature_7


SlateportCity_EventScript_AbilityClerkGoodbye::
# 119 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AbilityClerkGoodbye_Text_0, MSGBOX_DEFAULT
# 120 "data/maps/SlateportCity/scripts.pory"
	release
	end


# 140 "data/maps/SlateportCity/scripts.pory"

# 141 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 142 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_AbilityClerk:
# 143 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 144 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 145 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 146 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 147 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 148 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 149 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 150 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 151 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 152 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 156 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend

# 159 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 160 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 161 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 162 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 163 "data/maps/SlateportCity/scripts.pory"

# 164 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 165 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 166 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 167 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_ReconcileDiegoEvent
# 168 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 169 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 170 "data/maps/SlateportCity/scripts.pory"
	end
# 171 "data/maps/SlateportCity/scripts.pory"

# 172 "data/maps/SlateportCity/scripts.pory"
@ Diego/Abuela visibility is derived from the event state var every map entry, so
# 173 "data/maps/SlateportCity/scripts.pory"
@ stale flag bits in an existing save cannot hide them incorrectly. The ICE cops are
# 174 "data/maps/SlateportCity/scripts.pory"
@ force-hidden on every entry; they only appear mid-cutscene via addobject.
# 175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReconcileDiegoEvent::
# 176 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_ICE_COPS
# 177 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_DIEGO_STATE, 1, SlateportCity_EventScript_HideDiegoAbuela
# 178 "data/maps/SlateportCity/scripts.pory"
	call_if_ne VAR_SLATEPORT_DIEGO_STATE, 1, SlateportCity_EventScript_ShowDiegoAbuela
# 179 "data/maps/SlateportCity/scripts.pory"
	return
# 180 "data/maps/SlateportCity/scripts.pory"

# 181 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HideDiegoAbuela::
# 182 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_DIEGO_EVENT
# 183 "data/maps/SlateportCity/scripts.pory"
	return
# 184 "data/maps/SlateportCity/scripts.pory"

# 185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ShowDiegoAbuela::
# 186 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_DIEGO_STATE, 0
# 187 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_DIEGO_EVENT
# 188 "data/maps/SlateportCity/scripts.pory"
	return
# 189 "data/maps/SlateportCity/scripts.pory"

# 190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 191 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 192 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 193 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 194 "data/maps/SlateportCity/scripts.pory"
	return
# 195 "data/maps/SlateportCity/scripts.pory"

# 196 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 197 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 198 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 199 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 200 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 201 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 202 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 203 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 204 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 205 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 206 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 207 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 208 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 209 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 210 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 211 "data/maps/SlateportCity/scripts.pory"
	return
# 212 "data/maps/SlateportCity/scripts.pory"

# 213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 214 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 215 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 216 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 217 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 218 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 219 "data/maps/SlateportCity/scripts.pory"
	return
# 220 "data/maps/SlateportCity/scripts.pory"

# 221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 222 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 223 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 224 "data/maps/SlateportCity/scripts.pory"
	return
# 225 "data/maps/SlateportCity/scripts.pory"

# 226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 227 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 228 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 229 "data/maps/SlateportCity/scripts.pory"

# 230 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 231 "data/maps/SlateportCity/scripts.pory"
	lockall
# 232 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 233 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 234 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 235 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 236 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 237 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 238 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 239 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 240 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 241 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 242 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 243 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 244 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 245 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 246 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 247 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 248 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 249 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 250 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 251 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 252 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 253 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 254 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 255 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 256 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 257 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 258 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 259 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 260 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 261 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 262 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 263 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 264 "data/maps/SlateportCity/scripts.pory"
	end
# 265 "data/maps/SlateportCity/scripts.pory"

# 266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 267 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 268 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 269 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 270 "data/maps/SlateportCity/scripts.pory"
	step_end
# 271 "data/maps/SlateportCity/scripts.pory"

# 272 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 273 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 274 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 275 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 276 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 277 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 278 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 279 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 280 "data/maps/SlateportCity/scripts.pory"
	step_end
# 281 "data/maps/SlateportCity/scripts.pory"

# 282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 283 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 284 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 285 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 286 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 287 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 288 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 289 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 290 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 291 "data/maps/SlateportCity/scripts.pory"
	step_end
# 292 "data/maps/SlateportCity/scripts.pory"

# 293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 294 "data/maps/SlateportCity/scripts.pory"
	lock
# 295 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 296 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 297 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 298 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 299 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 300 "data/maps/SlateportCity/scripts.pory"
	release
# 301 "data/maps/SlateportCity/scripts.pory"
	end
# 302 "data/maps/SlateportCity/scripts.pory"

# 303 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 305 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 306 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 307 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 308 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 309 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 310 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 311 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 312 "data/maps/SlateportCity/scripts.pory"

# 313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 314 "data/maps/SlateportCity/scripts.pory"
	lock
# 315 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 316 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 317 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 318 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 319 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 320 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 321 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 322 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 323 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 324 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 325 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 326 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 327 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 328 "data/maps/SlateportCity/scripts.pory"
	release
# 329 "data/maps/SlateportCity/scripts.pory"
	end
# 330 "data/maps/SlateportCity/scripts.pory"

# 331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 332 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 333 "data/maps/SlateportCity/scripts.pory"
	release
# 334 "data/maps/SlateportCity/scripts.pory"
	end
# 335 "data/maps/SlateportCity/scripts.pory"

# 336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 337 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 338 "data/maps/SlateportCity/scripts.pory"
	release
# 339 "data/maps/SlateportCity/scripts.pory"
	end
# 340 "data/maps/SlateportCity/scripts.pory"

# 341 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 342 "data/maps/SlateportCity/scripts.pory"
	lock
# 343 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 344 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 345 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 346 "data/maps/SlateportCity/scripts.pory"
	release
# 347 "data/maps/SlateportCity/scripts.pory"
	end
# 348 "data/maps/SlateportCity/scripts.pory"

# 349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 350 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 351 "data/maps/SlateportCity/scripts.pory"
	release
# 352 "data/maps/SlateportCity/scripts.pory"
	end
# 353 "data/maps/SlateportCity/scripts.pory"

# 354 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 355 "data/maps/SlateportCity/scripts.pory"
	lock
# 356 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 357 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 358 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 359 "data/maps/SlateportCity/scripts.pory"
	release
# 360 "data/maps/SlateportCity/scripts.pory"
	end
# 361 "data/maps/SlateportCity/scripts.pory"

# 362 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 363 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 364 "data/maps/SlateportCity/scripts.pory"
	release
# 365 "data/maps/SlateportCity/scripts.pory"
	end
# 366 "data/maps/SlateportCity/scripts.pory"

# 367 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 368 "data/maps/SlateportCity/scripts.pory"
	lock
# 369 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 370 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 371 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 372 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 373 "data/maps/SlateportCity/scripts.pory"
	release
# 374 "data/maps/SlateportCity/scripts.pory"
	end
# 375 "data/maps/SlateportCity/scripts.pory"

# 376 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 377 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 378 "data/maps/SlateportCity/scripts.pory"
	release
# 379 "data/maps/SlateportCity/scripts.pory"
	end
# 380 "data/maps/SlateportCity/scripts.pory"

# 381 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 382 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 383 "data/maps/SlateportCity/scripts.pory"
	release
# 384 "data/maps/SlateportCity/scripts.pory"
	end
# 385 "data/maps/SlateportCity/scripts.pory"

# 386 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 387 "data/maps/SlateportCity/scripts.pory"
	lock
# 388 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 389 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 390 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 391 "data/maps/SlateportCity/scripts.pory"
	release
# 392 "data/maps/SlateportCity/scripts.pory"
	end
# 393 "data/maps/SlateportCity/scripts.pory"

# 394 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 395 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 396 "data/maps/SlateportCity/scripts.pory"
	release
# 397 "data/maps/SlateportCity/scripts.pory"
	end
# 398 "data/maps/SlateportCity/scripts.pory"

# 399 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 400 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 401 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 402 "data/maps/SlateportCity/scripts.pory"
	end
# 403 "data/maps/SlateportCity/scripts.pory"

# 404 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 405 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 406 "data/maps/SlateportCity/scripts.pory"
	end
# 407 "data/maps/SlateportCity/scripts.pory"

# 408 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 409 "data/maps/SlateportCity/scripts.pory"
	lock
# 410 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 411 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 412 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 413 "data/maps/SlateportCity/scripts.pory"
	release
# 414 "data/maps/SlateportCity/scripts.pory"
	end
# 415 "data/maps/SlateportCity/scripts.pory"

# 416 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 417 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 418 "data/maps/SlateportCity/scripts.pory"
	release
# 419 "data/maps/SlateportCity/scripts.pory"
	end
# 420 "data/maps/SlateportCity/scripts.pory"

# 421 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 422 "data/maps/SlateportCity/scripts.pory"
	lock
# 423 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 424 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 425 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 426 "data/maps/SlateportCity/scripts.pory"
	release
# 427 "data/maps/SlateportCity/scripts.pory"
	end
# 428 "data/maps/SlateportCity/scripts.pory"

# 429 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 430 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 431 "data/maps/SlateportCity/scripts.pory"
	release
# 432 "data/maps/SlateportCity/scripts.pory"
	end
# 433 "data/maps/SlateportCity/scripts.pory"

# 434 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 435 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 436 "data/maps/SlateportCity/scripts.pory"
	end
# 437 "data/maps/SlateportCity/scripts.pory"

# 438 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 439 "data/maps/SlateportCity/scripts.pory"
	lockall
# 440 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 441 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 442 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 443 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 444 "data/maps/SlateportCity/scripts.pory"
	end
# 445 "data/maps/SlateportCity/scripts.pory"

# 446 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 447 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 448 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 449 "data/maps/SlateportCity/scripts.pory"
	end
# 450 "data/maps/SlateportCity/scripts.pory"

# 451 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 452 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 453 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 454 "data/maps/SlateportCity/scripts.pory"
	end
# 455 "data/maps/SlateportCity/scripts.pory"

# 456 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 457 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 458 "data/maps/SlateportCity/scripts.pory"
	end
# 459 "data/maps/SlateportCity/scripts.pory"

# 460 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 461 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 462 "data/maps/SlateportCity/scripts.pory"
	end
# 463 "data/maps/SlateportCity/scripts.pory"

# 464 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 465 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 466 "data/maps/SlateportCity/scripts.pory"
	end
# 467 "data/maps/SlateportCity/scripts.pory"

# 468 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 469 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 470 "data/maps/SlateportCity/scripts.pory"
	end
# 471 "data/maps/SlateportCity/scripts.pory"

# 472 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 473 "data/maps/SlateportCity/scripts.pory"
	lockall
# 474 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 475 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 476 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 477 "data/maps/SlateportCity/scripts.pory"
	end
# 478 "data/maps/SlateportCity/scripts.pory"

# 479 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 480 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 481 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 482 "data/maps/SlateportCity/scripts.pory"
	end
# 483 "data/maps/SlateportCity/scripts.pory"

# 484 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 485 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 486 "data/maps/SlateportCity/scripts.pory"
	end
# 487 "data/maps/SlateportCity/scripts.pory"

# 488 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 489 "data/maps/SlateportCity/scripts.pory"
	lock
# 490 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 491 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 492 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 493 "data/maps/SlateportCity/scripts.pory"
	release
# 494 "data/maps/SlateportCity/scripts.pory"
	end
# 495 "data/maps/SlateportCity/scripts.pory"

# 496 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 497 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 498 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 499 "data/maps/SlateportCity/scripts.pory"
	release
# 500 "data/maps/SlateportCity/scripts.pory"
	end
# 501 "data/maps/SlateportCity/scripts.pory"

# 502 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 503 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 504 "data/maps/SlateportCity/scripts.pory"
	end
# 505 "data/maps/SlateportCity/scripts.pory"

# 506 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 507 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 508 "data/maps/SlateportCity/scripts.pory"
	end
# 509 "data/maps/SlateportCity/scripts.pory"

# 510 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 511 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 512 "data/maps/SlateportCity/scripts.pory"
	end
# 513 "data/maps/SlateportCity/scripts.pory"

# 514 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 515 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 516 "data/maps/SlateportCity/scripts.pory"
	end
# 517 "data/maps/SlateportCity/scripts.pory"

# 518 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 519 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 520 "data/maps/SlateportCity/scripts.pory"
	end
# 521 "data/maps/SlateportCity/scripts.pory"

# 522 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 523 "data/maps/SlateportCity/scripts.pory"
	lock
# 524 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 525 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 526 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 527 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 528 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/SlateportCity/scripts.pory"
	release
# 530 "data/maps/SlateportCity/scripts.pory"
	end
# 531 "data/maps/SlateportCity/scripts.pory"

# 532 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 533 "data/maps/SlateportCity/scripts.pory"
	lock
# 534 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 535 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 536 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 537 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 538 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/SlateportCity/scripts.pory"
	release
# 540 "data/maps/SlateportCity/scripts.pory"
	end
# 541 "data/maps/SlateportCity/scripts.pory"

# 542 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 543 "data/maps/SlateportCity/scripts.pory"
	lock
# 544 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 545 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 546 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 547 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 548 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/SlateportCity/scripts.pory"
	release
# 550 "data/maps/SlateportCity/scripts.pory"
	end
# 551 "data/maps/SlateportCity/scripts.pory"

# 552 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 553 "data/maps/SlateportCity/scripts.pory"
	lock
# 554 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 555 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 556 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 557 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 558 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/SlateportCity/scripts.pory"
	release
# 560 "data/maps/SlateportCity/scripts.pory"
	end
# 561 "data/maps/SlateportCity/scripts.pory"

# 562 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 563 "data/maps/SlateportCity/scripts.pory"
	lock
# 564 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 565 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 566 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 567 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 568 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 569 "data/maps/SlateportCity/scripts.pory"
	release
# 570 "data/maps/SlateportCity/scripts.pory"
	end
# 571 "data/maps/SlateportCity/scripts.pory"

# 572 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 573 "data/maps/SlateportCity/scripts.pory"
	lock
# 574 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 575 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 576 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 577 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 578 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 579 "data/maps/SlateportCity/scripts.pory"
	release
# 580 "data/maps/SlateportCity/scripts.pory"
	end
# 581 "data/maps/SlateportCity/scripts.pory"

# 582 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 583 "data/maps/SlateportCity/scripts.pory"
	lock
# 584 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 585 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 586 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 587 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 588 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/SlateportCity/scripts.pory"
	release
# 590 "data/maps/SlateportCity/scripts.pory"
	end
# 591 "data/maps/SlateportCity/scripts.pory"

# 592 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 593 "data/maps/SlateportCity/scripts.pory"
	lock
# 594 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 595 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 596 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 597 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 598 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 599 "data/maps/SlateportCity/scripts.pory"
	release
# 600 "data/maps/SlateportCity/scripts.pory"
	end
# 601 "data/maps/SlateportCity/scripts.pory"

# 602 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 603 "data/maps/SlateportCity/scripts.pory"
	lock
# 604 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 605 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 606 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 607 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 609 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 611 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 612 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 613 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 615 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 616 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 617 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 618 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 619 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 620 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 621 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 623 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 624 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 625 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 626 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 627 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 629 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 631 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/SlateportCity/scripts.pory"
	release
# 633 "data/maps/SlateportCity/scripts.pory"
	end
# 634 "data/maps/SlateportCity/scripts.pory"

# 635 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 636 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 637 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 638 "data/maps/SlateportCity/scripts.pory"
	step_end
# 639 "data/maps/SlateportCity/scripts.pory"

# 640 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 641 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 642 "data/maps/SlateportCity/scripts.pory"
	end
# 643 "data/maps/SlateportCity/scripts.pory"

# 644 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 645 "data/maps/SlateportCity/scripts.pory"
	lock
# 646 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 647 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 648 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 649 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 650 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/SlateportCity/scripts.pory"
	release
# 652 "data/maps/SlateportCity/scripts.pory"
	end
# 653 "data/maps/SlateportCity/scripts.pory"

# 654 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 655 "data/maps/SlateportCity/scripts.pory"
	lock
# 656 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 657 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 658 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 659 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 660 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 661 "data/maps/SlateportCity/scripts.pory"
	release
# 662 "data/maps/SlateportCity/scripts.pory"
	end
# 663 "data/maps/SlateportCity/scripts.pory"

# 664 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 665 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 666 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 667 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 668 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 669 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 670 "data/maps/SlateportCity/scripts.pory"

# 671 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 672 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 673 "data/maps/SlateportCity/scripts.pory"
	release
# 674 "data/maps/SlateportCity/scripts.pory"
	end
# 675 "data/maps/SlateportCity/scripts.pory"

# 676 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 677 "data/maps/SlateportCity/scripts.pory"
	lock
# 678 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 679 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 680 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 681 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 682 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 683 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 684 "data/maps/SlateportCity/scripts.pory"
	release
# 685 "data/maps/SlateportCity/scripts.pory"
	end
# 686 "data/maps/SlateportCity/scripts.pory"

# 687 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 688 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 689 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 690 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 691 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 692 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 693 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 694 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 695 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 696 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 697 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 698 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 699 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 700 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 701 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 702 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 703 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 704 "data/maps/SlateportCity/scripts.pory"

# 705 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 706 "data/maps/SlateportCity/scripts.pory"
	lock
# 707 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 708 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 709 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 710 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 711 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 712 "data/maps/SlateportCity/scripts.pory"
	release
# 713 "data/maps/SlateportCity/scripts.pory"
	end
# 714 "data/maps/SlateportCity/scripts.pory"

# 715 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 716 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 717 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 718 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 719 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 720 "data/maps/SlateportCity/scripts.pory"

# 721 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 722 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 723 "data/maps/SlateportCity/scripts.pory"
	lockall
# 724 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 725 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 726 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 727 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 728 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 730 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 731 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 733 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 734 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 735 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 736 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 737 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 739 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 740 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 741 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 742 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 744 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 745 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 746 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 747 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 748 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 749 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 750 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 751 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 752 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 753 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 754 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 755 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 756 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 757 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 758 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 759 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 760 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 761 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 763 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 764 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 765 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 766 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 767 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 768 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 769 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 770 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 771 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 772 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 773 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 774 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 775 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 776 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 777 "data/maps/SlateportCity/scripts.pory"
	end
# 778 "data/maps/SlateportCity/scripts.pory"

# 779 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 780 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 781 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 782 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 783 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 784 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 785 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 786 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 787 "data/maps/SlateportCity/scripts.pory"
	step_end
# 788 "data/maps/SlateportCity/scripts.pory"

# 789 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 790 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 791 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 792 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 793 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 794 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 795 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 796 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 797 "data/maps/SlateportCity/scripts.pory"
	step_end
# 798 "data/maps/SlateportCity/scripts.pory"

# 799 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 800 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 801 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 802 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 803 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 804 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 805 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 806 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 807 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 808 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 809 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 810 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 811 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 812 "data/maps/SlateportCity/scripts.pory"
	step_end
# 813 "data/maps/SlateportCity/scripts.pory"

# 814 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 815 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 816 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 817 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 818 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 819 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 820 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 821 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 822 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 823 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 824 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 825 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 826 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 827 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 828 "data/maps/SlateportCity/scripts.pory"
	step_end
# 829 "data/maps/SlateportCity/scripts.pory"

# 830 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 831 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 832 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 833 "data/maps/SlateportCity/scripts.pory"
	step_end
# 834 "data/maps/SlateportCity/scripts.pory"

# 835 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 836 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 837 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 838 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 839 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 840 "data/maps/SlateportCity/scripts.pory"
	step_end
# 841 "data/maps/SlateportCity/scripts.pory"

# 842 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 843 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 844 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 845 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 846 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 847 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 848 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 849 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 850 "data/maps/SlateportCity/scripts.pory"
	step_end
# 851 "data/maps/SlateportCity/scripts.pory"

# 852 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 853 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 854 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 855 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 856 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 857 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 858 "data/maps/SlateportCity/scripts.pory"
	step_end
# 859 "data/maps/SlateportCity/scripts.pory"

# 860 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 861 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 862 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 863 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 864 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 865 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 866 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 867 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 868 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 869 "data/maps/SlateportCity/scripts.pory"
	step_end
# 870 "data/maps/SlateportCity/scripts.pory"

# 871 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 872 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 873 "data/maps/SlateportCity/scripts.pory"
	end
# 874 "data/maps/SlateportCity/scripts.pory"

# 875 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 876 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 877 "data/maps/SlateportCity/scripts.pory"
	end
# 878 "data/maps/SlateportCity/scripts.pory"

# 879 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 880 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 881 "data/maps/SlateportCity/scripts.pory"
	end
# 882 "data/maps/SlateportCity/scripts.pory"

# 883 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 884 "data/maps/SlateportCity/scripts.pory"
	lock
# 885 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 886 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 887 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 888 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 889 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 890 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 891 "data/maps/SlateportCity/scripts.pory"
	release
# 892 "data/maps/SlateportCity/scripts.pory"
	end
# 893 "data/maps/SlateportCity/scripts.pory"

# 894 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 895 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 896 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 897 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 898 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 899 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 900 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 901 "data/maps/SlateportCity/scripts.pory"
	end
# 902 "data/maps/SlateportCity/scripts.pory"

# 903 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 904 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 905 "data/maps/SlateportCity/scripts.pory"
	release
# 906 "data/maps/SlateportCity/scripts.pory"
	end
# 907 "data/maps/SlateportCity/scripts.pory"

# 908 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 909 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 910 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 911 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 912 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 913 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 914 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 915 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 916 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 917 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 918 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 919 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 920 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 921 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 922 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 923 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 924 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 925 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 926 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 927 "data/maps/SlateportCity/scripts.pory"
	end
# 928 "data/maps/SlateportCity/scripts.pory"

# 929 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 930 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 931 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 932 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 933 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 934 "data/maps/SlateportCity/scripts.pory"
	end
# 935 "data/maps/SlateportCity/scripts.pory"

# 936 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 937 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 938 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 939 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 940 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 941 "data/maps/SlateportCity/scripts.pory"
	end
# 942 "data/maps/SlateportCity/scripts.pory"

# 943 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 944 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 945 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 946 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 947 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 948 "data/maps/SlateportCity/scripts.pory"
	end
# 949 "data/maps/SlateportCity/scripts.pory"

# 950 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 951 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 952 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 953 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 954 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 955 "data/maps/SlateportCity/scripts.pory"
	end
# 956 "data/maps/SlateportCity/scripts.pory"

# 957 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 958 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 959 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 960 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 961 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 962 "data/maps/SlateportCity/scripts.pory"
	end
# 963 "data/maps/SlateportCity/scripts.pory"

# 964 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 965 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 966 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 967 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 968 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 969 "data/maps/SlateportCity/scripts.pory"
	end
# 970 "data/maps/SlateportCity/scripts.pory"

# 971 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 972 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 973 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 974 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 975 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 976 "data/maps/SlateportCity/scripts.pory"
	end
# 977 "data/maps/SlateportCity/scripts.pory"

# 978 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 979 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 980 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 981 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 982 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 983 "data/maps/SlateportCity/scripts.pory"
	end
# 984 "data/maps/SlateportCity/scripts.pory"

# 985 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 986 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 987 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 988 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 989 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 990 "data/maps/SlateportCity/scripts.pory"
	end
# 991 "data/maps/SlateportCity/scripts.pory"

# 992 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 993 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 994 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 995 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 996 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 997 "data/maps/SlateportCity/scripts.pory"
	end
# 998 "data/maps/SlateportCity/scripts.pory"

# 999 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 1000 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 1001 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 1002 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 1003 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1004 "data/maps/SlateportCity/scripts.pory"
	end
# 1005 "data/maps/SlateportCity/scripts.pory"

# 1006 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 1007 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 1008 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1009 "data/maps/SlateportCity/scripts.pory"
	release
# 1010 "data/maps/SlateportCity/scripts.pory"
	end
# 1011 "data/maps/SlateportCity/scripts.pory"

# 1012 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1013 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1014 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 1015 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1016 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1017 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 1018 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1019 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1020 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1021 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1022 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1023 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1024 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 1025 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1026 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1027 "data/maps/SlateportCity/scripts.pory"
	release
# 1028 "data/maps/SlateportCity/scripts.pory"
	end
# 1029 "data/maps/SlateportCity/scripts.pory"

# 1030 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1031 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1032 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1033 "data/maps/SlateportCity/scripts.pory"
	release
# 1034 "data/maps/SlateportCity/scripts.pory"
	end
# 1035 "data/maps/SlateportCity/scripts.pory"

# 1036 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1037 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1038 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1039 "data/maps/SlateportCity/scripts.pory"
	end
# 1040 "data/maps/SlateportCity/scripts.pory"

# 1041 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1042 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1043 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 1044 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1045 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1046 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1047 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 1048 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1049 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1050 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1051 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1052 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1053 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1054 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1055 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1056 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1057 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1058 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 1059 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1060 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1061 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1062 "data/maps/SlateportCity/scripts.pory"
	end
# 1063 "data/maps/SlateportCity/scripts.pory"

# 1064 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 1065 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1066 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1067 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1068 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1071 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1072 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1073 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1074 "data/maps/SlateportCity/scripts.pory"

# 1075 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1076 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1077 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1078 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1079 "data/maps/SlateportCity/scripts.pory"

# 1080 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1081 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1082 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1083 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1084 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1085 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1086 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1087 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1088 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1089 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1090 "data/maps/SlateportCity/scripts.pory"

# 1091 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1092 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1093 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1094 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1095 "data/maps/SlateportCity/scripts.pory"
	end
# 1096 "data/maps/SlateportCity/scripts.pory"

# 1097 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1100 "data/maps/SlateportCity/scripts.pory"

# 1101 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1104 "data/maps/SlateportCity/scripts.pory"

# 1105 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1109 "data/maps/SlateportCity/scripts.pory"

# 1110 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1116 "data/maps/SlateportCity/scripts.pory"

# 1117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1121 "data/maps/SlateportCity/scripts.pory"

# 1122 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1125 "data/maps/SlateportCity/scripts.pory"

# 1126 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1131 "data/maps/SlateportCity/scripts.pory"

# 1132 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1138 "data/maps/SlateportCity/scripts.pory"

# 1139 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1145 "data/maps/SlateportCity/scripts.pory"

# 1146 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1150 "data/maps/SlateportCity/scripts.pory"

# 1151 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1153 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1157 "data/maps/SlateportCity/scripts.pory"

# 1158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1163 "data/maps/SlateportCity/scripts.pory"

# 1164 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1170 "data/maps/SlateportCity/scripts.pory"

# 1171 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1176 "data/maps/SlateportCity/scripts.pory"

# 1177 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1180 "data/maps/SlateportCity/scripts.pory"

# 1181 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1186 "data/maps/SlateportCity/scripts.pory"

# 1187 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1190 "data/maps/SlateportCity/scripts.pory"

# 1191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1195 "data/maps/SlateportCity/scripts.pory"

# 1196 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1200 "data/maps/SlateportCity/scripts.pory"

# 1201 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1205 "data/maps/SlateportCity/scripts.pory"

# 1206 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1209 "data/maps/SlateportCity/scripts.pory"

# 1210 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1213 "data/maps/SlateportCity/scripts.pory"

# 1214 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1218 "data/maps/SlateportCity/scripts.pory"

# 1219 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1222 "data/maps/SlateportCity/scripts.pory"

# 1223 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1226 "data/maps/SlateportCity/scripts.pory"

# 1227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1230 "data/maps/SlateportCity/scripts.pory"

# 1231 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1237 "data/maps/SlateportCity/scripts.pory"

# 1238 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1243 "data/maps/SlateportCity/scripts.pory"

# 1244 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1249 "data/maps/SlateportCity/scripts.pory"

# 1250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1254 "data/maps/SlateportCity/scripts.pory"

# 1255 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1260 "data/maps/SlateportCity/scripts.pory"

# 1261 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1264 "data/maps/SlateportCity/scripts.pory"

# 1265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1269 "data/maps/SlateportCity/scripts.pory"

# 1270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1275 "data/maps/SlateportCity/scripts.pory"

# 1276 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1283 "data/maps/SlateportCity/scripts.pory"

# 1284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1289 "data/maps/SlateportCity/scripts.pory"

# 1290 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1295 "data/maps/SlateportCity/scripts.pory"

# 1296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1301 "data/maps/SlateportCity/scripts.pory"

# 1302 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1306 "data/maps/SlateportCity/scripts.pory"

# 1307 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1310 "data/maps/SlateportCity/scripts.pory"

# 1311 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1314 "data/maps/SlateportCity/scripts.pory"

# 1315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1318 "data/maps/SlateportCity/scripts.pory"

# 1319 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1322 "data/maps/SlateportCity/scripts.pory"

# 1323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1326 "data/maps/SlateportCity/scripts.pory"

# 1327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1333 "data/maps/SlateportCity/scripts.pory"

# 1334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1338 "data/maps/SlateportCity/scripts.pory"

# 1339 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1348 "data/maps/SlateportCity/scripts.pory"

# 1349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1359 "data/maps/SlateportCity/scripts.pory"

# 1360 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1363 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1365 "data/maps/SlateportCity/scripts.pory"

# 1366 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1370 "data/maps/SlateportCity/scripts.pory"

# 1371 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1374 "data/maps/SlateportCity/scripts.pory"

# 1375 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1378 "data/maps/SlateportCity/scripts.pory"

# 1379 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1383 "data/maps/SlateportCity/scripts.pory"

# 1384 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1386 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1387 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1389 "data/maps/SlateportCity/scripts.pory"

# 1390 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1391 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1394 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1395 "data/maps/SlateportCity/scripts.pory"

# 1396 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1399 "data/maps/SlateportCity/scripts.pory"

# 1400 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1404 "data/maps/SlateportCity/scripts.pory"

# 1405 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1407 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1408 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1409 "data/maps/SlateportCity/scripts.pory"

# 1410 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1411 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1412 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1413 "data/maps/SlateportCity/scripts.pory"

# 1414 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1415 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1416 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1417 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1418 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1419 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1420 "data/maps/SlateportCity/scripts.pory"

# 1421 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1422 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1423 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1424 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1425 "data/maps/SlateportCity/scripts.pory"

# 1426 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1427 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1428 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1429 "data/maps/SlateportCity/scripts.pory"

# 1430 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1431 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1433 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1434 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1435 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1436 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1437 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1438 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1439 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1440 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1441 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1442 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1443 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1444 "data/maps/SlateportCity/scripts.pory"

# 1445 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1446 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1447 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1448 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1449 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1450 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1451 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1452 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1453 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1454 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1455 "data/maps/SlateportCity/scripts.pory"

# 1456 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1457 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1458 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1459 "data/maps/SlateportCity/scripts.pory"

# 1460 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1461 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1462 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1463 "data/maps/SlateportCity/scripts.pory"

# 1464 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1465 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1466 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1467 "data/maps/SlateportCity/scripts.pory"

# 1468 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1469 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1470 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1471 "data/maps/SlateportCity/scripts.pory"

# 1472 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1473 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1474 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1475 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1476 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1477 "data/maps/SlateportCity/scripts.pory"

# 1478 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1479 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1480 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1481 "data/maps/SlateportCity/scripts.pory"

# 1482 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1483 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1484 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1485 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1486 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1487 "data/maps/SlateportCity/scripts.pory"

# 1488 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1489 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1490 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1491 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1492 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1493 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1494 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1495 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1496 "data/maps/SlateportCity/scripts.pory"

# 1497 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1498 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1499 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1500 "data/maps/SlateportCity/scripts.pory"

# 1501 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1502 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1503 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1504 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1505 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1506 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1507 "data/maps/SlateportCity/scripts.pory"

# 1508 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1509 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1510 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1511 "data/maps/SlateportCity/scripts.pory"

# 1512 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1513 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1514 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1515 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1516 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1517 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1518 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1519 "data/maps/SlateportCity/scripts.pory"

# 1520 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1521 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1522 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1523 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1524 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1525 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1526 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1527 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1528 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1529 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
# 1530 "data/maps/SlateportCity/scripts.pory"

# 1531 "data/maps/SlateportCity/scripts.pory"
@ ------------------------------------------------------------------
# 1532 "data/maps/SlateportCity/scripts.pory"
@ Diego / Abuela smuggling cutscene (Slateport, top-right corner)
# 1533 "data/maps/SlateportCity/scripts.pory"
@ Talking to either the hiker (Diego) or the old woman (Abuela) starts it.
# 1534 "data/maps/SlateportCity/scripts.pory"
@ ------------------------------------------------------------------
# 1535 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Diego::
# 1536 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_DiegoEvent
# 1537 "data/maps/SlateportCity/scripts.pory"
	end
# 1538 "data/maps/SlateportCity/scripts.pory"

# 1539 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Diegoabuela::
# 1540 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_DiegoEvent
# 1541 "data/maps/SlateportCity/scripts.pory"
	end
# 1542 "data/maps/SlateportCity/scripts.pory"

# 1543 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DiegoEvent::
# 1544 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1545 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_DIEGO, Common_Movement_FacePlayer
# 1546 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1547 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DiegoIntro, MSGBOX_DEFAULT
# 1548 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1549 "data/maps/SlateportCity/scripts.pory"
	@ the two ICE agents run in from the west (off-screen) along row 13
# 1550 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_ICE_COP_1, 26, 13
# 1551 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_ICE_COP_2, 25, 13
# 1552 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_ICE_COPS
# 1553 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_ICE_COP_1
# 1554 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_ICE_COP_2
# 1555 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_1, SlateportCity_Movement_CopRunIn
# 1556 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_2, SlateportCity_Movement_CopRunIn
# 1557 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1558 "data/maps/SlateportCity/scripts.pory"
	@ Diego and Abuela stand their ground until the agents reach them, then panic
# 1559 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_DIEGO, SlateportCity_Movement_PairNotice
# 1560 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ABUELA, SlateportCity_Movement_PairNotice
# 1561 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1562 "data/maps/SlateportCity/scripts.pory"
	@ if the player is standing in the escape lane (row 14), they step back
# 1563 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 1564 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_0x8005, 14, SlateportCity_EventScript_DiegoPlayerStepBack
# 1565 "data/maps/SlateportCity/scripts.pory"
	@ 1) the pair bolts west along row 14 and escapes off-screen
# 1566 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_DIEGO, SlateportCity_Movement_PairFlee
# 1567 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ABUELA, SlateportCity_Movement_PairFlee
# 1568 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1569 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_DIEGO
# 1570 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_ABUELA
# 1571 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_DIEGO_EVENT
# 1572 "data/maps/SlateportCity/scripts.pory"
	@ 2) only then do the agents yell after them
# 1573 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IceStop, MSGBOX_DEFAULT
# 1574 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1575 "data/maps/SlateportCity/scripts.pory"
	@ 3) and give chase out the same way
# 1576 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_1, SlateportCity_Movement_CopChase
# 1577 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_2, SlateportCity_Movement_CopChase
# 1578 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1579 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_ICE_COP_1
# 1580 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_ICE_COP_2
# 1581 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_ICE_COPS
# 1582 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_DIEGO_STATE, 1
# 1583 "data/maps/SlateportCity/scripts.pory"
	delay 20
# 1584 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PowderGag, MSGBOX_DEFAULT
# 1585 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
# 1586 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1587 "data/maps/SlateportCity/scripts.pory"
	end
# 1588 "data/maps/SlateportCity/scripts.pory"

# 1589 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DiegoPlayerStepBack::
# 1590 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerStepBack
# 1591 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1592 "data/maps/SlateportCity/scripts.pory"
	return
# 1593 "data/maps/SlateportCity/scripts.pory"

# 1594 "data/maps/SlateportCity/scripts.pory"
@ Agents spawn at (26,13)/(25,13) and run 8 tiles east, stopping at (34,13)/(33,13),
# 1595 "data/maps/SlateportCity/scripts.pory"
@ two tiles shy of Abuela so they never overlap a player standing at (35,13).
# 1596 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_CopRunIn:
# 1597 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1598 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1599 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1600 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1601 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1602 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1603 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1604 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1605 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1606 "data/maps/SlateportCity/scripts.pory"

# 1607 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PairNotice:
# 1608 "data/maps/SlateportCity/scripts.pory"
	face_left
# 1609 "data/maps/SlateportCity/scripts.pory"
	emote_exclamation_mark
# 1610 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1611 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1612 "data/maps/SlateportCity/scripts.pory"

# 1613 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerStepBack:
# 1614 "data/maps/SlateportCity/scripts.pory"
	walk_fast_down
# 1615 "data/maps/SlateportCity/scripts.pory"
	face_up
# 1616 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1617 "data/maps/SlateportCity/scripts.pory"

# 1618 "data/maps/SlateportCity/scripts.pory"
@ Diego (37,13) / Abuela (36,13): duck south to row 14, then sprint west off-screen
# 1619 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PairFlee:
# 1620 "data/maps/SlateportCity/scripts.pory"
	walk_fast_down
# 1621 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1622 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1623 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1624 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1625 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1626 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1627 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1628 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1629 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1630 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1631 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1632 "data/maps/SlateportCity/scripts.pory"

# 1633 "data/maps/SlateportCity/scripts.pory"
@ Agents at (34,13)/(33,13): drop to row 14 and give chase
# 1634 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_CopChase:
# 1635 "data/maps/SlateportCity/scripts.pory"
	walk_fast_down
# 1636 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1637 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1638 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1639 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1640 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1641 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1642 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1643 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1644 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1645 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1646 "data/maps/SlateportCity/scripts.pory"

# 1647 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DiegoIntro:
# 1648 "data/maps/SlateportCity/scripts.pory"
	.string "Yes Abuela, I have the coke up my…\p"
# 1649 "data/maps/SlateportCity/scripts.pory"
	.string "OH! Sorry, didn't see you there.\p"
# 1650 "data/maps/SlateportCity/scripts.pory"
	.string "I am Diego. Thanks to water-type\n"
# 1651 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON, sneaking across borders to\l"
# 1652 "data/maps/SlateportCity/scripts.pory"
	.string "steal your country's health care and\l"
# 1653 "data/maps/SlateportCity/scripts.pory"
	.string "government-funded housing has never\l"
# 1654 "data/maps/SlateportCity/scripts.pory"
	.string "been easier! Actually, I was just-$"
# 1655 "data/maps/SlateportCity/scripts.pory"

# 1656 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IceStop:
# 1657 "data/maps/SlateportCity/scripts.pory"
	.string "STOP! YOU ARE BEING DEPORTED!$"
# 1658 "data/maps/SlateportCity/scripts.pory"

# 1659 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PowderGag:
# 1660 "data/maps/SlateportCity/scripts.pory"
	.string "A mysterious powder fell out of\n"
# 1661 "data/maps/SlateportCity/scripts.pory"
	.string "Diego's ass as he escaped!$"

SlateportCity_EventScript_Abilityclerk_Text_0:
# 4 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome, welcome! I'm the ABILITY\n"
	.string "CLERK--bottled talent, tuned\l"
	.string "temperaments! If it's in a POKéMON's\l"
	.string "head, it's on my shelf. What'll it be?$"

SlateportCity_EventScript_AbilityClerkMenu_Text_0:
# 25 "data/maps/SlateportCity/scripts.pory"
	.string "Talent well spent! Anything else?$"

SlateportCity_EventScript_AbilityClerkNature_Text_0:
# 31 "data/maps/SlateportCity/scripts.pory"
	.string "Ah, apologies--temperament tuning is\n"
	.string "delicate work, and my nerves are shot\l"
	.string "for today. One session a day! Come back\l"
	.string "tomorrow!$"

SlateportCity_EventScript_AbilityClerkNature_Text_1:
# 35 "data/maps/SlateportCity/scripts.pory"
	.string "Ohoho, the temperament tuning! For\n"
	.string "¥10,000 I'll rewrite your POKéMON's\l"
	.string "nature--truly rewrite it, mind you. None\l"
	.string "of that minty perfume that washes off.\l"
	.string "Once a day only. Interested?$"

SlateportCity_EventScript_AbilityClerkNature_Text_2:
# 42 "data/maps/SlateportCity/scripts.pory"
	.string "Hmm... Your wallet seems a little light,\n"
	.string "friend. It's ¥10,000--no discounts, not\l"
	.string "even for that face.$"

SlateportCity_EventScript_AbilityClerkNature_Text_3:
# 47 "data/maps/SlateportCity/scripts.pory"
	.string "Which POKéMON needs a new outlook on\n"
	.string "life?$"

SlateportCity_EventScript_AbilityClerkNature_Text_4:
# 55 "data/maps/SlateportCity/scripts.pory"
	.string "An EGG? Its temperament hasn't even\n"
	.string "hatched yet! Bring me something with\l"
	.string "opinions.$"

SlateportCity_EventScript_AbilityClerkNature_Text_5:
# 61 "data/maps/SlateportCity/scripts.pory"
	.string "And which nature shall we make its true\n"
	.string "self?$"

SlateportCity_EventScript_AbilityClerkChooseNature_Text_0:
# 98 "data/maps/SlateportCity/scripts.pory"
	.string "That's already its true nature! I'm a\n"
	.string "salesman, not a swindler--pick a\l"
	.string "different one.$"

SlateportCity_EventScript_AbilityClerkChooseNature_Text_1:
# 102 "data/maps/SlateportCity/scripts.pory"
	.string "Splendid! ¥10,000, and remember--this\n"
	.string "is the real thing, right down to the\l"
	.string "core. No refunds, no take-backs. Ready?$"

SlateportCity_EventScript_AbilityClerkChooseNature_Text_2:
# 113 "data/maps/SlateportCity/scripts.pory"
	.string "Deep breaths... aaand done! A whole new\n"
	.string "POKéMON, through and through! Do come\l"
	.string "again tomorrow!$"

SlateportCity_EventScript_AbilityClerkGoodbye_Text_0:
# 119 "data/maps/SlateportCity/scripts.pory"
	.string "Suit yourself! Talent waits for no\n"
	.string "one--but I'll be right here.$"

SlateportCity_Text_AbilityClerkShopIntro::
# 124 "data/maps/SlateportCity/scripts.pory"
	.string "Rare goods for rare trainers--\ntake your time!$"

AbilityClerk_Text_MenuShop::
# 128 "data/maps/SlateportCity/scripts.pory"
	.string "BUY ITEMS$"

AbilityClerk_Text_MenuNature::
# 132 "data/maps/SlateportCity/scripts.pory"
	.string "CHANGE NATURE$"

AbilityClerk_Text_MenuExit::
# 136 "data/maps/SlateportCity/scripts.pory"
	.string "NEVER MIND$"
