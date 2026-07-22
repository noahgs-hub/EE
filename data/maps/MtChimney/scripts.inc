MtChimney_EventScript_UpdateMoltres::
# 9 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_MOLTRES
# 10 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, MtChimney_EventScript_UpdateMoltres_2
# 13 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOLTRES, MtChimney_EventScript_UpdateMoltres_5
# 16 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_MOLTRES
	return

MtChimney_EventScript_UpdateMoltres_2:
	return

MtChimney_EventScript_UpdateMoltres_5:
	return


MtChimney_EventScript_TryRemoveMoltres::
# 21 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 22 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne MtChimney_EventScript_TryRemoveMoltres_2
# 25 "data/maps/MtChimney/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

MtChimney_EventScript_TryRemoveMoltres_2:
	return


MtChimney_EventScript_Moltres::
# 30 "data/maps/MtChimney/scripts.pory"
	lock
# 31 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 32 "data/maps/MtChimney/scripts.pory"
	waitse
# 33 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 34 "data/maps/MtChimney/scripts.pory"
	delay 40
# 35 "data/maps/MtChimney/scripts.pory"
	waitmoncry
# 36 "data/maps/MtChimney/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 70
# 37 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/MtChimney/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 39 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 41 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtChimney_EventScript_Moltres_2
MtChimney_EventScript_Moltres_1:
# 45 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtChimney_EventScript_Moltres_5
# 45 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtChimney_EventScript_Moltres_5
MtChimney_EventScript_Moltres_4:
# 49 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_MOLTRES
# 50 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_Moltres_2:
# 42 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_MOLTRES
# 43 "data/maps/MtChimney/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MtChimney_EventScript_Moltres_1

MtChimney_EventScript_Moltres_5:
# 46 "data/maps/MtChimney/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 47 "data/maps/MtChimney/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto MtChimney_EventScript_Moltres_4


# 54 "data/maps/MtChimney/scripts.pory"

# 55 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 56 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 57 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 58 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 59 "data/maps/MtChimney/scripts.pory"

# 60 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 61 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 62 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_UpdateMoltres
# 63 "data/maps/MtChimney/scripts.pory"
	end
# 64 "data/maps/MtChimney/scripts.pory"

# 65 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 66 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 67 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MtChimney_EventScript_TryRemoveMoltres
# 68 "data/maps/MtChimney/scripts.pory"
	end
# 69 "data/maps/MtChimney/scripts.pory"

# 70 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 71 "data/maps/MtChimney/scripts.pory"
	lock
# 72 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 73 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 74 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 75 "data/maps/MtChimney/scripts.pory"
	closemessage
# 76 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
# 77 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 78 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 79 "data/maps/MtChimney/scripts.pory"
	release
# 80 "data/maps/MtChimney/scripts.pory"
	end
# 81 "data/maps/MtChimney/scripts.pory"

# 82 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 83 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 84 "data/maps/MtChimney/scripts.pory"
	return
# 85 "data/maps/MtChimney/scripts.pory"

# 86 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 87 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 88 "data/maps/MtChimney/scripts.pory"
	return
# 89 "data/maps/MtChimney/scripts.pory"

# 90 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 91 "data/maps/MtChimney/scripts.pory"
	lockall
# 92 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 93 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 94 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 95 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 96 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 97 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 98 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 99 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 100 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 101 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 102 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 103 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 104 "data/maps/MtChimney/scripts.pory"
	closemessage
# 105 "data/maps/MtChimney/scripts.pory"
	delay 30
# 106 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 107 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 108 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 109 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 110 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 111 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 112 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 113 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 114 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 115 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 116 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 117 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 118 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 119 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 120 "data/maps/MtChimney/scripts.pory"
	closemessage
# 121 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 122 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 123 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 124 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 125 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 126 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 127 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 128 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 129 "data/maps/MtChimney/scripts.pory"
	releaseall
# 130 "data/maps/MtChimney/scripts.pory"
	end
# 131 "data/maps/MtChimney/scripts.pory"

# 132 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 133 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 134 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 135 "data/maps/MtChimney/scripts.pory"
	return
# 136 "data/maps/MtChimney/scripts.pory"

# 137 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 138 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 139 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 140 "data/maps/MtChimney/scripts.pory"
	return
# 141 "data/maps/MtChimney/scripts.pory"

