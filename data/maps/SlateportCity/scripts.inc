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
	pokemartlistend

# 148 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 149 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 150 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 151 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 152 "data/maps/SlateportCity/scripts.pory"

# 153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 154 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 155 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 156 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_ReconcileDiegoEvent
# 157 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 158 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 159 "data/maps/SlateportCity/scripts.pory"
	end
# 160 "data/maps/SlateportCity/scripts.pory"

# 161 "data/maps/SlateportCity/scripts.pory"
@ Diego/Abuela visibility is derived from the event state var every map entry, so
# 162 "data/maps/SlateportCity/scripts.pory"
@ stale flag bits in an existing save cannot hide them incorrectly. The ICE cops are
# 163 "data/maps/SlateportCity/scripts.pory"
@ force-hidden on every entry; they only appear mid-cutscene via addobject.
# 164 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReconcileDiegoEvent::
# 165 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_ICE_COPS
# 166 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_DIEGO_STATE, 1, SlateportCity_EventScript_HideDiegoAbuela
# 167 "data/maps/SlateportCity/scripts.pory"
	call_if_ne VAR_SLATEPORT_DIEGO_STATE, 1, SlateportCity_EventScript_ShowDiegoAbuela
# 168 "data/maps/SlateportCity/scripts.pory"
	return
# 169 "data/maps/SlateportCity/scripts.pory"

# 170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HideDiegoAbuela::
# 171 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_DIEGO_EVENT
# 172 "data/maps/SlateportCity/scripts.pory"
	return
# 173 "data/maps/SlateportCity/scripts.pory"

# 174 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ShowDiegoAbuela::
# 175 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_DIEGO_STATE, 0
# 176 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_DIEGO_EVENT
# 177 "data/maps/SlateportCity/scripts.pory"
	return
# 178 "data/maps/SlateportCity/scripts.pory"

# 179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 180 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 181 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 182 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 183 "data/maps/SlateportCity/scripts.pory"
	return
# 184 "data/maps/SlateportCity/scripts.pory"

# 185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 186 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 187 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 188 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 189 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 190 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 191 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 192 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 193 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 194 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 195 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 196 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 197 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 198 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 199 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 200 "data/maps/SlateportCity/scripts.pory"
	return
# 201 "data/maps/SlateportCity/scripts.pory"

# 202 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 203 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 204 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 205 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 206 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 207 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 208 "data/maps/SlateportCity/scripts.pory"
	return
# 209 "data/maps/SlateportCity/scripts.pory"

# 210 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 211 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 212 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 213 "data/maps/SlateportCity/scripts.pory"
	return
# 214 "data/maps/SlateportCity/scripts.pory"

# 215 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 216 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 217 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 218 "data/maps/SlateportCity/scripts.pory"

# 219 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 220 "data/maps/SlateportCity/scripts.pory"
	lockall
# 221 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 222 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 223 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 224 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 225 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 226 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 227 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 228 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 229 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 230 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 231 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 232 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 234 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 235 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 236 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 237 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 238 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 239 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 240 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 241 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 242 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 243 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 244 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 245 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 246 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 247 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 248 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 249 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 250 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 251 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 252 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 253 "data/maps/SlateportCity/scripts.pory"
	end
# 254 "data/maps/SlateportCity/scripts.pory"

# 255 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 256 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 257 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 258 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 259 "data/maps/SlateportCity/scripts.pory"
	step_end
# 260 "data/maps/SlateportCity/scripts.pory"

# 261 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 262 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 263 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 264 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 265 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 266 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 267 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 268 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 269 "data/maps/SlateportCity/scripts.pory"
	step_end
# 270 "data/maps/SlateportCity/scripts.pory"

# 271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 272 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 273 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 274 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 275 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 276 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 277 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 278 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 279 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 280 "data/maps/SlateportCity/scripts.pory"
	step_end
# 281 "data/maps/SlateportCity/scripts.pory"

# 282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 283 "data/maps/SlateportCity/scripts.pory"
	lock
# 284 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 285 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 286 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 287 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 288 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 289 "data/maps/SlateportCity/scripts.pory"
	release
# 290 "data/maps/SlateportCity/scripts.pory"
	end
# 291 "data/maps/SlateportCity/scripts.pory"

# 292 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 294 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 295 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 296 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 297 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 298 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 299 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 300 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 301 "data/maps/SlateportCity/scripts.pory"

# 302 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 303 "data/maps/SlateportCity/scripts.pory"
	lock
# 304 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 305 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 306 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 307 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 308 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 309 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 310 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 311 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 312 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 313 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 314 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 315 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 316 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 317 "data/maps/SlateportCity/scripts.pory"
	release
# 318 "data/maps/SlateportCity/scripts.pory"
	end
# 319 "data/maps/SlateportCity/scripts.pory"

# 320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 321 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 322 "data/maps/SlateportCity/scripts.pory"
	release
# 323 "data/maps/SlateportCity/scripts.pory"
	end
