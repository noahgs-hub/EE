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
	.2byte ITEM_HEALTH_FEATHER
# 146 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 147 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 148 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 149 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 150 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 151 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend

# 154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 155 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 156 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 157 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 158 "data/maps/SlateportCity/scripts.pory"

# 159 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 160 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 161 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 162 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_ReconcileDiegoEvent
# 163 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 164 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 165 "data/maps/SlateportCity/scripts.pory"
	end
# 166 "data/maps/SlateportCity/scripts.pory"

# 167 "data/maps/SlateportCity/scripts.pory"
@ Diego/Abuela visibility is derived from the event state var every map entry, so
# 168 "data/maps/SlateportCity/scripts.pory"
@ stale flag bits in an existing save cannot hide them incorrectly. The ICE cops are
# 169 "data/maps/SlateportCity/scripts.pory"
@ force-hidden on every entry; they only appear mid-cutscene via addobject.
# 170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReconcileDiegoEvent::
# 171 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_ICE_COPS
# 172 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_DIEGO_STATE, 1, SlateportCity_EventScript_HideDiegoAbuela
# 173 "data/maps/SlateportCity/scripts.pory"
	call_if_ne VAR_SLATEPORT_DIEGO_STATE, 1, SlateportCity_EventScript_ShowDiegoAbuela
# 174 "data/maps/SlateportCity/scripts.pory"
	return
# 175 "data/maps/SlateportCity/scripts.pory"

# 176 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HideDiegoAbuela::
# 177 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_DIEGO_EVENT
# 178 "data/maps/SlateportCity/scripts.pory"
	return
# 179 "data/maps/SlateportCity/scripts.pory"

# 180 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ShowDiegoAbuela::
# 181 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_DIEGO_STATE, 0
# 182 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_DIEGO_EVENT
# 183 "data/maps/SlateportCity/scripts.pory"
	return
# 184 "data/maps/SlateportCity/scripts.pory"

# 185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 186 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 187 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 188 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 189 "data/maps/SlateportCity/scripts.pory"
	return
# 190 "data/maps/SlateportCity/scripts.pory"

# 191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 192 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 193 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 194 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 195 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 196 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 197 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 198 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 199 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 200 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 201 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 202 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 203 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 204 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 205 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 206 "data/maps/SlateportCity/scripts.pory"
	return
# 207 "data/maps/SlateportCity/scripts.pory"

# 208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 209 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 210 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 211 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 212 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 213 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 214 "data/maps/SlateportCity/scripts.pory"
	return
# 215 "data/maps/SlateportCity/scripts.pory"

# 216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 217 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 218 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 219 "data/maps/SlateportCity/scripts.pory"
	return
# 220 "data/maps/SlateportCity/scripts.pory"

# 221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 222 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 223 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 224 "data/maps/SlateportCity/scripts.pory"

# 225 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 226 "data/maps/SlateportCity/scripts.pory"
	lockall
# 227 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 228 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 229 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 230 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 231 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 232 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 233 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 234 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 235 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 236 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 237 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 238 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 239 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 240 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 241 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 242 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 243 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 244 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 245 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 246 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 247 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 248 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 249 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 250 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 251 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 252 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 253 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 254 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 255 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 256 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 257 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 258 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 259 "data/maps/SlateportCity/scripts.pory"
	end
# 260 "data/maps/SlateportCity/scripts.pory"

# 261 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 262 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 263 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 264 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 265 "data/maps/SlateportCity/scripts.pory"
	step_end
# 266 "data/maps/SlateportCity/scripts.pory"

# 267 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 268 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 269 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 270 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 271 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 272 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 273 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 274 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 275 "data/maps/SlateportCity/scripts.pory"
	step_end
# 276 "data/maps/SlateportCity/scripts.pory"

# 277 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 278 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 279 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 280 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 281 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 282 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 283 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 284 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 285 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 286 "data/maps/SlateportCity/scripts.pory"
	step_end
# 287 "data/maps/SlateportCity/scripts.pory"

# 288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 289 "data/maps/SlateportCity/scripts.pory"
	lock
# 290 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 291 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 292 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 293 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 294 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 295 "data/maps/SlateportCity/scripts.pory"
	release
# 296 "data/maps/SlateportCity/scripts.pory"
	end
# 297 "data/maps/SlateportCity/scripts.pory"

# 298 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 299 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 300 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 301 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 302 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 303 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 304 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 305 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 306 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 307 "data/maps/SlateportCity/scripts.pory"

# 308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 309 "data/maps/SlateportCity/scripts.pory"
	lock
# 310 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 311 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 312 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 313 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 314 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 315 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 316 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 317 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 318 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 319 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 320 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 321 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 322 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 323 "data/maps/SlateportCity/scripts.pory"
	release
# 324 "data/maps/SlateportCity/scripts.pory"
	end
# 325 "data/maps/SlateportCity/scripts.pory"

# 326 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 327 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 328 "data/maps/SlateportCity/scripts.pory"
	release
