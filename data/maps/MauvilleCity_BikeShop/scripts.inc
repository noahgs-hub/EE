MauvilleCity_BikeShop_EventScript_RydelServices::
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_BOUGHT_SECOND_BIKE, MauvilleCity_BikeShop_EventScript_RydelServices_2
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_RydelServices_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_BikeShop_Text_MenuSwitchBikes, MauvilleCity_BikeShop_Text_MenuBuyOtherBike, MauvilleCity_BikeShop_Text_MenuExit
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq MauvilleCity_BikeShop_EventScript_RydelServices_5
MauvilleCity_BikeShop_EventScript_RydelServices_4:
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MauvilleCity_BikeShop_EventScript_RydelServices_8
MauvilleCity_BikeShop_EventScript_RydelServices_7:
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_BikeShop_EventScript_RydelServices_11
MauvilleCity_BikeShop_EventScript_RydelServices_10:
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SwitchBikes
	return

MauvilleCity_BikeShop_EventScript_RydelServices_2:
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_RydelServices_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	end

MauvilleCity_BikeShop_EventScript_RydelServices_5:
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_KeepBike
	goto MauvilleCity_BikeShop_EventScript_RydelServices_4

MauvilleCity_BikeShop_EventScript_RydelServices_8:
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_KeepBike
	goto MauvilleCity_BikeShop_EventScript_RydelServices_7

MauvilleCity_BikeShop_EventScript_RydelServices_11:
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_BuySecondBike
	goto MauvilleCity_BikeShop_EventScript_RydelServices_10


MauvilleCity_BikeShop_EventScript_BuySecondBike::
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_BikeShop_EventScript_BuySecondBike_2
MauvilleCity_BikeShop_EventScript_BuySecondBike_1:
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_BikeShop_EventScript_BuySecondBike_5
MauvilleCity_BikeShop_EventScript_BuySecondBike_4:
# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_BuySecondBike_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	end

MauvilleCity_BikeShop_EventScript_BuySecondBike_2:
# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_BuyAcroBike
	goto MauvilleCity_BikeShop_EventScript_BuySecondBike_1

MauvilleCity_BikeShop_EventScript_BuySecondBike_5:
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_BuyMachBike
	goto MauvilleCity_BikeShop_EventScript_BuySecondBike_4


MauvilleCity_BikeShop_EventScript_BuyAcroBike::
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_BuyAcroBike_Text_0, MSGBOX_YESNO
# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_BikeShop_EventScript_BuyAcroBike_2
MauvilleCity_BikeShop_EventScript_BuyAcroBike_1:
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitemspace ITEM_ACRO_BIKE
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_BikeShop_EventScript_BuyAcroBike_5
MauvilleCity_BikeShop_EventScript_BuyAcroBike_4:
# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	showmoneybox 0, 0
# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkmoney 50000
# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_BikeShop_EventScript_BuyAcroBike_8
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removemoney 50000
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	updatemoneybox
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_BOUGHT_SECOND_BIKE
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	hidemoneybox
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OwnsBothBikes, MSGBOX_DEFAULT
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	end

MauvilleCity_BikeShop_EventScript_BuyAcroBike_2:
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_KeepBike
	goto MauvilleCity_BikeShop_EventScript_BuyAcroBike_1

MauvilleCity_BikeShop_EventScript_BuyAcroBike_5:
# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_BikeShop_EventScript_BuyAcroBike_4

MauvilleCity_BikeShop_EventScript_BuyAcroBike_8:
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	hidemoneybox
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_BuyAcroBike_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	end


MauvilleCity_BikeShop_EventScript_BuyMachBike::
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_BuyMachBike_Text_0, MSGBOX_YESNO
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_BikeShop_EventScript_BuyMachBike_2
MauvilleCity_BikeShop_EventScript_BuyMachBike_1:
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitemspace ITEM_MACH_BIKE
# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_BikeShop_EventScript_BuyMachBike_5
MauvilleCity_BikeShop_EventScript_BuyMachBike_4:
# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	showmoneybox 0, 0
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkmoney 50000
# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_BikeShop_EventScript_BuyMachBike_8
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removemoney 50000
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	updatemoneybox
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_BOUGHT_SECOND_BIKE
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	hidemoneybox
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OwnsBothBikes, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	end