# 324 "data/maps/SlateportCity/scripts.pory"

# 325 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 326 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 327 "data/maps/SlateportCity/scripts.pory"
	release
# 328 "data/maps/SlateportCity/scripts.pory"
	end
# 329 "data/maps/SlateportCity/scripts.pory"

# 330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 331 "data/maps/SlateportCity/scripts.pory"
	lock
# 332 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 333 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 334 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 335 "data/maps/SlateportCity/scripts.pory"
	release
# 336 "data/maps/SlateportCity/scripts.pory"
	end
# 337 "data/maps/SlateportCity/scripts.pory"

# 338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 339 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 340 "data/maps/SlateportCity/scripts.pory"
	release
# 341 "data/maps/SlateportCity/scripts.pory"
	end
# 342 "data/maps/SlateportCity/scripts.pory"

# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 344 "data/maps/SlateportCity/scripts.pory"
	lock
# 345 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 346 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 347 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 348 "data/maps/SlateportCity/scripts.pory"
	release
# 349 "data/maps/SlateportCity/scripts.pory"
	end
# 350 "data/maps/SlateportCity/scripts.pory"

# 351 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 352 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 353 "data/maps/SlateportCity/scripts.pory"
	release
# 354 "data/maps/SlateportCity/scripts.pory"
	end
# 355 "data/maps/SlateportCity/scripts.pory"

# 356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 357 "data/maps/SlateportCity/scripts.pory"
	lock
# 358 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 359 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 360 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 361 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 362 "data/maps/SlateportCity/scripts.pory"
	release
# 363 "data/maps/SlateportCity/scripts.pory"
	end
# 364 "data/maps/SlateportCity/scripts.pory"

# 365 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 366 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 367 "data/maps/SlateportCity/scripts.pory"
	release
# 368 "data/maps/SlateportCity/scripts.pory"
	end
# 369 "data/maps/SlateportCity/scripts.pory"

# 370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 371 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 372 "data/maps/SlateportCity/scripts.pory"
	release
# 373 "data/maps/SlateportCity/scripts.pory"
	end
# 374 "data/maps/SlateportCity/scripts.pory"

# 375 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 376 "data/maps/SlateportCity/scripts.pory"
	lock
# 377 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 378 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 379 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 380 "data/maps/SlateportCity/scripts.pory"
	release
# 381 "data/maps/SlateportCity/scripts.pory"
	end
# 382 "data/maps/SlateportCity/scripts.pory"

# 383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 384 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 385 "data/maps/SlateportCity/scripts.pory"
	release
# 386 "data/maps/SlateportCity/scripts.pory"
	end
# 387 "data/maps/SlateportCity/scripts.pory"

# 388 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 389 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 390 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 391 "data/maps/SlateportCity/scripts.pory"
	end
# 392 "data/maps/SlateportCity/scripts.pory"

# 393 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 394 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 395 "data/maps/SlateportCity/scripts.pory"
	end
# 396 "data/maps/SlateportCity/scripts.pory"

# 397 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 398 "data/maps/SlateportCity/scripts.pory"
	lock
# 399 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 400 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 401 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 402 "data/maps/SlateportCity/scripts.pory"
	release
# 403 "data/maps/SlateportCity/scripts.pory"
	end
# 404 "data/maps/SlateportCity/scripts.pory"

# 405 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 406 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 407 "data/maps/SlateportCity/scripts.pory"
	release
# 408 "data/maps/SlateportCity/scripts.pory"
	end
# 409 "data/maps/SlateportCity/scripts.pory"

# 410 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 411 "data/maps/SlateportCity/scripts.pory"
	lock
# 412 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 413 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 414 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 415 "data/maps/SlateportCity/scripts.pory"
	release
# 416 "data/maps/SlateportCity/scripts.pory"
	end
# 417 "data/maps/SlateportCity/scripts.pory"

# 418 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 419 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 420 "data/maps/SlateportCity/scripts.pory"
	release
# 421 "data/maps/SlateportCity/scripts.pory"
	end
# 422 "data/maps/SlateportCity/scripts.pory"

# 423 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 424 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 425 "data/maps/SlateportCity/scripts.pory"
	end
# 426 "data/maps/SlateportCity/scripts.pory"

# 427 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 428 "data/maps/SlateportCity/scripts.pory"
	lockall
# 429 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 430 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 431 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 432 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 433 "data/maps/SlateportCity/scripts.pory"
	end
# 434 "data/maps/SlateportCity/scripts.pory"

# 435 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 436 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 437 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 438 "data/maps/SlateportCity/scripts.pory"
	end
# 439 "data/maps/SlateportCity/scripts.pory"

# 440 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 441 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 442 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 443 "data/maps/SlateportCity/scripts.pory"
	end
# 444 "data/maps/SlateportCity/scripts.pory"

# 445 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 446 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 447 "data/maps/SlateportCity/scripts.pory"
	end
# 448 "data/maps/SlateportCity/scripts.pory"

