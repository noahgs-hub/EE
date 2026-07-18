Route104_EventScript_SNORLAX::
# 13 "data/maps/Route104/scripts.pory"
	lockall
# 14 "data/maps/Route104/scripts.pory"
	checkfieldmove FIELD_MOVE_STRENGTH
# 15 "data/maps/Route104/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 16 "data/maps/Route104/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_eq Route104_EventScript_SNORLAX_2
# 21 "data/maps/Route104/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE + 1
	goto_if_eq Route104_EventScript_SNORLAX_5
# 35 "data/maps/Route104/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 36 "data/maps/Route104/scripts.pory"
	setfieldeffectargument 0, VAR_0x8004
# 37 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_SNORLAX_Text_2, MSGBOX_YESNO
# 38 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route104_EventScript_SNORLAX_15
# 43 "data/maps/Route104/scripts.pory"
	closemessage
# 44 "data/maps/Route104/scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 45 "data/maps/Route104/scripts.pory"
	waitstate
Route104_EventScript_SNORLAX_4:
# 48 "data/maps/Route104/scripts.pory"
	playse SE_M_STRENGTH
# 49 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_SNORLAX, Route104_Movement_SnorlaxPushed
# 50 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route104/scripts.pory"
	playse SE_M_DIVE
# 52 "data/maps/Route104/scripts.pory"
	setfieldeffectargument 0, LOCALID_ROUTE104_SNORLAX
# 53 "data/maps/Route104/scripts.pory"
	setfieldeffectargument 1, MAP_NUM ( MAP_ROUTE104 )
# 54 "data/maps/Route104/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP ( MAP_ROUTE104 )
# 55 "data/maps/Route104/scripts.pory"
	dofieldeffect FLDEFF_SPLASH
# 56 "data/maps/Route104/scripts.pory"
	delay 30
# 57 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_SNORLAX, Route104_Movement_SnorlaxAngry
# 58 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route104/scripts.pory"
	waitse
# 60 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 61 "data/maps/Route104/scripts.pory"
	delay 30
# 62 "data/maps/Route104/scripts.pory"
	waitmoncry
# 63 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_SNORLAX_Text_3, MSGBOX_DEFAULT
# 64 "data/maps/Route104/scripts.pory"
	closemessage
# 65 "data/maps/Route104/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 66 "data/maps/Route104/scripts.pory"
	dowildbattle
# 67 "data/maps/Route104/scripts.pory"
	setflag FLAG_DAILY_HIDE_ROUTE_104_SNORLAX
# 68 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_ROUTE104_SNORLAX
# 69 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne Route104_EventScript_SNORLAX_9
Route104_EventScript_SNORLAX_8:
# 73 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_SNORLAX_2:
# 17 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_SNORLAX_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_SNORLAX_5:
# 22 "data/maps/Route104/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_STRENGTH_TOOL
# 23 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_SNORLAX_Text_1, MSGBOX_YESNO
# 24 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route104_EventScript_SNORLAX_12
# 29 "data/maps/Route104/scripts.pory"
	closemessage
# 30 "data/maps/Route104/scripts.pory"
	setfieldeffectargument 0, PARTY_SIZE
# 31 "data/maps/Route104/scripts.pory"
	setfieldeffectargument 1, TRUE
# 32 "data/maps/Route104/scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 33 "data/maps/Route104/scripts.pory"
	waitstate
	goto Route104_EventScript_SNORLAX_4

Route104_EventScript_SNORLAX_9:
# 71 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_SNORLAX_Text_4, MSGBOX_DEFAULT
	goto Route104_EventScript_SNORLAX_8

Route104_EventScript_SNORLAX_12:
# 25 "data/maps/Route104/scripts.pory"
	closemessage
# 26 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_SNORLAX_15:
# 39 "data/maps/Route104/scripts.pory"
	closemessage
# 40 "data/maps/Route104/scripts.pory"
	releaseall
	end


# 77 "data/maps/Route104/scripts.pory"
Route104_Movement_SnorlaxPushed:
# 78 "data/maps/Route104/scripts.pory"
	walk_slow_left
	step_end