# 329 "data/maps/SlateportCity/scripts.pory"
	end
# 330 "data/maps/SlateportCity/scripts.pory"

# 331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 332 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 333 "data/maps/SlateportCity/scripts.pory"
	release
# 334 "data/maps/SlateportCity/scripts.pory"
	end
# 335 "data/maps/SlateportCity/scripts.pory"

# 336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 337 "data/maps/SlateportCity/scripts.pory"
	lock
# 338 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 339 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 340 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 341 "data/maps/SlateportCity/scripts.pory"
	release
# 342 "data/maps/SlateportCity/scripts.pory"
	end
# 343 "data/maps/SlateportCity/scripts.pory"

# 344 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 345 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 346 "data/maps/SlateportCity/scripts.pory"
	release
# 347 "data/maps/SlateportCity/scripts.pory"
	end
# 348 "data/maps/SlateportCity/scripts.pory"

# 349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 350 "data/maps/SlateportCity/scripts.pory"
	lock
# 351 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 352 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 353 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 354 "data/maps/SlateportCity/scripts.pory"
	release
# 355 "data/maps/SlateportCity/scripts.pory"
	end
# 356 "data/maps/SlateportCity/scripts.pory"

# 357 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 358 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 359 "data/maps/SlateportCity/scripts.pory"
	release
# 360 "data/maps/SlateportCity/scripts.pory"
	end
# 361 "data/maps/SlateportCity/scripts.pory"

# 362 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 363 "data/maps/SlateportCity/scripts.pory"
	lock
# 364 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 365 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 366 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 367 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 368 "data/maps/SlateportCity/scripts.pory"
	release
# 369 "data/maps/SlateportCity/scripts.pory"
	end
# 370 "data/maps/SlateportCity/scripts.pory"

# 371 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 372 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 373 "data/maps/SlateportCity/scripts.pory"
	release
# 374 "data/maps/SlateportCity/scripts.pory"
	end
# 375 "data/maps/SlateportCity/scripts.pory"

# 376 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 377 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 378 "data/maps/SlateportCity/scripts.pory"
	release
# 379 "data/maps/SlateportCity/scripts.pory"
	end
# 380 "data/maps/SlateportCity/scripts.pory"

# 381 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 382 "data/maps/SlateportCity/scripts.pory"
	lock
# 383 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 384 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 385 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 386 "data/maps/SlateportCity/scripts.pory"
	release
# 387 "data/maps/SlateportCity/scripts.pory"
	end
# 388 "data/maps/SlateportCity/scripts.pory"

# 389 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 390 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 391 "data/maps/SlateportCity/scripts.pory"
	release
# 392 "data/maps/SlateportCity/scripts.pory"
	end
# 393 "data/maps/SlateportCity/scripts.pory"

# 394 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 395 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 396 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 397 "data/maps/SlateportCity/scripts.pory"
	end
# 398 "data/maps/SlateportCity/scripts.pory"

# 399 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 400 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 401 "data/maps/SlateportCity/scripts.pory"
	end
# 402 "data/maps/SlateportCity/scripts.pory"

# 403 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 404 "data/maps/SlateportCity/scripts.pory"
	lock
# 405 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 406 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 407 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 408 "data/maps/SlateportCity/scripts.pory"
	release
# 409 "data/maps/SlateportCity/scripts.pory"
	end
# 410 "data/maps/SlateportCity/scripts.pory"

# 411 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 412 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 413 "data/maps/SlateportCity/scripts.pory"
	release
# 414 "data/maps/SlateportCity/scripts.pory"
	end
# 415 "data/maps/SlateportCity/scripts.pory"

# 416 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 417 "data/maps/SlateportCity/scripts.pory"
	lock
# 418 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 419 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 420 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 421 "data/maps/SlateportCity/scripts.pory"
	release
# 422 "data/maps/SlateportCity/scripts.pory"
	end
# 423 "data/maps/SlateportCity/scripts.pory"

# 424 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 425 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 426 "data/maps/SlateportCity/scripts.pory"
	release
# 427 "data/maps/SlateportCity/scripts.pory"
	end
# 428 "data/maps/SlateportCity/scripts.pory"

# 429 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 430 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 431 "data/maps/SlateportCity/scripts.pory"
	end
# 432 "data/maps/SlateportCity/scripts.pory"

# 433 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 434 "data/maps/SlateportCity/scripts.pory"
	lockall
# 435 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 436 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 437 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 438 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 439 "data/maps/SlateportCity/scripts.pory"
	end
# 440 "data/maps/SlateportCity/scripts.pory"

# 441 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 442 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 443 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 444 "data/maps/SlateportCity/scripts.pory"
	end
# 445 "data/maps/SlateportCity/scripts.pory"

# 446 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 447 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 448 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 449 "data/maps/SlateportCity/scripts.pory"
	end
# 450 "data/maps/SlateportCity/scripts.pory"

# 451 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 452 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 453 "data/maps/SlateportCity/scripts.pory"
	end