# 449 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 450 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 451 "data/maps/SlateportCity/scripts.pory"
	end
# 452 "data/maps/SlateportCity/scripts.pory"

# 453 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 454 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 455 "data/maps/SlateportCity/scripts.pory"
	end
# 456 "data/maps/SlateportCity/scripts.pory"

# 457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 458 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 459 "data/maps/SlateportCity/scripts.pory"
	end
# 460 "data/maps/SlateportCity/scripts.pory"

# 461 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 462 "data/maps/SlateportCity/scripts.pory"
	lockall
# 463 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 464 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 465 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 466 "data/maps/SlateportCity/scripts.pory"
	end
# 467 "data/maps/SlateportCity/scripts.pory"

# 468 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 469 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 470 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 471 "data/maps/SlateportCity/scripts.pory"
	end
# 472 "data/maps/SlateportCity/scripts.pory"

# 473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 474 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 475 "data/maps/SlateportCity/scripts.pory"
	end
# 476 "data/maps/SlateportCity/scripts.pory"

# 477 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 478 "data/maps/SlateportCity/scripts.pory"
	lock
# 479 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 480 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 481 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 482 "data/maps/SlateportCity/scripts.pory"
	release
# 483 "data/maps/SlateportCity/scripts.pory"
	end
# 484 "data/maps/SlateportCity/scripts.pory"

# 485 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 486 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 487 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 488 "data/maps/SlateportCity/scripts.pory"
	release
# 489 "data/maps/SlateportCity/scripts.pory"
	end
# 490 "data/maps/SlateportCity/scripts.pory"

# 491 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 492 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 493 "data/maps/SlateportCity/scripts.pory"
	end
# 494 "data/maps/SlateportCity/scripts.pory"

# 495 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 496 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 497 "data/maps/SlateportCity/scripts.pory"
	end
# 498 "data/maps/SlateportCity/scripts.pory"

# 499 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 500 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 501 "data/maps/SlateportCity/scripts.pory"
	end
# 502 "data/maps/SlateportCity/scripts.pory"

# 503 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 504 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 505 "data/maps/SlateportCity/scripts.pory"
	end
# 506 "data/maps/SlateportCity/scripts.pory"

# 507 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 508 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 509 "data/maps/SlateportCity/scripts.pory"
	end
# 510 "data/maps/SlateportCity/scripts.pory"

# 511 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 512 "data/maps/SlateportCity/scripts.pory"
	lock
# 513 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 514 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 515 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 516 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 517 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 518 "data/maps/SlateportCity/scripts.pory"
	release
# 519 "data/maps/SlateportCity/scripts.pory"
	end
# 520 "data/maps/SlateportCity/scripts.pory"

# 521 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 522 "data/maps/SlateportCity/scripts.pory"
	lock
# 523 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 524 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 525 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 526 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 527 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/SlateportCity/scripts.pory"
	release
# 529 "data/maps/SlateportCity/scripts.pory"
	end
# 530 "data/maps/SlateportCity/scripts.pory"

# 531 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 532 "data/maps/SlateportCity/scripts.pory"
	lock
# 533 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 534 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 535 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 536 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 537 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/SlateportCity/scripts.pory"
	release
# 539 "data/maps/SlateportCity/scripts.pory"
	end
# 540 "data/maps/SlateportCity/scripts.pory"

# 541 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 542 "data/maps/SlateportCity/scripts.pory"
	lock
# 543 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 544 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 545 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 546 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 547 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/SlateportCity/scripts.pory"
	release
# 549 "data/maps/SlateportCity/scripts.pory"
	end
# 550 "data/maps/SlateportCity/scripts.pory"

# 551 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 552 "data/maps/SlateportCity/scripts.pory"
	lock
# 553 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 554 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 555 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 556 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 557 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/SlateportCity/scripts.pory"
	release
# 559 "data/maps/SlateportCity/scripts.pory"
	end
# 560 "data/maps/SlateportCity/scripts.pory"

# 561 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 562 "data/maps/SlateportCity/scripts.pory"
	lock
# 563 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 564 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 565 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 566 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 567 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/SlateportCity/scripts.pory"
	release
# 569 "data/maps/SlateportCity/scripts.pory"
	end
# 570 "data/maps/SlateportCity/scripts.pory"

# 571 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 572 "data/maps/SlateportCity/scripts.pory"
	lock
# 573 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 574 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 575 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 576 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 577 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/SlateportCity/scripts.pory"
	release
# 579 "data/maps/SlateportCity/scripts.pory"
	end
# 580 "data/maps/SlateportCity/scripts.pory"

# 581 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 582 "data/maps/SlateportCity/scripts.pory"
	lock
# 583 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 584 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 585 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 586 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 587 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/SlateportCity/scripts.pory"
	release
# 589 "data/maps/SlateportCity/scripts.pory"
	end
# 590 "data/maps/SlateportCity/scripts.pory"

# 591 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 592 "data/maps/SlateportCity/scripts.pory"
	lock
