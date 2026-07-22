NewMauville_Inside_EventScript_UpdateZapdos::
# 10 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_HIDE_NEW_MAUVILLE_ZAPDOS
# 11 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, NewMauville_Inside_EventScript_UpdateZapdos_2
# 14 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_set FLAG_DEFEATED_ZAPDOS, NewMauville_Inside_EventScript_UpdateZapdos_5
# 17 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_ZAPDOS
	return

NewMauville_Inside_EventScript_UpdateZapdos_2:
	return

NewMauville_Inside_EventScript_UpdateZapdos_5:
	return


NewMauville_Inside_EventScript_Zapdos::
# 22 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 23 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 24 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 25 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 26 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 27 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 28 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 70
# 29 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/NewMauville_Inside/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 32 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NewMauville_Inside_EventScript_Zapdos_2
NewMauville_Inside_EventScript_Zapdos_1:
# 37 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NewMauville_Inside_EventScript_Zapdos_5
# 37 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NewMauville_Inside_EventScript_Zapdos_5
NewMauville_Inside_EventScript_Zapdos_4:
# 41 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_ZAPDOS
# 42 "data/maps/NewMauville_Inside/scripts.pory"
	release
	end

NewMauville_Inside_EventScript_Zapdos_2:
# 34 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_ZAPDOS
# 35 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto NewMauville_Inside_EventScript_Zapdos_1

NewMauville_Inside_EventScript_Zapdos_5:
# 38 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 39 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto NewMauville_Inside_EventScript_Zapdos_4


# 46 "data/maps/NewMauville_Inside/scripts.pory"

# 47 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_MapScripts::
# 48 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewMauville_Inside_OnResume
# 49 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Inside_OnTransition
# 50 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Inside_OnLoad
# 51 "data/maps/NewMauville_Inside/scripts.pory"
	.byte 0
# 52 "data/maps/NewMauville_Inside/scripts.pory"

# 53 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume:
# 54 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 55 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 56 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMauville_Inside_EventScript_TryRemoveVoltorb
# 57 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 58 "data/maps/NewMauville_Inside/scripts.pory"

# 59 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_TryRemoveVoltorb::
# 60 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 61 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 62 "data/maps/NewMauville_Inside/scripts.pory"
	removeobject VAR_LAST_TALKED
# 63 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 64 "data/maps/NewMauville_Inside/scripts.pory"

# 65 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition:
# 66 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 67 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 68 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb1
# 69 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb2
# 70 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb3
# 71 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_UpdateZapdos
# 72 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 73 "data/maps/NewMauville_Inside/scripts.pory"

# 74 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb1::
# 75 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1
# 76 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 77 "data/maps/NewMauville_Inside/scripts.pory"

# 78 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb2::
# 79 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2
# 80 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 81 "data/maps/NewMauville_Inside/scripts.pory"

# 82 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb3::
# 83 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3
# 84 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 85 "data/maps/NewMauville_Inside/scripts.pory"

# 86 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnLoad:
# 87 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq VAR_NEW_MAUVILLE_STATE, 2, NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 88 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 89 "data/maps/NewMauville_Inside/scripts.pory"

# 90 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_BlueButton::
# 91 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 92 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 1
# 93 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 94 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 95 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 96 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 97 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 98 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 99 "data/maps/NewMauville_Inside/scripts.pory"

# 100 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_GreenButton::
# 101 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 102 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 103 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 1
# 104 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 105 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 106 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 107 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 108 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 109 "data/maps/NewMauville_Inside/scripts.pory"

# 110 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetBarrierStateBlueButton::
# 111 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 112 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 113 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 114 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 115 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 116 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 117 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 118 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 119 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 120 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 121 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 122 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 123 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 124 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 125 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 126 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 127 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 128 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 129 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 130 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 131 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 132 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 133 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 134 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 135 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 136 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 137 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 138 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 139 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 140 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 141 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Pressed, FALSE
# 142 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Pressed, FALSE
# 143 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Pressed, FALSE
# 144 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Green, FALSE
# 145 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Green, FALSE
# 146 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Green, FALSE
# 147 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Green, FALSE
# 148 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 149 "data/maps/NewMauville_Inside/scripts.pory"