# 454 "data/maps/SlateportCity/scripts.pory"

# 455 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 456 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 457 "data/maps/SlateportCity/scripts.pory"
	end
# 458 "data/maps/SlateportCity/scripts.pory"

# 459 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 460 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 461 "data/maps/SlateportCity/scripts.pory"
	end
# 462 "data/maps/SlateportCity/scripts.pory"

# 463 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 464 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 465 "data/maps/SlateportCity/scripts.pory"
	end
# 466 "data/maps/SlateportCity/scripts.pory"

# 467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 468 "data/maps/SlateportCity/scripts.pory"
	lockall
# 469 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 470 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 471 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 472 "data/maps/SlateportCity/scripts.pory"
	end
# 473 "data/maps/SlateportCity/scripts.pory"

# 474 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 475 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 476 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 477 "data/maps/SlateportCity/scripts.pory"
	end
# 478 "data/maps/SlateportCity/scripts.pory"

# 479 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 480 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 481 "data/maps/SlateportCity/scripts.pory"
	end
# 482 "data/maps/SlateportCity/scripts.pory"

# 483 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 484 "data/maps/SlateportCity/scripts.pory"
	lock
# 485 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 486 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 487 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 488 "data/maps/SlateportCity/scripts.pory"
	release
# 489 "data/maps/SlateportCity/scripts.pory"
	end
# 490 "data/maps/SlateportCity/scripts.pory"

# 491 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 492 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 493 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 494 "data/maps/SlateportCity/scripts.pory"
	release
# 495 "data/maps/SlateportCity/scripts.pory"
	end
# 496 "data/maps/SlateportCity/scripts.pory"

# 497 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 498 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 499 "data/maps/SlateportCity/scripts.pory"
	end
# 500 "data/maps/SlateportCity/scripts.pory"

# 501 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 502 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 503 "data/maps/SlateportCity/scripts.pory"
	end
# 504 "data/maps/SlateportCity/scripts.pory"

# 505 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 506 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 507 "data/maps/SlateportCity/scripts.pory"
	end
# 508 "data/maps/SlateportCity/scripts.pory"

# 509 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 510 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 511 "data/maps/SlateportCity/scripts.pory"
	end
# 512 "data/maps/SlateportCity/scripts.pory"

# 513 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 514 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 515 "data/maps/SlateportCity/scripts.pory"
	end
# 516 "data/maps/SlateportCity/scripts.pory"

# 517 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 518 "data/maps/SlateportCity/scripts.pory"
	lock
# 519 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 520 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 521 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 522 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 523 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/SlateportCity/scripts.pory"
	release
# 525 "data/maps/SlateportCity/scripts.pory"
	end
# 526 "data/maps/SlateportCity/scripts.pory"

# 527 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 528 "data/maps/SlateportCity/scripts.pory"
	lock
# 529 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 530 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 531 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 532 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 533 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/SlateportCity/scripts.pory"
	release
# 535 "data/maps/SlateportCity/scripts.pory"
	end
# 536 "data/maps/SlateportCity/scripts.pory"

# 537 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 538 "data/maps/SlateportCity/scripts.pory"
	lock
# 539 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 540 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 541 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 542 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 543 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/SlateportCity/scripts.pory"
	release
# 545 "data/maps/SlateportCity/scripts.pory"
	end
# 546 "data/maps/SlateportCity/scripts.pory"

# 547 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 548 "data/maps/SlateportCity/scripts.pory"
	lock
# 549 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 550 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 551 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 552 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 553 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/SlateportCity/scripts.pory"
	release
# 555 "data/maps/SlateportCity/scripts.pory"
	end
# 556 "data/maps/SlateportCity/scripts.pory"

# 557 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 558 "data/maps/SlateportCity/scripts.pory"
	lock
# 559 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 560 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 561 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 562 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 563 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/SlateportCity/scripts.pory"
	release
# 565 "data/maps/SlateportCity/scripts.pory"
	end
# 566 "data/maps/SlateportCity/scripts.pory"

# 567 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 568 "data/maps/SlateportCity/scripts.pory"
	lock
# 569 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 570 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 571 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 572 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 573 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 574 "data/maps/SlateportCity/scripts.pory"
	release
# 575 "data/maps/SlateportCity/scripts.pory"
	end
# 576 "data/maps/SlateportCity/scripts.pory"

# 577 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 578 "data/maps/SlateportCity/scripts.pory"
	lock
# 579 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 580 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 581 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 582 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 583 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 584 "data/maps/SlateportCity/scripts.pory"
	release
# 585 "data/maps/SlateportCity/scripts.pory"
	end
# 586 "data/maps/SlateportCity/scripts.pory"

# 587 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 588 "data/maps/SlateportCity/scripts.pory"
	lock
# 589 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 590 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 591 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 592 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 593 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 594 "data/maps/SlateportCity/scripts.pory"
	release
# 595 "data/maps/SlateportCity/scripts.pory"
	end