# 593 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 594 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 595 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 596 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 597 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 598 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 599 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 600 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 601 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 602 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 603 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 604 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 605 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 606 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 607 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 608 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 609 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 610 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 611 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 612 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 614 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 615 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 616 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 618 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 619 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 620 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/SlateportCity/scripts.pory"
	release
# 622 "data/maps/SlateportCity/scripts.pory"
	end
# 623 "data/maps/SlateportCity/scripts.pory"

# 624 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 625 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 626 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 627 "data/maps/SlateportCity/scripts.pory"
	step_end
# 628 "data/maps/SlateportCity/scripts.pory"

# 629 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 630 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 631 "data/maps/SlateportCity/scripts.pory"
	end
# 632 "data/maps/SlateportCity/scripts.pory"

# 633 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 634 "data/maps/SlateportCity/scripts.pory"
	lock
# 635 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 636 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 637 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 638 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 639 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/SlateportCity/scripts.pory"
	release
# 641 "data/maps/SlateportCity/scripts.pory"
	end
# 642 "data/maps/SlateportCity/scripts.pory"

# 643 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 644 "data/maps/SlateportCity/scripts.pory"
	lock
# 645 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 646 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 647 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 648 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 649 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 650 "data/maps/SlateportCity/scripts.pory"
	release
# 651 "data/maps/SlateportCity/scripts.pory"
	end
# 652 "data/maps/SlateportCity/scripts.pory"

# 653 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 654 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 655 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 656 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 657 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 658 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 659 "data/maps/SlateportCity/scripts.pory"

# 660 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 661 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 662 "data/maps/SlateportCity/scripts.pory"
	release
# 663 "data/maps/SlateportCity/scripts.pory"
	end
# 664 "data/maps/SlateportCity/scripts.pory"

# 665 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 666 "data/maps/SlateportCity/scripts.pory"
	lock
# 667 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 668 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 669 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 670 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 671 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 672 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 673 "data/maps/SlateportCity/scripts.pory"
	release
# 674 "data/maps/SlateportCity/scripts.pory"
	end
# 675 "data/maps/SlateportCity/scripts.pory"

# 676 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 677 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 678 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 679 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 680 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 681 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 682 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 683 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 684 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 685 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 686 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 687 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 688 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 689 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 690 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 691 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 692 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 693 "data/maps/SlateportCity/scripts.pory"

# 694 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 695 "data/maps/SlateportCity/scripts.pory"
	lock
# 696 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 697 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 698 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 699 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 700 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 701 "data/maps/SlateportCity/scripts.pory"
	release
# 702 "data/maps/SlateportCity/scripts.pory"
	end
# 703 "data/maps/SlateportCity/scripts.pory"

# 704 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 705 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 706 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 707 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 708 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 709 "data/maps/SlateportCity/scripts.pory"

# 710 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 711 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 712 "data/maps/SlateportCity/scripts.pory"
	lockall
# 713 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 714 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 715 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 716 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 717 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 719 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 720 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 721 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 722 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 723 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 724 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 725 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 726 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 728 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 729 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 730 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 731 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 733 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 734 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 735 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 736 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 737 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 738 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 739 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 740 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 741 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 742 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 744 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 745 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 746 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 748 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 750 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 751 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 752 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 753 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 754 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 755 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 756 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 758 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 759 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 760 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 761 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 762 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 763 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 764 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 765 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 766 "data/maps/SlateportCity/scripts.pory"
	end
# 767 "data/maps/SlateportCity/scripts.pory"

# 768 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 769 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 770 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 771 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 772 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 773 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 774 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 775 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 776 "data/maps/SlateportCity/scripts.pory"
	step_end
# 777 "data/maps/SlateportCity/scripts.pory"

# 778 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 779 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 780 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 781 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 782 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 783 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 784 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 785 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 786 "data/maps/SlateportCity/scripts.pory"
	step_end
# 787 "data/maps/SlateportCity/scripts.pory"

# 788 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 789 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 790 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 791 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 792 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 793 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 794 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 795 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 796 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 797 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 798 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 799 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 800 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 801 "data/maps/SlateportCity/scripts.pory"
	step_end
# 802 "data/maps/SlateportCity/scripts.pory"

# 803 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 804 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 805 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 806 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 807 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 808 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 809 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 810 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 811 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 812 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 813 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 814 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 815 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 816 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 817 "data/maps/SlateportCity/scripts.pory"
	step_end
# 818 "data/maps/SlateportCity/scripts.pory"

# 819 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 820 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 821 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 822 "data/maps/SlateportCity/scripts.pory"
	step_end
# 823 "data/maps/SlateportCity/scripts.pory"

# 824 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 825 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 826 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 827 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 828 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 829 "data/maps/SlateportCity/scripts.pory"
	step_end
# 830 "data/maps/SlateportCity/scripts.pory"

# 831 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 832 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 833 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 834 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 835 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 836 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 837 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 838 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 839 "data/maps/SlateportCity/scripts.pory"
	step_end