# 81 "data/maps/Route104/scripts.pory"
Route104_Movement_SnorlaxAngry:
# 82 "data/maps/Route104/scripts.pory"
	face_right
# 83 "data/maps/Route104/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 86 "data/maps/Route104/scripts.pory"

# 87 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 88 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 89 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 90 "data/maps/Route104/scripts.pory"
	.byte 0
# 91 "data/maps/Route104/scripts.pory"

# 92 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 93 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 94 "data/maps/Route104/scripts.pory"
	.2byte 0
# 95 "data/maps/Route104/scripts.pory"

# 96 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 97 "data/maps/Route104/scripts.pory"
	lockall
# 98 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 99 "data/maps/Route104/scripts.pory"
	end
# 100 "data/maps/Route104/scripts.pory"

# 101 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 102 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 103 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 104 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 105 "data/maps/Route104/scripts.pory"
	end
# 106 "data/maps/Route104/scripts.pory"

# 107 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 108 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 109 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 110 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 111 "data/maps/Route104/scripts.pory"
	return
# 112 "data/maps/Route104/scripts.pory"

# 113 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 114 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 115 "data/maps/Route104/scripts.pory"
	return
# 116 "data/maps/Route104/scripts.pory"

# 117 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 118 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 119 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 120 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 121 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_ROUTE104_RIVAL, 17, 52
# 122 "data/maps/Route104/scripts.pory"
	return
# 123 "data/maps/Route104/scripts.pory"

# 124 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 125 "data/maps/Route104/scripts.pory"
	return
# 126 "data/maps/Route104/scripts.pory"

# 127 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 128 "data/maps/Route104/scripts.pory"
	lockall
# 129 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 130 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_FacePlayer
# 131 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 133 "data/maps/Route104/scripts.pory"

# 134 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 135 "data/maps/Route104/scripts.pory"
	lockall
# 136 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 137 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 138 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 139 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 140 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route104/scripts.pory"
	delay 10
# 142 "data/maps/Route104/scripts.pory"
	addobject LOCALID_ROUTE104_RIVAL
# 143 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 144 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerBackUp
# 145 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 147 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route104/scripts.pory"
	delay 20
# 149 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 150 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 151 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 152 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_ExclamationMark
# 153 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_Delay48
# 155 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 157 "data/maps/Route104/scripts.pory"

# 158 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 159 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 160 "data/maps/Route104/scripts.pory"
	checkplayergender
# 161 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 162 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 163 "data/maps/Route104/scripts.pory"
	return
# 164 "data/maps/Route104/scripts.pory"

# 165 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 166 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 167 "data/maps/Route104/scripts.pory"
	return
# 168 "data/maps/Route104/scripts.pory"

# 169 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 170 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 171 "data/maps/Route104/scripts.pory"
	return
# 172 "data/maps/Route104/scripts.pory"

# 173 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 174 "data/maps/Route104/scripts.pory"
	checkplayergender
# 175 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 176 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 177 "data/maps/Route104/scripts.pory"
	end
# 178 "data/maps/Route104/scripts.pory"

# 179 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 180 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 181 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 182 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 183 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 184 "data/maps/Route104/scripts.pory"
	closemessage
# 185 "data/maps/Route104/scripts.pory"
	delay 30
# 186 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 187 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 188 "data/maps/Route104/scripts.pory"
	waitfanfare
# 189 "data/maps/Route104/scripts.pory"
	closemessage
# 190 "data/maps/Route104/scripts.pory"
	delay 30
# 191 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 192 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerFaceRival
# 193 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 194 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 195 "data/maps/Route104/scripts.pory"
	closemessage
# 196 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalApproachPlayer
# 198 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 200 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 201 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 202 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 203 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 204 "data/maps/Route104/scripts.pory"
	releaseall
# 205 "data/maps/Route104/scripts.pory"
	end
# 206 "data/maps/Route104/scripts.pory"

# 207 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 208 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 209 "data/maps/Route104/scripts.pory"
	step_end
# 210 "data/maps/Route104/scripts.pory"

# 211 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 212 "data/maps/Route104/scripts.pory"
	walk_down
# 213 "data/maps/Route104/scripts.pory"
	face_right