# 150 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetBarrierStateGreenButton::
# 151 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 152 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 153 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 154 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 155 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 156 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 157 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 158 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 159 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 160 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 161 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 162 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 163 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 164 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 165 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 166 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 167 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 168 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 169 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 170 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 171 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 172 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 173 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 174 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 175 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 176 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 177 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 178 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 179 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 180 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 181 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Pressed, FALSE
# 182 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Pressed, FALSE
# 183 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Blue, FALSE
# 184 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Blue, FALSE
# 185 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Blue, FALSE
# 186 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Blue, FALSE
# 187 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Blue, FALSE
# 188 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 189 "data/maps/NewMauville_Inside/scripts.pory"

# 190 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_RedButton::
# 191 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 192 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped, MSGBOX_DEFAULT
# 193 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 194 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 2
# 195 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 196 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 197 "data/maps/NewMauville_Inside/scripts.pory"

# 198 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetGeneratorOffMetatiles::
# 199 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 6, METATILE_BikeShop_Button_Pressed, FALSE
# 200 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 2, METATILE_BikeShop_Generator_Off_Tile0, TRUE
# 201 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 2, METATILE_BikeShop_Generator_Off_Tile1, TRUE
# 202 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 2, METATILE_BikeShop_Generator_Off_Tile2, TRUE
# 203 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 2, METATILE_BikeShop_Generator_Off_Tile3, TRUE
# 204 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 3, METATILE_BikeShop_Generator_Off_Tile4, TRUE
# 205 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 3, METATILE_BikeShop_Generator_Off_Tile5, TRUE
# 206 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 3, METATILE_BikeShop_Generator_Off_Tile6, TRUE
# 207 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 3, METATILE_BikeShop_Generator_Off_Tile7, TRUE
# 208 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 209 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 210 "data/maps/NewMauville_Inside/scripts.pory"

# 211 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Generator::
# 212 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 213 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, NewMauville_Inside_EventScript_GeneratorOff
# 214 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorRadiatingHeat, MSGBOX_DEFAULT
# 215 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 216 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 217 "data/maps/NewMauville_Inside/scripts.pory"

# 218 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_GeneratorOff::
# 219 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorQuietedDown, MSGBOX_DEFAULT
# 220 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 221 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 222 "data/maps/NewMauville_Inside/scripts.pory"

# 223 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1::
# 224 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 225 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 226 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 25
# 227 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 228 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 229 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 230 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 231 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 232 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 233 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 234 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 235 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb1
# 236 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb1
# 237 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb1
# 238 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 239 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 240 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 241 "data/maps/NewMauville_Inside/scripts.pory"

# 242 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb1::
# 243 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 244 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 245 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 246 "data/maps/NewMauville_Inside/scripts.pory"

# 247 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2::
# 248 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 249 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 250 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 25
# 251 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 252 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 253 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 254 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 255 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 256 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 257 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 258 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 259 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb2
# 260 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb2
# 261 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb2
# 262 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 263 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 264 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 265 "data/maps/NewMauville_Inside/scripts.pory"

# 266 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb2::
# 267 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 268 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 269 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 270 "data/maps/NewMauville_Inside/scripts.pory"

# 271 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3::
# 272 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 273 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 274 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 25
# 275 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 276 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 277 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 278 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 279 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 280 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 281 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 282 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 283 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb3
# 284 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb3
# 285 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb3
# 286 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 287 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 288 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 289 "data/maps/NewMauville_Inside/scripts.pory"

# 290 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb3::
# 291 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 292 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 293 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 294 "data/maps/NewMauville_Inside/scripts.pory"

# 295 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_GeneratorRadiatingHeat:
# 296 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator is radiating heat that\n"
# 297 "data/maps/NewMauville_Inside/scripts.pory"
	.string "can be felt even at a distance.\p"
# 298 "data/maps/NewMauville_Inside/scripts.pory"
	.string "It looks like it should be turned off\n"
# 299 "data/maps/NewMauville_Inside/scripts.pory"
	.string "as soon as possible.$"
# 300 "data/maps/NewMauville_Inside/scripts.pory"

# 301 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_GeneratorQuietedDown:
# 302 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator quieted down.$"
# 303 "data/maps/NewMauville_Inside/scripts.pory"

# 304 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped:
# 305 "data/maps/NewMauville_Inside/scripts.pory"
	.string "{PLAYER} stepped on the switch.\p"
# 306 "data/maps/NewMauville_Inside/scripts.pory"
	.string "Click…\p"
# 307 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\n"
# 308 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\p"
# 309 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator appears to have\n"
# 310 "data/maps/NewMauville_Inside/scripts.pory"
	.string "stopped…$"