MauvilleCity_BikeShop_EventScript_BuyMachBike_2:
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_KeepBike
	goto MauvilleCity_BikeShop_EventScript_BuyMachBike_1

MauvilleCity_BikeShop_EventScript_BuyMachBike_5:
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_BikeShop_EventScript_BuyMachBike_4

MauvilleCity_BikeShop_EventScript_BuyMachBike_8:
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	hidemoneybox
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_BuyAcroBike_Text_1, MSGBOX_DEFAULT
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	end


# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel::
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_RydelServices
# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_SkipGreeting
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting::
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike::
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, TRUE
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_GetMachBike
# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_GetAcroBike
# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_NotFar::
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar::
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike::
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike::
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
@ If the player does not have a bike on them Rydel assumes its stored in the PC
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes::
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepBike::
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchAcroForMach::
# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchMachForAcro::
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 227 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 239 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 240 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 250 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 252 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 256 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 257 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 262 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 266 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 267 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 271 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 272 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 275 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 281 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 282 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 285 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting:
# 286 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\n"
# 287 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A most energetic customer!\p"
# 288 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Me? You may call me RYDEL.\n"
# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm the owner of this cycle shop.$"
# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 291 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
# 292 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Your RUNNING SHOES…\n"
# 293 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They're awfully filthy.\p"
# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Did you come from far away?$"
# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 296 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike:
# 297 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Is that right?\p"
# 298 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Then, I guess you have no need for\n"
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "any of my BIKES.$"
# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne:
# 302 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Hm, hm… … … … …\p"
# 303 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You're saying that you came all this\n"
# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "way from LITTLEROOT?\p"
# 305 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "My goodness!\n"
# 306 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "That's ridiculously far!\p"
# 307 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you had one of my BIKES, you could\n"
# 308 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "go anywhere easily while feeling the\l"
# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gentle caress of the wind!\p"
# 310 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll tell you what!\n"
# 311 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll give you a BIKE!\p"
# 312 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, wait a second!\p"
# 313 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I forgot to tell you that there are\n"
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "two kinds of BIKES!\p"
# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They are the MACH BIKE and\n"
# 316 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the ACRO BIKE!\p"
# 317 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The MACH BIKE is for cyclists who want\n"
# 318 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to feel the wind with their bodies!\p"
# 319 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "And an ACRO BIKE is for those who\n"
# 320 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "prefer technical rides!\p"
# 321 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm a real sweetheart, so you can\n"
# 322 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "have whichever one you like!\p"
# 323 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which one will you choose?$"
# 324 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 325 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike:
# 326 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"
# 327 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 328 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike:
# 329 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"
# 330 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 331 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes:
# 332 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: If you get the urge to switch\n"
# 333 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKES, just come see me!$"
# 334 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 335 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes:
# 336 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Okay, no problem!\n"
# 337 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll switch BIKES for you!$"
# 338 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 339 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
# 340 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the MACH BIKE exchanged\n"
# 341 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for an ACRO BIKE.$"
# 342 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 343 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
# 344 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the ACRO BIKE exchanged\n"
# 345 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for a MACH BIKE.$"
# 346 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 347 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt:
# 348 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Good, good!\n"
# 349 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm happy that you like it!$"
# 350 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 351 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
# 352 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? What happened to that BIKE\n"
# 353 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I gave you?\p"
# 354 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, I get it, you stored it using your PC.\p"
# 355 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, take it out of PC storage,\n"
# 356 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and I'll be happy to exchange it!\p"
# 357 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "May the wind always be at your back\n"
# 358 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "on your adventure!$"
# 359 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 360 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 361 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about BIKES while\n"
# 362 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I work here.\p"
# 363 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you need advice on how to ride your\n"
# 364 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKE, there're a couple handbooks in\l"
# 365 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the back.$"
# 366 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 367 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 368 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the MACH BIKE.\p"
# 369 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 370 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 371 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 372 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A BIKE moves in the direction that\n"
# 373 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the + Control Pad is pressed.\p"
# 374 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It will speed up once it gets rolling.\p"
# 375 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "To stop, release the + Control Pad.\n"
# 376 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The BIKE will slow to a stop.\p"
# 377 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 378 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 379 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 380 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A MACH BIKE is speedy, but it can't\n"
# 381 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "stop very quickly.\p"
# 382 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It gets a little tricky to get around\n"
# 383 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a corner.\p"
# 384 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Release the + Control Pad a little\n"
# 385 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "before the corner and slow down.\p"
# 386 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 387 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 388 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 389 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
# 390 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "throughout the HOENN region.\p"
# 391 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The loose, crumbly sand makes it\n"
# 392 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "impossible to climb normally.\p"
# 393 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "But if you have a MACH BIKE, you can\n"
# 394 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zip up a sandy slope.\p"
# 395 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 396 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 397 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 398 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the ACRO BIKE.\p"
# 399 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 400 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 401 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 402 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
# 403 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and the front wheel lifts up.\p"
# 404 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can zip around with the front\n"
# 405 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "wheel up using the + Control Pad.\p"
# 406 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a wheelie.\p"
# 407 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 408 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 409 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 410 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
# 411 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "your BIKE can hop on the spot.\p"
# 412 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a bunny hop.\p"
# 413 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can ride while hopping, too.\p"
# 414 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 415 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 416 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 417 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
# 418 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pad at the same time to jump.\p"
# 419 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the + Control Pad to the side\n"
# 420 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to jump sideways.\p"
# 421 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press it backwards to make the BIKE\n"
# 422 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "change directions while jumping.\p"
# 423 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"