# 596 "data/maps/SlateportCity/scripts.pory"

# 597 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 598 "data/maps/SlateportCity/scripts.pory"
	lock
# 599 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 600 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 601 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 602 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 603 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 604 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 605 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 606 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 607 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 608 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 609 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 610 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 611 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 612 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 614 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 615 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 616 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 618 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 619 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 620 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 621 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 622 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 623 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 624 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 625 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 626 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/SlateportCity/scripts.pory"
	release
# 628 "data/maps/SlateportCity/scripts.pory"
	end
# 629 "data/maps/SlateportCity/scripts.pory"

# 630 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 631 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 632 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 633 "data/maps/SlateportCity/scripts.pory"
	step_end
# 634 "data/maps/SlateportCity/scripts.pory"

# 635 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 636 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 637 "data/maps/SlateportCity/scripts.pory"
	end
# 638 "data/maps/SlateportCity/scripts.pory"

# 639 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 640 "data/maps/SlateportCity/scripts.pory"
	lock
# 641 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 642 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 643 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 644 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 645 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 646 "data/maps/SlateportCity/scripts.pory"
	release
# 647 "data/maps/SlateportCity/scripts.pory"
	end
# 648 "data/maps/SlateportCity/scripts.pory"

# 649 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 650 "data/maps/SlateportCity/scripts.pory"
	lock
# 651 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 652 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 653 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 654 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 655 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 656 "data/maps/SlateportCity/scripts.pory"
	release
# 657 "data/maps/SlateportCity/scripts.pory"
	end
# 658 "data/maps/SlateportCity/scripts.pory"

# 659 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 660 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 661 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 662 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 663 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 664 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 665 "data/maps/SlateportCity/scripts.pory"

# 666 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 667 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 668 "data/maps/SlateportCity/scripts.pory"
	release
# 669 "data/maps/SlateportCity/scripts.pory"
	end
# 670 "data/maps/SlateportCity/scripts.pory"

# 671 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 672 "data/maps/SlateportCity/scripts.pory"
	lock
# 673 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 674 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 675 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 676 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 677 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 678 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 679 "data/maps/SlateportCity/scripts.pory"
	release
# 680 "data/maps/SlateportCity/scripts.pory"
	end
# 681 "data/maps/SlateportCity/scripts.pory"

# 682 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 683 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 684 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 685 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 686 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 687 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 688 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 689 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 690 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 691 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 692 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 693 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 694 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 695 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 696 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 697 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 698 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 699 "data/maps/SlateportCity/scripts.pory"

# 700 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 701 "data/maps/SlateportCity/scripts.pory"
	lock
# 702 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 703 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 704 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 705 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 706 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 707 "data/maps/SlateportCity/scripts.pory"
	release
# 708 "data/maps/SlateportCity/scripts.pory"
	end
# 709 "data/maps/SlateportCity/scripts.pory"

# 710 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 711 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 712 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 713 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 714 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 715 "data/maps/SlateportCity/scripts.pory"

# 716 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 717 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 718 "data/maps/SlateportCity/scripts.pory"
	lockall
# 719 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 720 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 721 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 722 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 723 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 724 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 725 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 726 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 728 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 729 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 730 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 731 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 732 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 734 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 735 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 736 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 737 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 739 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 740 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 741 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 742 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 743 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 744 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 745 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 746 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 748 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 750 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 751 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 752 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 753 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 754 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 755 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 756 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 758 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 759 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 760 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 761 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 762 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 764 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 765 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 766 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 767 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 768 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 769 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 770 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 771 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 772 "data/maps/SlateportCity/scripts.pory"
	end
# 773 "data/maps/SlateportCity/scripts.pory"

# 774 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 775 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 776 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 777 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 778 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 779 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 780 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 781 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 782 "data/maps/SlateportCity/scripts.pory"
	step_end
# 783 "data/maps/SlateportCity/scripts.pory"

# 784 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 785 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 786 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 787 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 788 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 789 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 790 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 791 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 792 "data/maps/SlateportCity/scripts.pory"
	step_end
# 793 "data/maps/SlateportCity/scripts.pory"

# 794 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 795 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 796 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 797 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 798 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 799 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 800 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 801 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 802 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 803 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 804 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 805 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 806 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 807 "data/maps/SlateportCity/scripts.pory"
	step_end
# 808 "data/maps/SlateportCity/scripts.pory"

# 809 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 810 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 811 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 812 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 813 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 814 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 815 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 816 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 817 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 818 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 819 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 820 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 821 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 822 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 823 "data/maps/SlateportCity/scripts.pory"
	step_end
# 824 "data/maps/SlateportCity/scripts.pory"

# 825 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 826 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 827 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 828 "data/maps/SlateportCity/scripts.pory"
	step_end
# 829 "data/maps/SlateportCity/scripts.pory"

# 830 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 831 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 832 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 833 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 834 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 835 "data/maps/SlateportCity/scripts.pory"
	step_end
# 836 "data/maps/SlateportCity/scripts.pory"