# 214 "data/maps/Route104/scripts.pory"
	step_end
# 215 "data/maps/Route104/scripts.pory"

# 216 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 217 "data/maps/Route104/scripts.pory"
	delay_4
# 218 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 219 "data/maps/Route104/scripts.pory"
	step_end
# 220 "data/maps/Route104/scripts.pory"

# 221 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 222 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 223 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 224 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 225 "data/maps/Route104/scripts.pory"
	releaseall
# 226 "data/maps/Route104/scripts.pory"
	end
# 227 "data/maps/Route104/scripts.pory"

# 228 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 229 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 230 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 231 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 232 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 233 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 234 "data/maps/Route104/scripts.pory"
	end
# 235 "data/maps/Route104/scripts.pory"

# 236 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 237 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 238 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 239 "data/maps/Route104/scripts.pory"
	releaseall
# 240 "data/maps/Route104/scripts.pory"
	end
# 241 "data/maps/Route104/scripts.pory"

# 242 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 243 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 244 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 245 "data/maps/Route104/scripts.pory"
	return
# 246 "data/maps/Route104/scripts.pory"

# 247 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 248 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 249 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 250 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 251 "data/maps/Route104/scripts.pory"
	end
# 252 "data/maps/Route104/scripts.pory"

# 253 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 254 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 255 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 256 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 257 "data/maps/Route104/scripts.pory"
	end
# 258 "data/maps/Route104/scripts.pory"

# 259 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 260 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 261 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 262 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 263 "data/maps/Route104/scripts.pory"
	end
# 264 "data/maps/Route104/scripts.pory"

# 265 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 266 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 267 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 268 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 269 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 270 "data/maps/Route104/scripts.pory"
	closemessage
# 271 "data/maps/Route104/scripts.pory"
	delay 30
# 272 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 273 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 274 "data/maps/Route104/scripts.pory"
	waitfanfare
# 275 "data/maps/Route104/scripts.pory"
	closemessage
# 276 "data/maps/Route104/scripts.pory"
	delay 30
# 277 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 278 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerFaceRival
# 279 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 280 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 281 "data/maps/Route104/scripts.pory"
	closemessage
# 282 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalApproachPlayer
# 284 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 286 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 287 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 288 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 289 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 290 "data/maps/Route104/scripts.pory"
	releaseall
# 291 "data/maps/Route104/scripts.pory"
	end
# 292 "data/maps/Route104/scripts.pory"

# 293 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 294 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 295 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 296 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 297 "data/maps/Route104/scripts.pory"
	releaseall
# 298 "data/maps/Route104/scripts.pory"
	end
# 299 "data/maps/Route104/scripts.pory"

# 300 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 301 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 302 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 303 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 304 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 305 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 306 "data/maps/Route104/scripts.pory"
	end
# 307 "data/maps/Route104/scripts.pory"

# 308 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 309 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 310 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 311 "data/maps/Route104/scripts.pory"
	releaseall
# 312 "data/maps/Route104/scripts.pory"
	end
# 313 "data/maps/Route104/scripts.pory"

# 314 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 315 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 316 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 317 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 318 "data/maps/Route104/scripts.pory"
	end
# 319 "data/maps/Route104/scripts.pory"

# 320 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 321 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 322 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 323 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 324 "data/maps/Route104/scripts.pory"
	end
# 325 "data/maps/Route104/scripts.pory"

# 326 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 327 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 328 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 329 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 330 "data/maps/Route104/scripts.pory"
	end
# 331 "data/maps/Route104/scripts.pory"

# 332 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 333 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 334 "data/maps/Route104/scripts.pory"
	walk_down
# 335 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 336 "data/maps/Route104/scripts.pory"
	step_end
# 337 "data/maps/Route104/scripts.pory"

# 338 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 339 "data/maps/Route104/scripts.pory"
	walk_down
# 340 "data/maps/Route104/scripts.pory"
	step_end
# 341 "data/maps/Route104/scripts.pory"

# 342 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 343 "data/maps/Route104/scripts.pory"
	lock
# 344 "data/maps/Route104/scripts.pory"
	faceplayer
# 345 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 346 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 347 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 348 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 349 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 350 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 351 "data/maps/Route104/scripts.pory"
	release