MauvilleCity_BikeShop_EventScript_RydelServices_Text_0:
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Ah, my very best customer! The\n"
	.string "proud owner of both the MACH BIKE and\l"
	.string "the ACRO BIKE! May the wind always be\l"
	.string "at your back!$"

MauvilleCity_BikeShop_EventScript_RydelServices_Text_1:
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Welcome back! What can I do for\n"
	.string "you today?$"

MauvilleCity_BikeShop_EventScript_BuySecondBike_Text_0:
# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Hm? Where's the BIKE I gave you?\n"
	.string "Stored in your PC?\p"
	.string "Go grab it first! I can't sell you the\n"
	.string "other BIKE if I can't see which one\l"
	.string "you're missing!$"

MauvilleCity_BikeShop_EventScript_BuyAcroBike_Text_0:
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Ohh, so you want my ACRO BIKE to\n"
	.string "go with your MACH BIKE!\p"
	.string "For a cyclist as passionate as you, it's\n"
	.string "a steal at ¥50,000! Do we have a deal?$"

MauvilleCity_BikeShop_EventScript_BuyAcroBike_Text_1:
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Oh dear… You're a little short.\n"
	.string "It's ¥50,000! I can't budge on\l"
	.string "craftsmanship!$"

MauvilleCity_BikeShop_EventScript_BuyMachBike_Text_0:
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Ohh, so you want my MACH BIKE to\n"
	.string "go with your ACRO BIKE!\p"
	.string "For a cyclist as passionate as you, it's\n"
	.string "a steal at ¥50,000! Do we have a deal?$"

MauvilleCity_BikeShop_Text_MenuSwitchBikes::
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "SWITCH BIKES$"

MauvilleCity_BikeShop_Text_MenuBuyOtherBike::
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BUY THE OTHER BIKE$"

MauvilleCity_BikeShop_Text_MenuExit::
# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "NEVER MIND$"

MauvilleCity_BikeShop_Text_OwnsBothBikes::
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Ahh, it fills my heart to see a\n"
	.string "customer riding off with both of my\l"
	.string "BIKES!\p"
	.string "No more switching for you--just ride\n"
	.string "like the wind!$"