# 837 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 838 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 839 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 840 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 841 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 842 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 843 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 844 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 845 "data/maps/SlateportCity/scripts.pory"
	step_end
# 846 "data/maps/SlateportCity/scripts.pory"

# 847 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 848 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 849 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 850 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 851 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 852 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 853 "data/maps/SlateportCity/scripts.pory"
	step_end
# 854 "data/maps/SlateportCity/scripts.pory"

# 855 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 856 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 857 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 858 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 859 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 860 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 861 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 862 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 863 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 864 "data/maps/SlateportCity/scripts.pory"
	step_end
# 865 "data/maps/SlateportCity/scripts.pory"

# 866 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 867 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 868 "data/maps/SlateportCity/scripts.pory"
	end
# 869 "data/maps/SlateportCity/scripts.pory"

# 870 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 871 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 872 "data/maps/SlateportCity/scripts.pory"
	end
# 873 "data/maps/SlateportCity/scripts.pory"

# 874 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 875 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 876 "data/maps/SlateportCity/scripts.pory"
	end
# 877 "data/maps/SlateportCity/scripts.pory"

# 878 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 879 "data/maps/SlateportCity/scripts.pory"
	lock
# 880 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 881 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 882 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 883 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 884 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 885 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 886 "data/maps/SlateportCity/scripts.pory"
	release
# 887 "data/maps/SlateportCity/scripts.pory"
	end
# 888 "data/maps/SlateportCity/scripts.pory"

# 889 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 890 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 891 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 892 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 893 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 894 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 895 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 896 "data/maps/SlateportCity/scripts.pory"
	end
# 897 "data/maps/SlateportCity/scripts.pory"

# 898 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 899 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 900 "data/maps/SlateportCity/scripts.pory"
	release
# 901 "data/maps/SlateportCity/scripts.pory"
	end
# 902 "data/maps/SlateportCity/scripts.pory"

# 903 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 904 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 905 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 906 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 907 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 908 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 909 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 910 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 911 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 912 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 913 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 914 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 915 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 916 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 917 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 918 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 919 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 920 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 921 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 922 "data/maps/SlateportCity/scripts.pory"
	end
# 923 "data/maps/SlateportCity/scripts.pory"

# 924 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 925 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 926 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 927 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 928 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 929 "data/maps/SlateportCity/scripts.pory"
	end
# 930 "data/maps/SlateportCity/scripts.pory"

# 931 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 932 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 933 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 934 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 935 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 936 "data/maps/SlateportCity/scripts.pory"
	end
# 937 "data/maps/SlateportCity/scripts.pory"

# 938 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 939 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 940 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 941 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 942 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 943 "data/maps/SlateportCity/scripts.pory"
	end
# 944 "data/maps/SlateportCity/scripts.pory"

# 945 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 946 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 947 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 948 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 949 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 950 "data/maps/SlateportCity/scripts.pory"
	end
# 951 "data/maps/SlateportCity/scripts.pory"

# 952 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 953 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 954 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 955 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 956 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 957 "data/maps/SlateportCity/scripts.pory"
	end
# 958 "data/maps/SlateportCity/scripts.pory"

# 959 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 960 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 961 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 962 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 963 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 964 "data/maps/SlateportCity/scripts.pory"
	end
# 965 "data/maps/SlateportCity/scripts.pory"

# 966 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 967 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 968 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 969 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 970 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 971 "data/maps/SlateportCity/scripts.pory"
	end
# 972 "data/maps/SlateportCity/scripts.pory"

# 973 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 974 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 975 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 976 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 977 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 978 "data/maps/SlateportCity/scripts.pory"
	end
# 979 "data/maps/SlateportCity/scripts.pory"

# 980 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 981 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 982 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 983 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 984 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 985 "data/maps/SlateportCity/scripts.pory"
	end
# 986 "data/maps/SlateportCity/scripts.pory"

# 987 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 988 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 989 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 990 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 991 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 992 "data/maps/SlateportCity/scripts.pory"
	end
# 993 "data/maps/SlateportCity/scripts.pory"

# 994 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 995 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 996 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 997 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 998 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 999 "data/maps/SlateportCity/scripts.pory"
	end
# 1000 "data/maps/SlateportCity/scripts.pory"

# 1001 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 1002 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 1003 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1004 "data/maps/SlateportCity/scripts.pory"
	release
# 1005 "data/maps/SlateportCity/scripts.pory"
	end
# 1006 "data/maps/SlateportCity/scripts.pory"

# 1007 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1008 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1009 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 1010 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1011 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1012 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 1013 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1014 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1015 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1016 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1017 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1018 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1019 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 1020 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1021 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1022 "data/maps/SlateportCity/scripts.pory"
	release
# 1023 "data/maps/SlateportCity/scripts.pory"
	end
# 1024 "data/maps/SlateportCity/scripts.pory"

# 1025 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1026 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1027 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1028 "data/maps/SlateportCity/scripts.pory"
	release