# 840 "data/maps/SlateportCity/scripts.pory"

# 841 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 842 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 843 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 844 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 845 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 846 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 847 "data/maps/SlateportCity/scripts.pory"
	step_end
# 848 "data/maps/SlateportCity/scripts.pory"

# 849 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 850 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 851 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 852 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 853 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 854 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 855 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 856 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 857 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 858 "data/maps/SlateportCity/scripts.pory"
	step_end
# 859 "data/maps/SlateportCity/scripts.pory"

# 860 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 861 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 862 "data/maps/SlateportCity/scripts.pory"
	end
# 863 "data/maps/SlateportCity/scripts.pory"

# 864 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 865 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 866 "data/maps/SlateportCity/scripts.pory"
	end
# 867 "data/maps/SlateportCity/scripts.pory"

# 868 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 869 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 870 "data/maps/SlateportCity/scripts.pory"
	end
# 871 "data/maps/SlateportCity/scripts.pory"

# 872 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 873 "data/maps/SlateportCity/scripts.pory"
	lock
# 874 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 875 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 876 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 877 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 878 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 879 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 880 "data/maps/SlateportCity/scripts.pory"
	release
# 881 "data/maps/SlateportCity/scripts.pory"
	end
# 882 "data/maps/SlateportCity/scripts.pory"

# 883 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 884 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 885 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 886 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 887 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 888 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 889 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 890 "data/maps/SlateportCity/scripts.pory"
	end
# 891 "data/maps/SlateportCity/scripts.pory"

# 892 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 893 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 894 "data/maps/SlateportCity/scripts.pory"
	release
# 895 "data/maps/SlateportCity/scripts.pory"
	end
# 896 "data/maps/SlateportCity/scripts.pory"

# 897 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 898 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 899 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 900 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 901 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 902 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 903 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 904 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 905 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 906 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 907 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 908 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 909 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 910 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 911 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 912 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 913 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 914 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 915 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 916 "data/maps/SlateportCity/scripts.pory"
	end
# 917 "data/maps/SlateportCity/scripts.pory"

# 918 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 919 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 920 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 921 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 922 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 923 "data/maps/SlateportCity/scripts.pory"
	end
# 924 "data/maps/SlateportCity/scripts.pory"

# 925 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 926 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 927 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 928 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 929 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 930 "data/maps/SlateportCity/scripts.pory"
	end
# 931 "data/maps/SlateportCity/scripts.pory"

# 932 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 933 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 934 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 935 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 936 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 937 "data/maps/SlateportCity/scripts.pory"
	end
# 938 "data/maps/SlateportCity/scripts.pory"

# 939 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 940 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 941 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 942 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 943 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 944 "data/maps/SlateportCity/scripts.pory"
	end
# 945 "data/maps/SlateportCity/scripts.pory"

# 946 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 947 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 948 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 949 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 950 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 951 "data/maps/SlateportCity/scripts.pory"
	end
# 952 "data/maps/SlateportCity/scripts.pory"

# 953 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 954 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 955 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 956 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 957 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 958 "data/maps/SlateportCity/scripts.pory"
	end
# 959 "data/maps/SlateportCity/scripts.pory"

# 960 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 961 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 962 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 963 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 964 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 965 "data/maps/SlateportCity/scripts.pory"
	end
# 966 "data/maps/SlateportCity/scripts.pory"

# 967 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 968 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 969 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 970 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 971 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 972 "data/maps/SlateportCity/scripts.pory"
	end
# 973 "data/maps/SlateportCity/scripts.pory"

# 974 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 975 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 976 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 977 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 978 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 979 "data/maps/SlateportCity/scripts.pory"
	end
# 980 "data/maps/SlateportCity/scripts.pory"

# 981 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 982 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 983 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 984 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 985 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 986 "data/maps/SlateportCity/scripts.pory"
	end
# 987 "data/maps/SlateportCity/scripts.pory"

# 988 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 989 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 990 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 991 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 992 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 993 "data/maps/SlateportCity/scripts.pory"
	end
# 994 "data/maps/SlateportCity/scripts.pory"

# 995 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 996 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 997 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 998 "data/maps/SlateportCity/scripts.pory"
	release
# 999 "data/maps/SlateportCity/scripts.pory"
	end
# 1000 "data/maps/SlateportCity/scripts.pory"

# 1001 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1002 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1003 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 1004 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1005 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1006 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 1007 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1008 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1009 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1010 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1011 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1012 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1013 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 1014 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1015 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1016 "data/maps/SlateportCity/scripts.pory"
	release
# 1017 "data/maps/SlateportCity/scripts.pory"
	end
# 1018 "data/maps/SlateportCity/scripts.pory"

# 1019 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1020 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1021 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1022 "data/maps/SlateportCity/scripts.pory"
	release
# 1023 "data/maps/SlateportCity/scripts.pory"
	end
# 1024 "data/maps/SlateportCity/scripts.pory"