# 352 "data/maps/Route104/scripts.pory"
	end
# 353 "data/maps/Route104/scripts.pory"

# 354 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 355 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 356 "data/maps/Route104/scripts.pory"
	release
# 357 "data/maps/Route104/scripts.pory"
	end
# 358 "data/maps/Route104/scripts.pory"

# 359 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 360 "data/maps/Route104/scripts.pory"
	lock
# 361 "data/maps/Route104/scripts.pory"
	faceplayer
# 362 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 363 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 364 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 365 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 366 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 367 "data/maps/Route104/scripts.pory"
	release
# 368 "data/maps/Route104/scripts.pory"
	end
# 369 "data/maps/Route104/scripts.pory"

# 370 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 371 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 372 "data/maps/Route104/scripts.pory"
	release
# 373 "data/maps/Route104/scripts.pory"
	end
# 374 "data/maps/Route104/scripts.pory"

# 375 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 376 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 377 "data/maps/Route104/scripts.pory"
	end
# 378 "data/maps/Route104/scripts.pory"

# 379 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 380 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 381 "data/maps/Route104/scripts.pory"
	end
# 382 "data/maps/Route104/scripts.pory"

# 383 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 384 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 385 "data/maps/Route104/scripts.pory"
	end
# 386 "data/maps/Route104/scripts.pory"

# 387 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 388 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 389 "data/maps/Route104/scripts.pory"
	end
# 390 "data/maps/Route104/scripts.pory"

# 391 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 392 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 393 "data/maps/Route104/scripts.pory"
	end
# 394 "data/maps/Route104/scripts.pory"

# 395 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 396 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 397 "data/maps/Route104/scripts.pory"
	end
# 398 "data/maps/Route104/scripts.pory"

# 399 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 400 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 401 "data/maps/Route104/scripts.pory"
	end
# 402 "data/maps/Route104/scripts.pory"

# 403 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 404 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 405 "data/maps/Route104/scripts.pory"
	end
# 406 "data/maps/Route104/scripts.pory"

# 407 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 408 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 409 "data/maps/Route104/scripts.pory"
	end
# 410 "data/maps/Route104/scripts.pory"

# 411 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 412 "data/maps/Route104/scripts.pory"
	lock
# 413 "data/maps/Route104/scripts.pory"
	faceplayer
# 414 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 415 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 416 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 417 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 418 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 419 "data/maps/Route104/scripts.pory"
	release
# 420 "data/maps/Route104/scripts.pory"
	end
# 421 "data/maps/Route104/scripts.pory"

# 422 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 423 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 424 "data/maps/Route104/scripts.pory"
	release
# 425 "data/maps/Route104/scripts.pory"
	end
# 426 "data/maps/Route104/scripts.pory"

# 427 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 428 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 429 "data/maps/Route104/scripts.pory"
	end
# 430 "data/maps/Route104/scripts.pory"

# 431 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 432 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE104_BRINEY, MAP_ROUTE104, 0
# 433 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104, 0
# 434 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BRINEY, Route104_Movement_BrineyBoardBoat
# 435 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 436 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_ROUTE104_BRINEY
# 437 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerBoardBoat
# 438 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 439 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE104
# 440 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 441 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 442 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 443 "data/maps/Route104/scripts.pory"
	end
# 444 "data/maps/Route104/scripts.pory"

# 445 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 446 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewford
# 447 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewford
# 448 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 449 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 450 "data/maps/Route104/scripts.pory"

# 451 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 452 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordBeforeDadCalls
# 453 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 454 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 455 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 456 "data/maps/Route104/scripts.pory"
	waitmessage
# 457 "data/maps/Route104/scripts.pory"
	delay 30
# 458 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 459 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 460 "data/maps/Route104/scripts.pory"
	waitfanfare
# 461 "data/maps/Route104/scripts.pory"
	closemessage
# 462 "data/maps/Route104/scripts.pory"
	delay 30
# 463 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 464 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 465 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 466 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 467 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 468 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 469 "data/maps/Route104/scripts.pory"

# 470 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 471 "data/maps/Route104/scripts.pory"
	delay 50