# 142 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 143 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitEast
# 144 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 145 "data/maps/MtChimney/scripts.pory"
	return
# 146 "data/maps/MtChimney/scripts.pory"

# 147 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 148 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 149 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 150 "data/maps/MtChimney/scripts.pory"
	return
# 151 "data/maps/MtChimney/scripts.pory"

# 152 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 153 "data/maps/MtChimney/scripts.pory"
	lock
# 154 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 155 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 156 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 157 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 158 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 159 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 160 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 161 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 162 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 163 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 164 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 165 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 166 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 167 "data/maps/MtChimney/scripts.pory"
	release
# 168 "data/maps/MtChimney/scripts.pory"
	end
# 169 "data/maps/MtChimney/scripts.pory"

# 170 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 171 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 172 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 173 "data/maps/MtChimney/scripts.pory"
	release
# 174 "data/maps/MtChimney/scripts.pory"
	end
# 175 "data/maps/MtChimney/scripts.pory"
.else
# 176 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 177 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 178 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 179 "data/maps/MtChimney/scripts.pory"
	release
# 180 "data/maps/MtChimney/scripts.pory"
	end
# 181 "data/maps/MtChimney/scripts.pory"

# 182 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 183 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 184 "data/maps/MtChimney/scripts.pory"
	release
# 185 "data/maps/MtChimney/scripts.pory"
	end
# 186 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 187 "data/maps/MtChimney/scripts.pory"

# 188 "data/maps/MtChimney/scripts.pory"

# 189 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 190 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 191 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 192 "data/maps/MtChimney/scripts.pory"
	return
# 193 "data/maps/MtChimney/scripts.pory"

# 194 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 195 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 196 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 197 "data/maps/MtChimney/scripts.pory"
	release
# 198 "data/maps/MtChimney/scripts.pory"
	end
# 199 "data/maps/MtChimney/scripts.pory"

# 200 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 201 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 202 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 203 "data/maps/MtChimney/scripts.pory"
	release
# 204 "data/maps/MtChimney/scripts.pory"
	end
# 205 "data/maps/MtChimney/scripts.pory"

# 206 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 207 "data/maps/MtChimney/scripts.pory"
	walk_up
# 208 "data/maps/MtChimney/scripts.pory"
	walk_up
# 209 "data/maps/MtChimney/scripts.pory"
	walk_up
# 210 "data/maps/MtChimney/scripts.pory"
	walk_up
# 211 "data/maps/MtChimney/scripts.pory"
	walk_up
# 212 "data/maps/MtChimney/scripts.pory"
	walk_up
# 213 "data/maps/MtChimney/scripts.pory"
	walk_right
# 214 "data/maps/MtChimney/scripts.pory"
	step_end
# 215 "data/maps/MtChimney/scripts.pory"

# 216 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 217 "data/maps/MtChimney/scripts.pory"
	walk_left
# 218 "data/maps/MtChimney/scripts.pory"
	walk_down
# 219 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	step_end
# 226 "data/maps/MtChimney/scripts.pory"

# 227 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 228 "data/maps/MtChimney/scripts.pory"
	walk_up
# 229 "data/maps/MtChimney/scripts.pory"
	walk_up
# 230 "data/maps/MtChimney/scripts.pory"
	walk_up
# 231 "data/maps/MtChimney/scripts.pory"
	walk_up
# 232 "data/maps/MtChimney/scripts.pory"
	walk_up
# 233 "data/maps/MtChimney/scripts.pory"
	walk_right
# 234 "data/maps/MtChimney/scripts.pory"
	walk_right
# 235 "data/maps/MtChimney/scripts.pory"
	step_end
# 236 "data/maps/MtChimney/scripts.pory"

# 237 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 238 "data/maps/MtChimney/scripts.pory"
	walk_left
# 239 "data/maps/MtChimney/scripts.pory"
	walk_left
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_down
# 242 "data/maps/MtChimney/scripts.pory"
	walk_down
# 243 "data/maps/MtChimney/scripts.pory"
	walk_down
# 244 "data/maps/MtChimney/scripts.pory"
	walk_down
# 245 "data/maps/MtChimney/scripts.pory"
	walk_down
# 246 "data/maps/MtChimney/scripts.pory"
	walk_down
# 247 "data/maps/MtChimney/scripts.pory"
	step_end