# 1029 "data/maps/SlateportCity/scripts.pory"
	end
# 1030 "data/maps/SlateportCity/scripts.pory"

# 1031 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1032 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1033 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1034 "data/maps/SlateportCity/scripts.pory"
	end
# 1035 "data/maps/SlateportCity/scripts.pory"

# 1036 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1037 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1038 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 1039 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1040 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1041 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1042 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 1043 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1044 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1045 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1046 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1047 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1048 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1049 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1050 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1051 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1052 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1053 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 1054 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1055 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1056 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1057 "data/maps/SlateportCity/scripts.pory"
	end
# 1058 "data/maps/SlateportCity/scripts.pory"

# 1059 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 1060 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1061 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1062 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1063 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1064 "data/maps/SlateportCity/scripts.pory"

# 1065 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1066 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1067 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1068 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1071 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1072 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1073 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1074 "data/maps/SlateportCity/scripts.pory"

# 1075 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1076 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1077 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1078 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1079 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1080 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1081 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1082 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1083 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1084 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1085 "data/maps/SlateportCity/scripts.pory"

# 1086 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1087 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1088 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1089 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1090 "data/maps/SlateportCity/scripts.pory"
	end
# 1091 "data/maps/SlateportCity/scripts.pory"

# 1092 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1095 "data/maps/SlateportCity/scripts.pory"

# 1096 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1099 "data/maps/SlateportCity/scripts.pory"

# 1100 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1104 "data/maps/SlateportCity/scripts.pory"

# 1105 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1107 "data/maps/SlateportCity/scripts.pory"

# 1108 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1111 "data/maps/SlateportCity/scripts.pory"

# 1112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1116 "data/maps/SlateportCity/scripts.pory"

# 1117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1120 "data/maps/SlateportCity/scripts.pory"

# 1121 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1126 "data/maps/SlateportCity/scripts.pory"

# 1127 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1133 "data/maps/SlateportCity/scripts.pory"

# 1134 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1140 "data/maps/SlateportCity/scripts.pory"

# 1141 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1145 "data/maps/SlateportCity/scripts.pory"

# 1146 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1152 "data/maps/SlateportCity/scripts.pory"

# 1153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1158 "data/maps/SlateportCity/scripts.pory"

# 1159 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1165 "data/maps/SlateportCity/scripts.pory"

# 1166 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1171 "data/maps/SlateportCity/scripts.pory"

# 1172 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1175 "data/maps/SlateportCity/scripts.pory"

# 1176 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1181 "data/maps/SlateportCity/scripts.pory"

# 1182 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1185 "data/maps/SlateportCity/scripts.pory"

# 1186 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1190 "data/maps/SlateportCity/scripts.pory"

# 1191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1195 "data/maps/SlateportCity/scripts.pory"

# 1196 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1200 "data/maps/SlateportCity/scripts.pory"

# 1201 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1204 "data/maps/SlateportCity/scripts.pory"

# 1205 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1208 "data/maps/SlateportCity/scripts.pory"

# 1209 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1213 "data/maps/SlateportCity/scripts.pory"

# 1214 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1217 "data/maps/SlateportCity/scripts.pory"

# 1218 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1221 "data/maps/SlateportCity/scripts.pory"

# 1222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1225 "data/maps/SlateportCity/scripts.pory"

# 1226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1232 "data/maps/SlateportCity/scripts.pory"

# 1233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1238 "data/maps/SlateportCity/scripts.pory"

# 1239 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1244 "data/maps/SlateportCity/scripts.pory"

# 1245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1249 "data/maps/SlateportCity/scripts.pory"

# 1250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1255 "data/maps/SlateportCity/scripts.pory"

# 1256 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1259 "data/maps/SlateportCity/scripts.pory"

# 1260 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1264 "data/maps/SlateportCity/scripts.pory"

# 1265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1270 "data/maps/SlateportCity/scripts.pory"

# 1271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1278 "data/maps/SlateportCity/scripts.pory"

# 1279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1284 "data/maps/SlateportCity/scripts.pory"

# 1285 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1290 "data/maps/SlateportCity/scripts.pory"

# 1291 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1296 "data/maps/SlateportCity/scripts.pory"

# 1297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1301 "data/maps/SlateportCity/scripts.pory"

# 1302 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1305 "data/maps/SlateportCity/scripts.pory"

# 1306 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1309 "data/maps/SlateportCity/scripts.pory"

# 1310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1313 "data/maps/SlateportCity/scripts.pory"

# 1314 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1317 "data/maps/SlateportCity/scripts.pory"

# 1318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1321 "data/maps/SlateportCity/scripts.pory"

# 1322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1328 "data/maps/SlateportCity/scripts.pory"

# 1329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1333 "data/maps/SlateportCity/scripts.pory"

# 1334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1343 "data/maps/SlateportCity/scripts.pory"

# 1344 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1354 "data/maps/SlateportCity/scripts.pory"

# 1355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1360 "data/maps/SlateportCity/scripts.pory"