# 472 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerExitBoat
# 473 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 474 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 475 "data/maps/Route104/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 476 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 477 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 478 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 479 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 480 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 481 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 482 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route104_Movement_BrineyExitBoat
# 483 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 484 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 485 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 486 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 487 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 488 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 489 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 490 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104
# 491 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 492 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 493 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 494 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 495 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 496 "data/maps/Route104/scripts.pory"
	end
# 497 "data/maps/Route104/scripts.pory"

# 498 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 499 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 500 "data/maps/Route104/scripts.pory"
	releaseall
# 501 "data/maps/Route104/scripts.pory"
	end
# 502 "data/maps/Route104/scripts.pory"

# 503 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 504 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 505 "data/maps/Route104/scripts.pory"
	releaseall
# 506 "data/maps/Route104/scripts.pory"
	end
# 507 "data/maps/Route104/scripts.pory"

# 508 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 509 "data/maps/Route104/scripts.pory"
	walk_down
# 510 "data/maps/Route104/scripts.pory"
	walk_down
# 511 "data/maps/Route104/scripts.pory"
	walk_down
# 512 "data/maps/Route104/scripts.pory"
	walk_down
# 513 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 514 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 515 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 516 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 521 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 522 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 525 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 526 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 527 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 528 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 529 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 530 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 531 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 532 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 533 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 534 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 541 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 542 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 543 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 544 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 545 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 546 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 547 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 554 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 558 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 569 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 570 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 571 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 573 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 575 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 584 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 586 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 587 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 588 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 589 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 590 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 591 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 592 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 593 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 594 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 595 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 596 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 597 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 598 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 599 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 600 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 601 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 602 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 603 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 604 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 605 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 606 "data/maps/Route104/scripts.pory"
	step_end
# 607 "data/maps/Route104/scripts.pory"

# 608 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 609 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 610 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 611 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 612 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 613 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 614 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 615 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 616 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 617 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 618 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 619 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 620 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 621 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 622 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 623 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 624 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 625 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 626 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 627 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 628 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 629 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 630 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 631 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 632 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 633 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 634 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 635 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 636 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 637 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 638 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 639 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 640 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 641 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 642 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 643 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 644 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 645 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 646 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 647 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 648 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 649 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 650 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 651 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 652 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 653 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 655 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 656 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 659 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 660 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 661 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 662 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 663 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 664 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 665 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 666 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 667 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 669 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 674 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 675 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 676 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 677 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 678 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 679 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 681 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 682 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 683 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 684 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 685 "data/maps/Route104/scripts.pory"
	walk_right
# 686 "data/maps/Route104/scripts.pory"
	walk_right
# 687 "data/maps/Route104/scripts.pory"
	walk_down
# 688 "data/maps/Route104/scripts.pory"
	walk_down
# 689 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 690 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 691 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 692 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 693 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 694 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 695 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 696 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 697 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 698 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 699 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 700 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 701 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 702 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 703 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 704 "data/maps/Route104/scripts.pory"
	walk_down
# 705 "data/maps/Route104/scripts.pory"
	walk_down
# 706 "data/maps/Route104/scripts.pory"
	step_end
# 707 "data/maps/Route104/scripts.pory"

# 708 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 709 "data/maps/Route104/scripts.pory"
	walk_down
# 710 "data/maps/Route104/scripts.pory"
	walk_down
# 711 "data/maps/Route104/scripts.pory"
	walk_down
# 712 "data/maps/Route104/scripts.pory"
	walk_down