# 248 "data/maps/MtChimney/scripts.pory"

# 249 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 250 "data/maps/MtChimney/scripts.pory"
	walk_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_left
# 256 "data/maps/MtChimney/scripts.pory"
	walk_left
# 257 "data/maps/MtChimney/scripts.pory"
	walk_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_down
# 259 "data/maps/MtChimney/scripts.pory"
	walk_down
# 260 "data/maps/MtChimney/scripts.pory"
	walk_down
# 261 "data/maps/MtChimney/scripts.pory"
	walk_left
# 262 "data/maps/MtChimney/scripts.pory"
	walk_left
# 263 "data/maps/MtChimney/scripts.pory"
	walk_left
# 264 "data/maps/MtChimney/scripts.pory"
	walk_left
# 265 "data/maps/MtChimney/scripts.pory"
	walk_left
# 266 "data/maps/MtChimney/scripts.pory"
	walk_down
# 267 "data/maps/MtChimney/scripts.pory"
	step_end
# 268 "data/maps/MtChimney/scripts.pory"

# 269 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 270 "data/maps/MtChimney/scripts.pory"
	walk_down
# 271 "data/maps/MtChimney/scripts.pory"
	walk_down
# 272 "data/maps/MtChimney/scripts.pory"
	walk_down
# 273 "data/maps/MtChimney/scripts.pory"
	walk_down
# 274 "data/maps/MtChimney/scripts.pory"
	walk_left
# 275 "data/maps/MtChimney/scripts.pory"
	walk_left
# 276 "data/maps/MtChimney/scripts.pory"
	walk_left
# 277 "data/maps/MtChimney/scripts.pory"
	walk_down
# 278 "data/maps/MtChimney/scripts.pory"
	step_end
# 279 "data/maps/MtChimney/scripts.pory"

# 280 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 281 "data/maps/MtChimney/scripts.pory"
	walk_right
# 282 "data/maps/MtChimney/scripts.pory"
	walk_down
# 283 "data/maps/MtChimney/scripts.pory"
	walk_down
# 284 "data/maps/MtChimney/scripts.pory"
	walk_down
# 285 "data/maps/MtChimney/scripts.pory"
	walk_down
# 286 "data/maps/MtChimney/scripts.pory"
	walk_left
# 287 "data/maps/MtChimney/scripts.pory"
	walk_left
# 288 "data/maps/MtChimney/scripts.pory"
	walk_left
# 289 "data/maps/MtChimney/scripts.pory"
	walk_left
# 290 "data/maps/MtChimney/scripts.pory"
	walk_left
# 291 "data/maps/MtChimney/scripts.pory"
	walk_down
# 292 "data/maps/MtChimney/scripts.pory"
	walk_down
# 293 "data/maps/MtChimney/scripts.pory"
	walk_down
# 294 "data/maps/MtChimney/scripts.pory"
	walk_down
# 295 "data/maps/MtChimney/scripts.pory"
	step_end
# 296 "data/maps/MtChimney/scripts.pory"

# 297 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 298 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 301 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 302 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 303 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 305 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 306 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 307 "data/maps/MtChimney/scripts.pory"
	walk_left
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/MtChimney/scripts.pory"
	walk_left
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_down
# 315 "data/maps/MtChimney/scripts.pory"
	walk_down
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_left
# 320 "data/maps/MtChimney/scripts.pory"
	walk_left
# 321 "data/maps/MtChimney/scripts.pory"
	walk_down
# 322 "data/maps/MtChimney/scripts.pory"
	step_end
# 323 "data/maps/MtChimney/scripts.pory"

# 324 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 325 "data/maps/MtChimney/scripts.pory"
	delay_16
# 326 "data/maps/MtChimney/scripts.pory"
	delay_16
# 327 "data/maps/MtChimney/scripts.pory"
	delay_16
# 328 "data/maps/MtChimney/scripts.pory"
	walk_down
# 329 "data/maps/MtChimney/scripts.pory"
	walk_down
# 330 "data/maps/MtChimney/scripts.pory"
	walk_down
# 331 "data/maps/MtChimney/scripts.pory"
	walk_left
# 332 "data/maps/MtChimney/scripts.pory"
	walk_left