# 1361 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1363 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1365 "data/maps/SlateportCity/scripts.pory"

# 1366 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1369 "data/maps/SlateportCity/scripts.pory"

# 1370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1371 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1373 "data/maps/SlateportCity/scripts.pory"

# 1374 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1375 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1378 "data/maps/SlateportCity/scripts.pory"

# 1379 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1383 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1384 "data/maps/SlateportCity/scripts.pory"

# 1385 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1386 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1387 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1390 "data/maps/SlateportCity/scripts.pory"

# 1391 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1394 "data/maps/SlateportCity/scripts.pory"

# 1395 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1399 "data/maps/SlateportCity/scripts.pory"

# 1400 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1404 "data/maps/SlateportCity/scripts.pory"

# 1405 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1407 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1408 "data/maps/SlateportCity/scripts.pory"

# 1409 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1410 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1411 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1412 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1413 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1414 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1415 "data/maps/SlateportCity/scripts.pory"

# 1416 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1417 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1418 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1419 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1420 "data/maps/SlateportCity/scripts.pory"

# 1421 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1422 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1423 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1424 "data/maps/SlateportCity/scripts.pory"

# 1425 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1426 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1427 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1428 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1429 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1430 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1431 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1433 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1434 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1435 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1436 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1437 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1438 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1439 "data/maps/SlateportCity/scripts.pory"

# 1440 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1441 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1442 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1443 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1444 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1445 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1446 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1447 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1448 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1449 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1450 "data/maps/SlateportCity/scripts.pory"

# 1451 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1452 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1453 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1454 "data/maps/SlateportCity/scripts.pory"

# 1455 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1456 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1457 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1458 "data/maps/SlateportCity/scripts.pory"

# 1459 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1460 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1461 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1462 "data/maps/SlateportCity/scripts.pory"

# 1463 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1464 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1465 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1466 "data/maps/SlateportCity/scripts.pory"

# 1467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1468 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1469 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1470 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1471 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1472 "data/maps/SlateportCity/scripts.pory"

# 1473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1474 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1475 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1476 "data/maps/SlateportCity/scripts.pory"

# 1477 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1478 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1479 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1480 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1481 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1482 "data/maps/SlateportCity/scripts.pory"

# 1483 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1484 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1485 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1486 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1487 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1488 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1489 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1490 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1491 "data/maps/SlateportCity/scripts.pory"

# 1492 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1493 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1494 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1495 "data/maps/SlateportCity/scripts.pory"

# 1496 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1497 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1498 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1499 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1500 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1501 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1502 "data/maps/SlateportCity/scripts.pory"

# 1503 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1504 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1505 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1506 "data/maps/SlateportCity/scripts.pory"

# 1507 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1508 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1509 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1510 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1511 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1512 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1513 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1514 "data/maps/SlateportCity/scripts.pory"

# 1515 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1516 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1517 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1518 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1519 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1520 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1521 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1522 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1523 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1524 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
# 1525 "data/maps/SlateportCity/scripts.pory"

# 1526 "data/maps/SlateportCity/scripts.pory"
@ ------------------------------------------------------------------
# 1527 "data/maps/SlateportCity/scripts.pory"
@ Diego / Abuela smuggling cutscene (Slateport, top-right corner)
# 1528 "data/maps/SlateportCity/scripts.pory"
@ Talking to either the hiker (Diego) or the old woman (Abuela) starts it.
# 1529 "data/maps/SlateportCity/scripts.pory"
@ ------------------------------------------------------------------
# 1530 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Diego::
# 1531 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_DiegoEvent
# 1532 "data/maps/SlateportCity/scripts.pory"
	end
# 1533 "data/maps/SlateportCity/scripts.pory"

# 1534 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Diegoabuela::
# 1535 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_DiegoEvent
# 1536 "data/maps/SlateportCity/scripts.pory"
	end
# 1537 "data/maps/SlateportCity/scripts.pory"

# 1538 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DiegoEvent::
# 1539 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1540 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_DIEGO, Common_Movement_FacePlayer
# 1541 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1542 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DiegoIntro, MSGBOX_DEFAULT
# 1543 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1544 "data/maps/SlateportCity/scripts.pory"
	@ the two ICE agents run in from the west (off-screen) along row 13
# 1545 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_ICE_COP_1, 26, 13
# 1546 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_ICE_COP_2, 25, 13
# 1547 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_ICE_COPS
# 1548 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_ICE_COP_1
# 1549 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_ICE_COP_2
# 1550 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_1, SlateportCity_Movement_CopRunIn
# 1551 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_2, SlateportCity_Movement_CopRunIn
# 1552 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1553 "data/maps/SlateportCity/scripts.pory"
	@ Diego and Abuela stand their ground until the agents reach them, then panic
# 1554 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_DIEGO, SlateportCity_Movement_PairNotice
# 1555 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ABUELA, SlateportCity_Movement_PairNotice
# 1556 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1557 "data/maps/SlateportCity/scripts.pory"
	@ if the player is standing in the escape lane (row 14), they step back