# 713 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 714 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 715 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 716 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 717 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 718 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 719 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 720 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 721 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 722 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 723 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 724 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 725 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 726 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 727 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 728 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 729 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 730 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 731 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 732 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 733 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 734 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 735 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 736 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 737 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 738 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 739 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 741 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 742 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 743 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 744 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 745 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 746 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 747 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 748 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 749 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 750 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 751 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 752 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 753 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 754 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 755 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 756 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 757 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 758 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 759 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 763 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 764 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 765 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 766 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 767 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 768 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 769 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 770 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 771 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 772 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 773 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 774 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 775 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 783 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 784 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 785 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 786 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 787 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 788 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 789 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 790 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 791 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 792 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 793 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 794 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 795 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 796 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 797 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 798 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 799 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 800 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 801 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 802 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 803 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 804 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 805 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 806 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 807 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 808 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 809 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 810 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 811 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 812 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 813 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 814 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 815 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 816 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 817 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 818 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 819 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 820 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 821 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 822 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 823 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 824 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 825 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 826 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 827 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 828 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 829 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 830 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 831 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 832 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 833 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 834 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 835 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 836 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 837 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 839 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 840 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 841 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 842 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 843 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 844 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 845 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 846 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 847 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 848 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 849 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 850 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 851 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 852 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 853 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 854 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 855 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 856 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 857 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 858 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 859 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 860 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 861 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 862 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 863 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 864 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 865 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 866 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 867 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 868 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 869 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 870 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 871 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 872 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 873 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 874 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 875 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 876 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 877 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 878 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 879 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 880 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 881 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 882 "data/maps/Route104/scripts.pory"
	walk_right
# 883 "data/maps/Route104/scripts.pory"
	walk_right
# 884 "data/maps/Route104/scripts.pory"
	walk_down
# 885 "data/maps/Route104/scripts.pory"
	walk_down
# 886 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 887 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 888 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 889 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 890 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 891 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 892 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 893 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 894 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 895 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 896 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 897 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 898 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 899 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 900 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 901 "data/maps/Route104/scripts.pory"
	walk_down
# 902 "data/maps/Route104/scripts.pory"
	walk_down
# 903 "data/maps/Route104/scripts.pory"
	step_end
# 904 "data/maps/Route104/scripts.pory"

# 905 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 906 "data/maps/Route104/scripts.pory"
	walk_left
# 907 "data/maps/Route104/scripts.pory"
	walk_down
# 908 "data/maps/Route104/scripts.pory"
	walk_down
# 909 "data/maps/Route104/scripts.pory"
	step_end
# 910 "data/maps/Route104/scripts.pory"

# 911 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 912 "data/maps/Route104/scripts.pory"
	walk_down
# 913 "data/maps/Route104/scripts.pory"
	step_end
# 914 "data/maps/Route104/scripts.pory"

# 915 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 916 "data/maps/Route104/scripts.pory"
	walk_down
# 917 "data/maps/Route104/scripts.pory"
	walk_left
# 918 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 919 "data/maps/Route104/scripts.pory"
	step_end
# 920 "data/maps/Route104/scripts.pory"

# 921 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 922 "data/maps/Route104/scripts.pory"
	walk_down
# 923 "data/maps/Route104/scripts.pory"
	walk_down
# 924 "data/maps/Route104/scripts.pory"
	step_end
# 925 "data/maps/Route104/scripts.pory"

# 926 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 927 "data/maps/Route104/scripts.pory"
	walk_down
# 928 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 929 "data/maps/Route104/scripts.pory"
	step_end
# 930 "data/maps/Route104/scripts.pory"

# 931 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 932 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 933 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 934 "data/maps/Route104/scripts.pory"
	end
# 935 "data/maps/Route104/scripts.pory"

# 936 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 937 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 938 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 939 "data/maps/Route104/scripts.pory"
	end
# 940 "data/maps/Route104/scripts.pory"

# 941 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 942 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 943 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 944 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 945 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 946 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 947 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 948 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 949 "data/maps/Route104/scripts.pory"
	release
# 950 "data/maps/Route104/scripts.pory"
	end
# 951 "data/maps/Route104/scripts.pory"

# 952 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 953 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 954 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 955 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 956 "data/maps/Route104/scripts.pory"
	release
# 957 "data/maps/Route104/scripts.pory"
	end
# 958 "data/maps/Route104/scripts.pory"

# 959 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 960 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 961 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 962 "data/maps/Route104/scripts.pory"
	release
# 963 "data/maps/Route104/scripts.pory"
	end
# 964 "data/maps/Route104/scripts.pory"

# 965 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 966 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 967 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 968 "data/maps/Route104/scripts.pory"
	release
# 969 "data/maps/Route104/scripts.pory"
	end
# 970 "data/maps/Route104/scripts.pory"