# 333 "data/maps/MtChimney/scripts.pory"
	walk_left
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	step_end
# 336 "data/maps/MtChimney/scripts.pory"

# 337 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 338 "data/maps/MtChimney/scripts.pory"
	delay_16
# 339 "data/maps/MtChimney/scripts.pory"
	walk_left
# 340 "data/maps/MtChimney/scripts.pory"
	walk_down
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_left
# 345 "data/maps/MtChimney/scripts.pory"
	walk_left
# 346 "data/maps/MtChimney/scripts.pory"
	walk_left
# 347 "data/maps/MtChimney/scripts.pory"
	walk_left
# 348 "data/maps/MtChimney/scripts.pory"
	walk_left
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	walk_down
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	step_end
# 354 "data/maps/MtChimney/scripts.pory"

# 355 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 356 "data/maps/MtChimney/scripts.pory"
	delay_16
# 357 "data/maps/MtChimney/scripts.pory"
	walk_left
# 358 "data/maps/MtChimney/scripts.pory"
	walk_left
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_down
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	walk_left
# 363 "data/maps/MtChimney/scripts.pory"
	walk_left
# 364 "data/maps/MtChimney/scripts.pory"
	walk_down
# 365 "data/maps/MtChimney/scripts.pory"
	walk_down
# 366 "data/maps/MtChimney/scripts.pory"
	walk_left
# 367 "data/maps/MtChimney/scripts.pory"
	walk_left
# 368 "data/maps/MtChimney/scripts.pory"
	walk_left
# 369 "data/maps/MtChimney/scripts.pory"
	walk_left
# 370 "data/maps/MtChimney/scripts.pory"
	walk_left
# 371 "data/maps/MtChimney/scripts.pory"
	walk_down
# 372 "data/maps/MtChimney/scripts.pory"
	step_end
# 373 "data/maps/MtChimney/scripts.pory"

# 374 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 375 "data/maps/MtChimney/scripts.pory"
	delay_16
# 376 "data/maps/MtChimney/scripts.pory"
	walk_down
# 377 "data/maps/MtChimney/scripts.pory"
	walk_left
# 378 "data/maps/MtChimney/scripts.pory"
	walk_left
# 379 "data/maps/MtChimney/scripts.pory"
	walk_left
# 380 "data/maps/MtChimney/scripts.pory"
	walk_left
# 381 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 382 "data/maps/MtChimney/scripts.pory"
	step_end
# 383 "data/maps/MtChimney/scripts.pory"

# 384 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 385 "data/maps/MtChimney/scripts.pory"
	walk_down
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	walk_down
# 388 "data/maps/MtChimney/scripts.pory"
	walk_down
# 389 "data/maps/MtChimney/scripts.pory"
	walk_left
# 390 "data/maps/MtChimney/scripts.pory"
	walk_left
# 391 "data/maps/MtChimney/scripts.pory"
	walk_left
# 392 "data/maps/MtChimney/scripts.pory"
	walk_left
# 393 "data/maps/MtChimney/scripts.pory"
	walk_left
# 394 "data/maps/MtChimney/scripts.pory"
	walk_down
# 395 "data/maps/MtChimney/scripts.pory"
	walk_down
# 396 "data/maps/MtChimney/scripts.pory"
	walk_down
# 397 "data/maps/MtChimney/scripts.pory"
	walk_down
# 398 "data/maps/MtChimney/scripts.pory"
	step_end
# 399 "data/maps/MtChimney/scripts.pory"

# 400 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 401 "data/maps/MtChimney/scripts.pory"
	walk_down
# 402 "data/maps/MtChimney/scripts.pory"
	step_end
# 403 "data/maps/MtChimney/scripts.pory"

# 404 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 405 "data/maps/MtChimney/scripts.pory"
	walk_down
# 406 "data/maps/MtChimney/scripts.pory"
	walk_down
# 407 "data/maps/MtChimney/scripts.pory"
	walk_down
# 408 "data/maps/MtChimney/scripts.pory"
	walk_down
# 409 "data/maps/MtChimney/scripts.pory"
	walk_down
# 410 "data/maps/MtChimney/scripts.pory"
	walk_down
# 411 "data/maps/MtChimney/scripts.pory"
	walk_down
# 412 "data/maps/MtChimney/scripts.pory"
	step_end
# 413 "data/maps/MtChimney/scripts.pory"