# 1025 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1026 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1027 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1028 "data/maps/SlateportCity/scripts.pory"
	end
# 1029 "data/maps/SlateportCity/scripts.pory"

# 1030 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1031 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1032 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 1033 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1034 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1035 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1036 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 1037 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1038 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1039 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1040 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1041 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1042 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1043 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1044 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1045 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1046 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1047 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 1048 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1049 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1050 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1051 "data/maps/SlateportCity/scripts.pory"
	end
# 1052 "data/maps/SlateportCity/scripts.pory"

# 1053 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 1054 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1055 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1056 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1057 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1058 "data/maps/SlateportCity/scripts.pory"

# 1059 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1060 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1061 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1062 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1063 "data/maps/SlateportCity/scripts.pory"

# 1064 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1065 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1066 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1067 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1068 "data/maps/SlateportCity/scripts.pory"

# 1069 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1070 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1071 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1072 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1073 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1074 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1075 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1076 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1077 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1078 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1079 "data/maps/SlateportCity/scripts.pory"

# 1080 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1081 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1082 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1083 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1084 "data/maps/SlateportCity/scripts.pory"
	end
# 1085 "data/maps/SlateportCity/scripts.pory"

# 1086 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1089 "data/maps/SlateportCity/scripts.pory"

# 1090 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1093 "data/maps/SlateportCity/scripts.pory"

# 1094 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1098 "data/maps/SlateportCity/scripts.pory"

# 1099 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1101 "data/maps/SlateportCity/scripts.pory"

# 1102 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1105 "data/maps/SlateportCity/scripts.pory"

# 1106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1110 "data/maps/SlateportCity/scripts.pory"

# 1111 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1112 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1114 "data/maps/SlateportCity/scripts.pory"

# 1115 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1120 "data/maps/SlateportCity/scripts.pory"

# 1121 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1127 "data/maps/SlateportCity/scripts.pory"

# 1128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1134 "data/maps/SlateportCity/scripts.pory"

# 1135 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1139 "data/maps/SlateportCity/scripts.pory"

# 1140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1146 "data/maps/SlateportCity/scripts.pory"

# 1147 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1152 "data/maps/SlateportCity/scripts.pory"

# 1153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1159 "data/maps/SlateportCity/scripts.pory"

# 1160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1165 "data/maps/SlateportCity/scripts.pory"

# 1166 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1169 "data/maps/SlateportCity/scripts.pory"

# 1170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1175 "data/maps/SlateportCity/scripts.pory"

# 1176 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1179 "data/maps/SlateportCity/scripts.pory"

# 1180 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1184 "data/maps/SlateportCity/scripts.pory"

# 1185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1189 "data/maps/SlateportCity/scripts.pory"

# 1190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1194 "data/maps/SlateportCity/scripts.pory"

# 1195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1198 "data/maps/SlateportCity/scripts.pory"

# 1199 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1202 "data/maps/SlateportCity/scripts.pory"

# 1203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1207 "data/maps/SlateportCity/scripts.pory"

# 1208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1211 "data/maps/SlateportCity/scripts.pory"

# 1212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1215 "data/maps/SlateportCity/scripts.pory"

# 1216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1219 "data/maps/SlateportCity/scripts.pory"

# 1220 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1226 "data/maps/SlateportCity/scripts.pory"

# 1227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1232 "data/maps/SlateportCity/scripts.pory"

# 1233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1238 "data/maps/SlateportCity/scripts.pory"

# 1239 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1243 "data/maps/SlateportCity/scripts.pory"

# 1244 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1249 "data/maps/SlateportCity/scripts.pory"

# 1250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1253 "data/maps/SlateportCity/scripts.pory"

# 1254 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1258 "data/maps/SlateportCity/scripts.pory"

# 1259 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1264 "data/maps/SlateportCity/scripts.pory"

# 1265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1272 "data/maps/SlateportCity/scripts.pory"

# 1273 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1278 "data/maps/SlateportCity/scripts.pory"

# 1279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1284 "data/maps/SlateportCity/scripts.pory"

# 1285 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1290 "data/maps/SlateportCity/scripts.pory"

# 1291 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1295 "data/maps/SlateportCity/scripts.pory"

# 1296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1299 "data/maps/SlateportCity/scripts.pory"

# 1300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1303 "data/maps/SlateportCity/scripts.pory"

# 1304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1307 "data/maps/SlateportCity/scripts.pory"

# 1308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1311 "data/maps/SlateportCity/scripts.pory"

# 1312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1315 "data/maps/SlateportCity/scripts.pory"

# 1316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1322 "data/maps/SlateportCity/scripts.pory"

# 1323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1327 "data/maps/SlateportCity/scripts.pory"

# 1328 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1337 "data/maps/SlateportCity/scripts.pory"

# 1338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1348 "data/maps/SlateportCity/scripts.pory"

# 1349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1354 "data/maps/SlateportCity/scripts.pory"

# 1355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1359 "data/maps/SlateportCity/scripts.pory"