# 971 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 972 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 973 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 974 "data/maps/Route104/scripts.pory"
	release
# 975 "data/maps/Route104/scripts.pory"
	end
# 976 "data/maps/Route104/scripts.pory"

# 977 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 978 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 979 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 980 "data/maps/Route104/scripts.pory"
	end
# 981 "data/maps/Route104/scripts.pory"

# 982 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 983 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 984 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 985 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 986 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 987 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 988 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 989 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 990 "data/maps/Route104/scripts.pory"
	release
# 991 "data/maps/Route104/scripts.pory"
	end
# 992 "data/maps/Route104/scripts.pory"

# 993 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 994 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 995 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 996 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 997 "data/maps/Route104/scripts.pory"
	release
# 998 "data/maps/Route104/scripts.pory"
	end
# 999 "data/maps/Route104/scripts.pory"

# 1000 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 1001 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 1002 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1003 "data/maps/Route104/scripts.pory"
	release
# 1004 "data/maps/Route104/scripts.pory"
	end
# 1005 "data/maps/Route104/scripts.pory"

# 1006 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 1007 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 1008 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1009 "data/maps/Route104/scripts.pory"
	release
# 1010 "data/maps/Route104/scripts.pory"
	end
# 1011 "data/maps/Route104/scripts.pory"

# 1012 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 1013 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 1014 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1015 "data/maps/Route104/scripts.pory"
	release
# 1016 "data/maps/Route104/scripts.pory"
	end
# 1017 "data/maps/Route104/scripts.pory"

# 1018 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 1019 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 1020 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 1021 "data/maps/Route104/scripts.pory"
	end
# 1022 "data/maps/Route104/scripts.pory"

# 1023 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 1024 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 1025 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1026 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 1027 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 1028 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1029 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 1030 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1031 "data/maps/Route104/scripts.pory"
	release
# 1032 "data/maps/Route104/scripts.pory"
	end
# 1033 "data/maps/Route104/scripts.pory"

# 1034 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 1035 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1036 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1037 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 1038 "data/maps/Route104/scripts.pory"
	release
# 1039 "data/maps/Route104/scripts.pory"
	end
# 1040 "data/maps/Route104/scripts.pory"

# 1041 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 1042 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 1043 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1044 "data/maps/Route104/scripts.pory"
	release
# 1045 "data/maps/Route104/scripts.pory"
	end
# 1046 "data/maps/Route104/scripts.pory"

# 1047 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 1048 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 1049 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1050 "data/maps/Route104/scripts.pory"
	release
# 1051 "data/maps/Route104/scripts.pory"
	end
# 1052 "data/maps/Route104/scripts.pory"

# 1053 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 1054 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 1055 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1056 "data/maps/Route104/scripts.pory"
	release
# 1057 "data/maps/Route104/scripts.pory"
	end
# 1058 "data/maps/Route104/scripts.pory"

# 1059 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1060 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1061 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1062 "data/maps/Route104/scripts.pory"
	end
# 1063 "data/maps/Route104/scripts.pory"

# 1064 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1065 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 1066 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1067 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1068 "data/maps/Route104/scripts.pory"
	release
# 1069 "data/maps/Route104/scripts.pory"
	end
# 1070 "data/maps/Route104/scripts.pory"

# 1071 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1072 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 1073 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1074 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1075 "data/maps/Route104/scripts.pory"
	release
# 1076 "data/maps/Route104/scripts.pory"
	end
# 1077 "data/maps/Route104/scripts.pory"

# 1078 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1079 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 1080 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1081 "data/maps/Route104/scripts.pory"
	end
# 1082 "data/maps/Route104/scripts.pory"

# 1083 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1084 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 1085 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 1086 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1087 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1088 "data/maps/Route104/scripts.pory"

# 1089 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1090 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1091 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1092 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1093 "data/maps/Route104/scripts.pory"

# 1094 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1095 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1096 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1097 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1098 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1099 "data/maps/Route104/scripts.pory"

# 1100 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1101 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1102 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1103 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1104 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1105 "data/maps/Route104/scripts.pory"

# 1106 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1107 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1108 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1109 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1110 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1111 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1112 "data/maps/Route104/scripts.pory"