# 414 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 415 "data/maps/MtChimney/scripts.pory"
	delay_16
# 416 "data/maps/MtChimney/scripts.pory"
	delay_16
# 417 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 418 "data/maps/MtChimney/scripts.pory"
	delay_16
# 419 "data/maps/MtChimney/scripts.pory"
	walk_down
# 420 "data/maps/MtChimney/scripts.pory"
	walk_down
# 421 "data/maps/MtChimney/scripts.pory"
	walk_down
# 422 "data/maps/MtChimney/scripts.pory"
	walk_down
# 423 "data/maps/MtChimney/scripts.pory"
	walk_down
# 424 "data/maps/MtChimney/scripts.pory"
	step_end
# 425 "data/maps/MtChimney/scripts.pory"

# 426 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 427 "data/maps/MtChimney/scripts.pory"
	delay_16
# 428 "data/maps/MtChimney/scripts.pory"
	delay_16
# 429 "data/maps/MtChimney/scripts.pory"
	delay_16
# 430 "data/maps/MtChimney/scripts.pory"
	delay_16
# 431 "data/maps/MtChimney/scripts.pory"
	delay_16
# 432 "data/maps/MtChimney/scripts.pory"
	delay_16
# 433 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 434 "data/maps/MtChimney/scripts.pory"
	delay_16
# 435 "data/maps/MtChimney/scripts.pory"
	walk_down
# 436 "data/maps/MtChimney/scripts.pory"
	walk_down
# 437 "data/maps/MtChimney/scripts.pory"
	step_end
# 438 "data/maps/MtChimney/scripts.pory"

# 439 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 440 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 441 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 442 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 443 "data/maps/MtChimney/scripts.pory"
	face_right
# 444 "data/maps/MtChimney/scripts.pory"
	step_end
# 445 "data/maps/MtChimney/scripts.pory"

# 446 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 447 "data/maps/MtChimney/scripts.pory"
	walk_left
# 448 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 449 "data/maps/MtChimney/scripts.pory"
	delay_16
# 450 "data/maps/MtChimney/scripts.pory"
	step_end
# 451 "data/maps/MtChimney/scripts.pory"

# 452 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 453 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 454 "data/maps/MtChimney/scripts.pory"
	end
# 455 "data/maps/MtChimney/scripts.pory"

# 456 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 457 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 458 "data/maps/MtChimney/scripts.pory"
	end
# 459 "data/maps/MtChimney/scripts.pory"

# 460 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 461 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 462 "data/maps/MtChimney/scripts.pory"
	end
# 463 "data/maps/MtChimney/scripts.pory"

# 464 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 465 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 466 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 467 "data/maps/MtChimney/scripts.pory"
	end
# 468 "data/maps/MtChimney/scripts.pory"

# 469 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 470 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 471 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 472 "data/maps/MtChimney/scripts.pory"
	end
# 473 "data/maps/MtChimney/scripts.pory"

# 474 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 475 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 476 "data/maps/MtChimney/scripts.pory"
	end
# 477 "data/maps/MtChimney/scripts.pory"

# 478 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 479 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 480 "data/maps/MtChimney/scripts.pory"
	end
# 481 "data/maps/MtChimney/scripts.pory"

# 482 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 483 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 484 "data/maps/MtChimney/scripts.pory"
	end
# 485 "data/maps/MtChimney/scripts.pory"

# 486 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 487 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 488 "data/maps/MtChimney/scripts.pory"
	end
# 489 "data/maps/MtChimney/scripts.pory"

# 490 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 491 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 492 "data/maps/MtChimney/scripts.pory"
	end
# 493 "data/maps/MtChimney/scripts.pory"

# 494 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 495 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 496 "data/maps/MtChimney/scripts.pory"
	end
# 497 "data/maps/MtChimney/scripts.pory"

# 498 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 499 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 500 "data/maps/MtChimney/scripts.pory"
	end
# 501 "data/maps/MtChimney/scripts.pory"

# 502 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 503 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 504 "data/maps/MtChimney/scripts.pory"
	end
# 505 "data/maps/MtChimney/scripts.pory"

# 506 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 507 "data/maps/MtChimney/scripts.pory"
	lockall
# 508 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 509 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 510 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 511 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 512 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 513 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 514 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 515 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 516 "data/maps/MtChimney/scripts.pory"
	releaseall