# 1360 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1363 "data/maps/SlateportCity/scripts.pory"

# 1364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1367 "data/maps/SlateportCity/scripts.pory"

# 1368 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1371 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1372 "data/maps/SlateportCity/scripts.pory"

# 1373 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1375 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1378 "data/maps/SlateportCity/scripts.pory"

# 1379 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1383 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1384 "data/maps/SlateportCity/scripts.pory"

# 1385 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1386 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1387 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1388 "data/maps/SlateportCity/scripts.pory"

# 1389 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1391 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1393 "data/maps/SlateportCity/scripts.pory"

# 1394 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1395 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1398 "data/maps/SlateportCity/scripts.pory"

# 1399 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1400 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1402 "data/maps/SlateportCity/scripts.pory"

# 1403 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1405 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1407 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1408 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1409 "data/maps/SlateportCity/scripts.pory"

# 1410 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1411 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1412 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1413 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1414 "data/maps/SlateportCity/scripts.pory"

# 1415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1416 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1417 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1418 "data/maps/SlateportCity/scripts.pory"

# 1419 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1420 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1421 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1422 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1423 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1424 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1425 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1426 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1427 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1428 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1429 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1430 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1431 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1433 "data/maps/SlateportCity/scripts.pory"

# 1434 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1435 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1436 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1437 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1438 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1439 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1440 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1441 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1442 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1443 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1444 "data/maps/SlateportCity/scripts.pory"

# 1445 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1446 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1447 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1448 "data/maps/SlateportCity/scripts.pory"

# 1449 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1450 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1451 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1452 "data/maps/SlateportCity/scripts.pory"

# 1453 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1454 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1455 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1456 "data/maps/SlateportCity/scripts.pory"

# 1457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1458 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1459 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1460 "data/maps/SlateportCity/scripts.pory"

# 1461 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1462 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1463 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1464 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1465 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1466 "data/maps/SlateportCity/scripts.pory"

# 1467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1468 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1469 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1470 "data/maps/SlateportCity/scripts.pory"

# 1471 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1472 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1473 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1474 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1475 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1476 "data/maps/SlateportCity/scripts.pory"

# 1477 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1478 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1479 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1480 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1481 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1482 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1483 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1484 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1485 "data/maps/SlateportCity/scripts.pory"

# 1486 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1487 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1488 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1489 "data/maps/SlateportCity/scripts.pory"

# 1490 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1491 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1492 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1493 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1494 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1495 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1496 "data/maps/SlateportCity/scripts.pory"

# 1497 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1498 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1499 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1500 "data/maps/SlateportCity/scripts.pory"

# 1501 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1502 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1503 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1504 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1505 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1506 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1507 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1508 "data/maps/SlateportCity/scripts.pory"

# 1509 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1510 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1511 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1512 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1513 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1514 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1515 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1516 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1517 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1518 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
# 1519 "data/maps/SlateportCity/scripts.pory"

# 1520 "data/maps/SlateportCity/scripts.pory"
@ ------------------------------------------------------------------
# 1521 "data/maps/SlateportCity/scripts.pory"
@ Diego / Abuela smuggling cutscene (Slateport, top-right corner)
# 1522 "data/maps/SlateportCity/scripts.pory"
@ Talking to either the hiker (Diego) or the old woman (Abuela) starts it.
# 1523 "data/maps/SlateportCity/scripts.pory"
@ ------------------------------------------------------------------
# 1524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Diego::
# 1525 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_DiegoEvent
# 1526 "data/maps/SlateportCity/scripts.pory"
	end
# 1527 "data/maps/SlateportCity/scripts.pory"

# 1528 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Diegoabuela::
# 1529 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_DiegoEvent
# 1530 "data/maps/SlateportCity/scripts.pory"
	end
# 1531 "data/maps/SlateportCity/scripts.pory"

# 1532 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DiegoEvent::
# 1533 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1534 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_DIEGO, Common_Movement_FacePlayer
# 1535 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1536 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DiegoIntro, MSGBOX_DEFAULT
# 1537 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1538 "data/maps/SlateportCity/scripts.pory"
	@ the two ICE agents run in from the west (off-screen) along row 13
# 1539 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_ICE_COP_1, 26, 13
# 1540 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_ICE_COP_2, 25, 13
# 1541 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_ICE_COPS
# 1542 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_ICE_COP_1
# 1543 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_ICE_COP_2
# 1544 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_1, SlateportCity_Movement_CopRunIn
# 1545 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_2, SlateportCity_Movement_CopRunIn
# 1546 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1547 "data/maps/SlateportCity/scripts.pory"
	@ Diego and Abuela stand their ground until the agents reach them, then panic
# 1548 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_DIEGO, SlateportCity_Movement_PairNotice
# 1549 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ABUELA, SlateportCity_Movement_PairNotice
# 1550 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1551 "data/maps/SlateportCity/scripts.pory"
	@ if the player is standing in the escape lane (row 14), they step back