# 1113 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1114 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1115 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1116 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1117 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1118 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1119 "data/maps/Route104/scripts.pory"

# 1120 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1121 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1122 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1123 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1124 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1125 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1126 "data/maps/Route104/scripts.pory"

# 1127 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1128 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1129 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1130 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1131 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1132 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1133 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1134 "data/maps/Route104/scripts.pory"

# 1135 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1136 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1137 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1138 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1139 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1140 "data/maps/Route104/scripts.pory"

# 1141 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1142 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1143 "data/maps/Route104/scripts.pory"

# 1144 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1145 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1146 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1147 "data/maps/Route104/scripts.pory"

# 1148 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1149 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1150 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1151 "data/maps/Route104/scripts.pory"

# 1152 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1153 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1154 "data/maps/Route104/scripts.pory"

# 1155 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1156 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1157 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1158 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1159 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1160 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1161 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1162 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1163 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1164 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1165 "data/maps/Route104/scripts.pory"

# 1166 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1167 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1168 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1169 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1170 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1171 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1172 "data/maps/Route104/scripts.pory"

# 1173 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1174 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1175 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1176 "data/maps/Route104/scripts.pory"

# 1177 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1178 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1179 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1180 "data/maps/Route104/scripts.pory"

# 1181 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1182 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1183 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1184 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1185 "data/maps/Route104/scripts.pory"

# 1186 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1187 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1188 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1189 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1190 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1191 "data/maps/Route104/scripts.pory"

# 1192 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1193 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1194 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1195 "data/maps/Route104/scripts.pory"

# 1196 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1197 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1198 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1199 "data/maps/Route104/scripts.pory"

# 1200 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1201 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1202 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1203 "data/maps/Route104/scripts.pory"

# 1204 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1205 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1206 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1207 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1208 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1209 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1210 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1211 "data/maps/Route104/scripts.pory"

# 1212 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1213 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1214 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1215 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1216 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1217 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1218 "data/maps/Route104/scripts.pory"

# 1219 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1220 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1221 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1222 "data/maps/Route104/scripts.pory"

# 1223 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1224 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1225 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1226 "data/maps/Route104/scripts.pory"

# 1227 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1228 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1229 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1230 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1231 "data/maps/Route104/scripts.pory"

# 1232 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1233 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1234 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1235 "data/maps/Route104/scripts.pory"

# 1236 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1237 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1238 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1239 "data/maps/Route104/scripts.pory"

# 1240 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1241 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1242 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1243 "data/maps/Route104/scripts.pory"

# 1244 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1245 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1246 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1247 "data/maps/Route104/scripts.pory"

# 1248 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1249 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1250 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1251 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1252 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1253 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1254 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"

Route104_EventScript_SNORLAX_Text_0:
# 17 "data/maps/Route104/scripts.pory"
	.string "Zzzz… Zzzz…\p"
	.string "A SNORLAX is sleeping soundly in the\n"
	.string "middle of the bridge…\p"
	.string "If only you had a way to push it into\n"
	.string "the water.$"

Route104_EventScript_SNORLAX_Text_1:
# 23 "data/maps/Route104/scripts.pory"
	.string "Zzzz… Zzzz…\p"
	.string "A SNORLAX is sleeping soundly in the\n"
	.string "middle of the bridge…\p"
	.string "Use the {STR_VAR_2} to push it into\n"
	.string "the water?$"

Route104_EventScript_SNORLAX_Text_2:
# 37 "data/maps/Route104/scripts.pory"
	.string "Zzzz… Zzzz…\p"
	.string "A SNORLAX is sleeping soundly in the\n"
	.string "middle of the bridge…\p"
	.string "Want {STR_VAR_1} to push it into the\n"
	.string "water with STRENGTH?$"

Route104_EventScript_SNORLAX_Text_3:
# 63 "data/maps/Route104/scripts.pory"
	.string "SNORLAX woke up in a towering rage!\p"
	.string "It attacked!$"

Route104_EventScript_SNORLAX_Text_4:
# 71 "data/maps/Route104/scripts.pory"
	.string "The SNORLAX paddled away in a huff!$"