# 517 "data/maps/MtChimney/scripts.pory"
	end
# 518 "data/maps/MtChimney/scripts.pory"

# 519 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 520 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 521 "data/maps/MtChimney/scripts.pory"
	releaseall
# 522 "data/maps/MtChimney/scripts.pory"
	end
# 523 "data/maps/MtChimney/scripts.pory"

# 524 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 525 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 526 "data/maps/MtChimney/scripts.pory"
	releaseall
# 527 "data/maps/MtChimney/scripts.pory"
	end
# 528 "data/maps/MtChimney/scripts.pory"

# 529 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 530 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteFittedOnMachine, MSGBOX_DEFAULT
# 531 "data/maps/MtChimney/scripts.pory"
	releaseall
# 532 "data/maps/MtChimney/scripts.pory"
	end
# 533 "data/maps/MtChimney/scripts.pory"

# 534 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 535 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 536 "data/maps/MtChimney/scripts.pory"
	end
# 537 "data/maps/MtChimney/scripts.pory"

# 538 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 539 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 540 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 541 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 542 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 543 "data/maps/MtChimney/scripts.pory"
	release
# 544 "data/maps/MtChimney/scripts.pory"
	end
# 545 "data/maps/MtChimney/scripts.pory"

# 546 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 547 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 548 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 549 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 550 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 551 "data/maps/MtChimney/scripts.pory"
	release
# 552 "data/maps/MtChimney/scripts.pory"
	end
# 553 "data/maps/MtChimney/scripts.pory"

# 554 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 555 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 556 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 557 "data/maps/MtChimney/scripts.pory"
	end
# 558 "data/maps/MtChimney/scripts.pory"

# 559 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 560 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 561 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 562 "data/maps/MtChimney/scripts.pory"
	end
# 563 "data/maps/MtChimney/scripts.pory"

# 564 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 565 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 566 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 567 "data/maps/MtChimney/scripts.pory"
	end
# 568 "data/maps/MtChimney/scripts.pory"

# 569 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 570 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 571 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 572 "data/maps/MtChimney/scripts.pory"
	end
# 573 "data/maps/MtChimney/scripts.pory"

# 574 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 575 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 576 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 577 "data/maps/MtChimney/scripts.pory"
	end
# 578 "data/maps/MtChimney/scripts.pory"

# 579 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 580 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 581 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 582 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 583 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 584 "data/maps/MtChimney/scripts.pory"
	release
# 585 "data/maps/MtChimney/scripts.pory"
	end
# 586 "data/maps/MtChimney/scripts.pory"

# 587 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 588 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 589 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 590 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 591 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 592 "data/maps/MtChimney/scripts.pory"
	release
# 593 "data/maps/MtChimney/scripts.pory"
	end
# 594 "data/maps/MtChimney/scripts.pory"

# 595 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 596 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 597 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 598 "data/maps/MtChimney/scripts.pory"
	end
# 599 "data/maps/MtChimney/scripts.pory"

# 600 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 601 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 602 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 604 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 605 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 606 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 607 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 608 "data/maps/MtChimney/scripts.pory"

# 609 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 610 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 612 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 613 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 614 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 616 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 617 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 618 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 619 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 620 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 621 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 623 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 624 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 625 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 626 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 627 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 628 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 629 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 630 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 631 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 634 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 635 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 636 "data/maps/MtChimney/scripts.pory"

# 637 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 638 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 639 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 640 "data/maps/MtChimney/scripts.pory"

# 641 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 642 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 643 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 644 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 645 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 646 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 647 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 648 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 649 "data/maps/MtChimney/scripts.pory"

# 650 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 651 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 652 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 653 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 654 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 655 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 656 "data/maps/MtChimney/scripts.pory"

# 657 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 658 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 659 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 660 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 661 "data/maps/MtChimney/scripts.pory"

# 662 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 663 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 666 "data/maps/MtChimney/scripts.pory"

# 667 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 668 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 670 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 671 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 672 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 673 "data/maps/MtChimney/scripts.pory"

# 674 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 675 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 677 "data/maps/MtChimney/scripts.pory"

# 678 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 679 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 683 "data/maps/MtChimney/scripts.pory"

# 684 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 685 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 688 "data/maps/MtChimney/scripts.pory"