# 1552 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 1553 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_0x8005, 14, SlateportCity_EventScript_DiegoPlayerStepBack
# 1554 "data/maps/SlateportCity/scripts.pory"
	@ 1) the pair bolts west along row 14 and escapes off-screen
# 1555 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_DIEGO, SlateportCity_Movement_PairFlee
# 1556 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ABUELA, SlateportCity_Movement_PairFlee
# 1557 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1558 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_DIEGO
# 1559 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_ABUELA
# 1560 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_DIEGO_EVENT
# 1561 "data/maps/SlateportCity/scripts.pory"
	@ 2) only then do the agents yell after them
# 1562 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IceStop, MSGBOX_DEFAULT
# 1563 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1564 "data/maps/SlateportCity/scripts.pory"
	@ 3) and give chase out the same way
# 1565 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_1, SlateportCity_Movement_CopChase
# 1566 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_ICE_COP_2, SlateportCity_Movement_CopChase
# 1567 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1568 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_ICE_COP_1
# 1569 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_ICE_COP_2
# 1570 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_ICE_COPS
# 1571 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_DIEGO_STATE, 1
# 1572 "data/maps/SlateportCity/scripts.pory"
	delay 20
# 1573 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PowderGag, MSGBOX_DEFAULT
# 1574 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
# 1575 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1576 "data/maps/SlateportCity/scripts.pory"
	end
# 1577 "data/maps/SlateportCity/scripts.pory"

# 1578 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DiegoPlayerStepBack::
# 1579 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerStepBack
# 1580 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1581 "data/maps/SlateportCity/scripts.pory"
	return
# 1582 "data/maps/SlateportCity/scripts.pory"

# 1583 "data/maps/SlateportCity/scripts.pory"
@ Agents spawn at (26,13)/(25,13) and run 8 tiles east, stopping at (34,13)/(33,13),
# 1584 "data/maps/SlateportCity/scripts.pory"
@ two tiles shy of Abuela so they never overlap a player standing at (35,13).
# 1585 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_CopRunIn:
# 1586 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1587 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1588 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1589 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1590 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1591 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1592 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1593 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 1594 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1595 "data/maps/SlateportCity/scripts.pory"

# 1596 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PairNotice:
# 1597 "data/maps/SlateportCity/scripts.pory"
	face_left
# 1598 "data/maps/SlateportCity/scripts.pory"
	emote_exclamation_mark
# 1599 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1600 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1601 "data/maps/SlateportCity/scripts.pory"

# 1602 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerStepBack:
# 1603 "data/maps/SlateportCity/scripts.pory"
	walk_fast_down
# 1604 "data/maps/SlateportCity/scripts.pory"
	face_up
# 1605 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1606 "data/maps/SlateportCity/scripts.pory"

# 1607 "data/maps/SlateportCity/scripts.pory"
@ Diego (37,13) / Abuela (36,13): duck south to row 14, then sprint west off-screen
# 1608 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PairFlee:
# 1609 "data/maps/SlateportCity/scripts.pory"
	walk_fast_down
# 1610 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1611 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1612 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1613 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1614 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1615 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1616 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1617 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1618 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1619 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1620 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1621 "data/maps/SlateportCity/scripts.pory"

# 1622 "data/maps/SlateportCity/scripts.pory"
@ Agents at (34,13)/(33,13): drop to row 14 and give chase
# 1623 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_CopChase:
# 1624 "data/maps/SlateportCity/scripts.pory"
	walk_fast_down
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
	walk_fast_left
# 1632 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1633 "data/maps/SlateportCity/scripts.pory"
	walk_fast_left
# 1634 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1635 "data/maps/SlateportCity/scripts.pory"

# 1636 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DiegoIntro:
# 1637 "data/maps/SlateportCity/scripts.pory"
	.string "Yes Abuela, I have the coke up my…\p"
# 1638 "data/maps/SlateportCity/scripts.pory"
	.string "OH! Sorry, didn't see you there.\p"
# 1639 "data/maps/SlateportCity/scripts.pory"
	.string "I am Diego. Thanks to water-type\n"
# 1640 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON, sneaking across borders to\l"
# 1641 "data/maps/SlateportCity/scripts.pory"
	.string "steal your country's health care and\l"
# 1642 "data/maps/SlateportCity/scripts.pory"
	.string "government-funded housing has never\l"
# 1643 "data/maps/SlateportCity/scripts.pory"
	.string "been easier! Actually, I was just-$"
# 1644 "data/maps/SlateportCity/scripts.pory"

# 1645 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IceStop:
# 1646 "data/maps/SlateportCity/scripts.pory"
	.string "STOP! YOU ARE BEING DEPORTED!$"
# 1647 "data/maps/SlateportCity/scripts.pory"

# 1648 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PowderGag:
# 1649 "data/maps/SlateportCity/scripts.pory"
	.string "A mysterious powder fell out of\n"
# 1650 "data/maps/SlateportCity/scripts.pory"
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