# 1558 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 1559 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_0x8005, 14, SlateportCity_EventScript_DiegoPlayerStepBack
# 1560 "data/maps/SlateportCity/scripts.pory"
	@ 1) the pair bolts west along row 14 and escapes off-screen
# 1561 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_DIEGO, SlateportCity_Movement_PairFlee
# 1562 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ABUELA, SlateportCity_Movement_PairFlee
# 1563 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1564 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_DIEGO
# 1565 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_ABUELA
# 1566 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_DIEGO_EVENT
# 1567 "data/maps/SlateportCity/scripts.pory"
	@ 2) only then do the agents yell after them
# 1568 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IceStop, MSGBOX_DEFAULT
# 1569 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1570 "data/maps/SlateportCity/scripts.pory"
	@ 3) and give chase out the same way
# 1571 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_1, SlateportCity_Movement_CopChase
# 1572 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_2, SlateportCity_Movement_CopChase
# 1573 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1574 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_ICE_COP_1
# 1575 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_ICE_COP_2
# 1576 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_ICE_COPS
# 1577 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_DIEGO_STATE, 1
# 1578 "data/maps/SlateportCity/scripts.pory"
	delay 20
# 1579 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PowderGag, MSGBOX_DEFAULT
# 1580 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
# 1581 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1582 "data/maps/SlateportCity/scripts.pory"
	end
# 1583 "data/maps/SlateportCity/scripts.pory"

# 1584 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DiegoPlayerStepBack::
# 1585 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerStepBack
# 1586 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1587 "data/maps/SlateportCity/scripts.pory"
	return
# 1588 "data/maps/SlateportCity/scripts.pory"

# 1589 "data/maps/SlateportCity/scripts.pory"
@ Agents spawn at (26,13)/(25,13) and run 8 tiles east, stopping at (34,13)/(33,13),
# 1590 "data/maps/SlateportCity/scripts.pory"
@ two tiles shy of Abuela so they never overlap a player standing at (35,13).
# 1591 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_CopRunIn:
# 1592 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1593 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1594 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1595 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1596 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1597 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1598 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1599 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1600 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1601 "data/maps/SlateportCity/scripts.pory"

# 1602 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PairNotice:
# 1603 "data/maps/SlateportCity/scripts.pory"
	face_left
# 1604 "data/maps/SlateportCity/scripts.pory"
	emote_exclamation_mark
# 1605 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1606 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1607 "data/maps/SlateportCity/scripts.pory"

# 1608 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerStepBack:
# 1609 "data/maps/SlateportCity/scripts.pory"
	walk_fast_down
# 1610 "data/maps/SlateportCity/scripts.pory"
	face_up
# 1611 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1612 "data/maps/SlateportCity/scripts.pory"

# 1613 "data/maps/SlateportCity/scripts.pory"
@ Diego (37,13) / Abuela (36,13): duck south to row 14, then sprint west off-screen
# 1614 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PairFlee:
# 1615 "data/maps/SlateportCity/scripts.pory"
	walk_fast_down
# 1616 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1617 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1618 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1619 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1620 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
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
	step_end
# 1627 "data/maps/SlateportCity/scripts.pory"

# 1628 "data/maps/SlateportCity/scripts.pory"
@ Agents at (34,13)/(33,13): drop to row 14 and give chase
# 1629 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_CopChase:
# 1630 "data/maps/SlateportCity/scripts.pory"
	walk_fast_down
# 1631 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1632 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1633 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1634 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1635 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1636 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1637 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1638 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1639 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1640 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1641 "data/maps/SlateportCity/scripts.pory"

# 1642 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DiegoIntro:
# 1643 "data/maps/SlateportCity/scripts.pory"
	.string "Yes Abuela, I have the coke up my…\p"
# 1644 "data/maps/SlateportCity/scripts.pory"
	.string "OH! Sorry, didn't see you there.\p"
# 1645 "data/maps/SlateportCity/scripts.pory"
	.string "I am Diego. Thanks to water-type\n"
# 1646 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON, sneaking across borders to\l"
# 1647 "data/maps/SlateportCity/scripts.pory"
	.string "steal your country's health care and\l"
# 1648 "data/maps/SlateportCity/scripts.pory"
	.string "government-funded housing has never\l"
# 1649 "data/maps/SlateportCity/scripts.pory"
	.string "been easier! Actually, I was just-$"
# 1650 "data/maps/SlateportCity/scripts.pory"

# 1651 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IceStop:
# 1652 "data/maps/SlateportCity/scripts.pory"
	.string "STOP! YOU ARE BEING DEPORTED!$"
# 1653 "data/maps/SlateportCity/scripts.pory"

# 1654 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PowderGag:
# 1655 "data/maps/SlateportCity/scripts.pory"
	.string "A mysterious powder fell out of\n"
# 1656 "data/maps/SlateportCity/scripts.pory"
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