# 689 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 690 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 691 "data/maps/MtChimney/scripts.pory"

# 692 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 693 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 695 "data/maps/MtChimney/scripts.pory"

# 696 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 697 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 699 "data/maps/MtChimney/scripts.pory"

# 700 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 701 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 702 "data/maps/MtChimney/scripts.pory"

# 703 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 704 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 706 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 707 "data/maps/MtChimney/scripts.pory"

# 708 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 709 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 711 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 712 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 713 "data/maps/MtChimney/scripts.pory"

# 714 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 715 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 716 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 717 "data/maps/MtChimney/scripts.pory"

# 718 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 719 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 720 "data/maps/MtChimney/scripts.pory"

# 721 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 722 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 723 "data/maps/MtChimney/scripts.pory"

# 724 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 725 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 726 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 727 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 728 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 729 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 730 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 733 "data/maps/MtChimney/scripts.pory"

# 734 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 735 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 736 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 737 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 738 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 739 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 740 "data/maps/MtChimney/scripts.pory"

# 741 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 742 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 745 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 746 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 747 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 748 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 749 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 750 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 751 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 752 "data/maps/MtChimney/scripts.pory"

# 753 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 754 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 755 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 756 "data/maps/MtChimney/scripts.pory"

# 757 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 758 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 759 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 760 "data/maps/MtChimney/scripts.pory"

# 761 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 762 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 763 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 764 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 766 "data/maps/MtChimney/scripts.pory"

# 767 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 768 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 769 "data/maps/MtChimney/scripts.pory"

# 770 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 771 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 772 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 774 "data/maps/MtChimney/scripts.pory"

# 775 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 776 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 777 "data/maps/MtChimney/scripts.pory"

# 778 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 779 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 781 "data/maps/MtChimney/scripts.pory"

# 782 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 783 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 784 "data/maps/MtChimney/scripts.pory"

# 785 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteFittedOnMachine:
# 786 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 788 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 789 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 790 "data/maps/MtChimney/scripts.pory"

# 791 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 792 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 795 "data/maps/MtChimney/scripts.pory"

# 796 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 797 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 798 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 799 "data/maps/MtChimney/scripts.pory"

# 800 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 801 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 803 "data/maps/MtChimney/scripts.pory"

# 804 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 805 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 806 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 807 "data/maps/MtChimney/scripts.pory"

# 808 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 809 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 811 "data/maps/MtChimney/scripts.pory"

# 812 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 813 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 816 "data/maps/MtChimney/scripts.pory"

# 817 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 818 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 820 "data/maps/MtChimney/scripts.pory"

# 821 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 822 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 824 "data/maps/MtChimney/scripts.pory"

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 826 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 829 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 830 "data/maps/MtChimney/scripts.pory"

# 831 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 832 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 835 "data/maps/MtChimney/scripts.pory"

# 836 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 837 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 843 "data/maps/MtChimney/scripts.pory"

# 844 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 845 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 847 "data/maps/MtChimney/scripts.pory"

# 848 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 849 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 850 "data/maps/MtChimney/scripts.pory"

# 851 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 852 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 853 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 854 "data/maps/MtChimney/scripts.pory"

# 855 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 856 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 857 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 858 "data/maps/MtChimney/scripts.pory"

# 859 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 860 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 861 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 862 "data/maps/MtChimney/scripts.pory"

# 863 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 864 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 865 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 866 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 867 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 868 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 869 "data/maps/MtChimney/scripts.pory"

# 870 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 871 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 872 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 873 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 874 "data/maps/MtChimney/scripts.pory"

# 875 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 876 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 877 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 878 "data/maps/MtChimney/scripts.pory"

# 879 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 880 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 881 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 882 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 883 "data/maps/MtChimney/scripts.pory"

# 884 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 885 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 886 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 887 "data/maps/MtChimney/scripts.pory"

# 888 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 889 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 890 "data/maps/MtChimney/scripts.pory"

# 891 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 892 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 893 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 894 "data/maps/MtChimney/scripts.pory"

# 895 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 896 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 897 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 898 "data/maps/MtChimney/scripts.pory"

# 899 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 900 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 901 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 902 "data/maps/MtChimney/scripts.pory"

# 903 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 904 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 905 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 906 "data/maps/MtChimney/scripts.pory"

# 907 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 908 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 909 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
