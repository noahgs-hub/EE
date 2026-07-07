LilycoveCity_EventScript_Parker::
# 2 "data/maps/LilycoveCity/scripts.pory"
	lock
# 3 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 5 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_LILYCOVE_PARKER_LINKING_CORD, LilycoveCity_EventScript_Parker_2
# 11 "data/maps/LilycoveCity/scripts.pory"
	checkitemspace ITEM_LINKING_CORD, 1
# 12 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_Parker_5
# 18 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Parker_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity/scripts.pory"
	giveitem ITEM_LINKING_CORD
# 20 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_LILYCOVE_PARKER_LINKING_CORD
# 21 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_Parker_2:
# 6 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Parker_Text_0, MSGBOX_DEFAULT
# 7 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_Parker_5:
# 13 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Parker_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/LilycoveCity/scripts.pory"
	release
	end


# 25 "data/maps/LilycoveCity/scripts.pory"

# 26 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 27 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 28 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 29 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 30 "data/maps/LilycoveCity/scripts.pory"

# 31 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 32 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 33 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 34 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 35 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 36 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 37 "data/maps/LilycoveCity/scripts.pory"
	end
# 38 "data/maps/LilycoveCity/scripts.pory"

# 39 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 40 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 41 "data/maps/LilycoveCity/scripts.pory"
	end
# 42 "data/maps/LilycoveCity/scripts.pory"

# 43 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 44 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 45 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 46 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 47 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 48 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 49 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 50 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 51 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 52 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 53 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 54 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 55 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 56 "data/maps/LilycoveCity/scripts.pory"
	return
# 57 "data/maps/LilycoveCity/scripts.pory"

# 58 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 59 "data/maps/LilycoveCity/scripts.pory"
	lock
# 60 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 61 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 62 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 63 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 64 "data/maps/LilycoveCity/scripts.pory"
	giverandomberry BERRY_ID_CHERI, BERRY_ID_SITRUS
# 65 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 66 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 67 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 68 "data/maps/LilycoveCity/scripts.pory"
	release
# 69 "data/maps/LilycoveCity/scripts.pory"
	end
# 70 "data/maps/LilycoveCity/scripts.pory"

# 71 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 72 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 73 "data/maps/LilycoveCity/scripts.pory"
	release
# 74 "data/maps/LilycoveCity/scripts.pory"
	end
# 75 "data/maps/LilycoveCity/scripts.pory"

# 76 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 77 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 78 "data/maps/LilycoveCity/scripts.pory"
	end
# 79 "data/maps/LilycoveCity/scripts.pory"

# 80 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 81 "data/maps/LilycoveCity/scripts.pory"
	lock
# 82 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 83 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 84 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 85 "data/maps/LilycoveCity/scripts.pory"
	release
# 86 "data/maps/LilycoveCity/scripts.pory"
	end
# 87 "data/maps/LilycoveCity/scripts.pory"

# 88 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 89 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 90 "data/maps/LilycoveCity/scripts.pory"
	release
# 91 "data/maps/LilycoveCity/scripts.pory"
	end
# 92 "data/maps/LilycoveCity/scripts.pory"

# 93 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 94 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 95 "data/maps/LilycoveCity/scripts.pory"
	end
# 96 "data/maps/LilycoveCity/scripts.pory"

# 97 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 98 "data/maps/LilycoveCity/scripts.pory"
	lock
# 99 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 100 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 101 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 102 "data/maps/LilycoveCity/scripts.pory"
	release
# 103 "data/maps/LilycoveCity/scripts.pory"
	end
# 104 "data/maps/LilycoveCity/scripts.pory"

# 105 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 106 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 107 "data/maps/LilycoveCity/scripts.pory"
	release
# 108 "data/maps/LilycoveCity/scripts.pory"
	end
# 109 "data/maps/LilycoveCity/scripts.pory"

# 110 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 111 "data/maps/LilycoveCity/scripts.pory"
	lock
# 112 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 113 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 114 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 115 "data/maps/LilycoveCity/scripts.pory"
	release
# 116 "data/maps/LilycoveCity/scripts.pory"
	end
# 117 "data/maps/LilycoveCity/scripts.pory"

# 118 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 119 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 120 "data/maps/LilycoveCity/scripts.pory"
	release
# 121 "data/maps/LilycoveCity/scripts.pory"
	end
# 122 "data/maps/LilycoveCity/scripts.pory"

# 123 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 124 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 125 "data/maps/LilycoveCity/scripts.pory"
	end
# 126 "data/maps/LilycoveCity/scripts.pory"

# 127 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 128 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 129 "data/maps/LilycoveCity/scripts.pory"
	end
# 130 "data/maps/LilycoveCity/scripts.pory"

# 131 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 132 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 133 "data/maps/LilycoveCity/scripts.pory"
	end
# 134 "data/maps/LilycoveCity/scripts.pory"

# 135 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 136 "data/maps/LilycoveCity/scripts.pory"
	lock
# 137 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 138 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 139 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 140 "data/maps/LilycoveCity/scripts.pory"
	release
# 141 "data/maps/LilycoveCity/scripts.pory"
	end
# 142 "data/maps/LilycoveCity/scripts.pory"

# 143 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 144 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 145 "data/maps/LilycoveCity/scripts.pory"
	release
# 146 "data/maps/LilycoveCity/scripts.pory"
	end
# 147 "data/maps/LilycoveCity/scripts.pory"

# 148 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 149 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 150 "data/maps/LilycoveCity/scripts.pory"
	end
# 151 "data/maps/LilycoveCity/scripts.pory"

# 152 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 153 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 154 "data/maps/LilycoveCity/scripts.pory"
	end
# 155 "data/maps/LilycoveCity/scripts.pory"

# 156 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 157 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 158 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 159 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_MAN_1, Common_Movement_FaceOriginalDirection
# 160 "data/maps/LilycoveCity/scripts.pory"
	end
# 161 "data/maps/LilycoveCity/scripts.pory"

# 162 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 163 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 164 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 165 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_WOMAN_1, Common_Movement_FaceOriginalDirection
# 166 "data/maps/LilycoveCity/scripts.pory"
	end
# 167 "data/maps/LilycoveCity/scripts.pory"

# 168 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 169 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 170 "data/maps/LilycoveCity/scripts.pory"
	end
# 171 "data/maps/LilycoveCity/scripts.pory"

# 172 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 173 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 174 "data/maps/LilycoveCity/scripts.pory"
	end
# 175 "data/maps/LilycoveCity/scripts.pory"

# 176 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 177 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 178 "data/maps/LilycoveCity/scripts.pory"
	end
# 179 "data/maps/LilycoveCity/scripts.pory"

# 180 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 181 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 182 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 183 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 184 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 185 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 186 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 187 "data/maps/LilycoveCity/scripts.pory"
	end
# 188 "data/maps/LilycoveCity/scripts.pory"

# 189 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 190 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 191 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 192 "data/maps/LilycoveCity/scripts.pory"
	end
# 193 "data/maps/LilycoveCity/scripts.pory"

# 194 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 195 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 196 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 197 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 198 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 199 "data/maps/LilycoveCity/scripts.pory"
	end
# 200 "data/maps/LilycoveCity/scripts.pory"

# 201 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 202 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 204 "data/maps/LilycoveCity/scripts.pory"
	end
# 205 "data/maps/LilycoveCity/scripts.pory"

# 206 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 207 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 208 "data/maps/LilycoveCity/scripts.pory"
	end
# 209 "data/maps/LilycoveCity/scripts.pory"

# 210 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 211 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 212 "data/maps/LilycoveCity/scripts.pory"
	end
# 213 "data/maps/LilycoveCity/scripts.pory"

# 214 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 215 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 216 "data/maps/LilycoveCity/scripts.pory"
	end
# 217 "data/maps/LilycoveCity/scripts.pory"

# 218 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 219 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 220 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 221 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 222 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 223 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 224 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 225 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 226 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 227 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 228 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 229 "data/maps/LilycoveCity/scripts.pory"
	end
# 230 "data/maps/LilycoveCity/scripts.pory"

# 231 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 232 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 233 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 234 "data/maps/LilycoveCity/scripts.pory"
	end
# 235 "data/maps/LilycoveCity/scripts.pory"

# 236 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 237 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 238 "data/maps/LilycoveCity/scripts.pory"
	end
# 239 "data/maps/LilycoveCity/scripts.pory"

# 240 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 241 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 242 "data/maps/LilycoveCity/scripts.pory"
	end
# 243 "data/maps/LilycoveCity/scripts.pory"

# 244 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 245 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 246 "data/maps/LilycoveCity/scripts.pory"
	end
# 247 "data/maps/LilycoveCity/scripts.pory"

# 248 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 249 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 250 "data/maps/LilycoveCity/scripts.pory"
	end
# 251 "data/maps/LilycoveCity/scripts.pory"

# 252 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 253 "data/maps/LilycoveCity/scripts.pory"
	lock
# 254 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 255 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 256 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 257 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 258 "data/maps/LilycoveCity/scripts.pory"
	end
# 259 "data/maps/LilycoveCity/scripts.pory"

# 260 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 261 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 262 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 263 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 264 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 265 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 266 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 267 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 268 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 269 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 270 "data/maps/LilycoveCity/scripts.pory"
	end
# 271 "data/maps/LilycoveCity/scripts.pory"

# 272 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 273 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 274 "data/maps/LilycoveCity/scripts.pory"
	return
# 275 "data/maps/LilycoveCity/scripts.pory"

# 276 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 277 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 278 "data/maps/LilycoveCity/scripts.pory"
	return
# 279 "data/maps/LilycoveCity/scripts.pory"

# 280 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 281 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 282 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 283 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 284 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 285 "data/maps/LilycoveCity/scripts.pory"
	release
# 286 "data/maps/LilycoveCity/scripts.pory"
	end
# 287 "data/maps/LilycoveCity/scripts.pory"

# 288 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 289 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 290 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 291 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 292 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 293 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 294 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 295 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 296 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 297 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 298 "data/maps/LilycoveCity/scripts.pory"
	end
# 299 "data/maps/LilycoveCity/scripts.pory"

# 300 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 301 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 302 "data/maps/LilycoveCity/scripts.pory"
	return
# 303 "data/maps/LilycoveCity/scripts.pory"

# 304 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 305 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 306 "data/maps/LilycoveCity/scripts.pory"
	return
# 307 "data/maps/LilycoveCity/scripts.pory"

# 308 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 309 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 310 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 311 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 312 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 313 "data/maps/LilycoveCity/scripts.pory"
	release
# 314 "data/maps/LilycoveCity/scripts.pory"
	end
# 315 "data/maps/LilycoveCity/scripts.pory"

# 316 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 317 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 318 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 319 "data/maps/LilycoveCity/scripts.pory"
	end
# 320 "data/maps/LilycoveCity/scripts.pory"

# 321 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 322 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 323 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 324 "data/maps/LilycoveCity/scripts.pory"
	end
# 325 "data/maps/LilycoveCity/scripts.pory"

# 326 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 327 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 328 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 329 "data/maps/LilycoveCity/scripts.pory"
	end
# 330 "data/maps/LilycoveCity/scripts.pory"

# 331 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 332 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 333 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 334 "data/maps/LilycoveCity/scripts.pory"
	end
# 335 "data/maps/LilycoveCity/scripts.pory"

# 336 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 337 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 338 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 339 "data/maps/LilycoveCity/scripts.pory"
	end
# 340 "data/maps/LilycoveCity/scripts.pory"

# 341 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 342 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 343 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 344 "data/maps/LilycoveCity/scripts.pory"
	end
# 345 "data/maps/LilycoveCity/scripts.pory"

# 346 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 347 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 348 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 349 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 350 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 351 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 352 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 353 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 354 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 355 "data/maps/LilycoveCity/scripts.pory"
	end
# 356 "data/maps/LilycoveCity/scripts.pory"

# 357 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 358 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 359 "data/maps/LilycoveCity/scripts.pory"
	return
# 360 "data/maps/LilycoveCity/scripts.pory"

# 361 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 362 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 363 "data/maps/LilycoveCity/scripts.pory"
	return
# 364 "data/maps/LilycoveCity/scripts.pory"

# 365 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 366 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 367 "data/maps/LilycoveCity/scripts.pory"
	return
# 368 "data/maps/LilycoveCity/scripts.pory"

# 369 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 370 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 371 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 372 "data/maps/LilycoveCity/scripts.pory"
	return
# 373 "data/maps/LilycoveCity/scripts.pory"

# 374 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 375 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 376 "data/maps/LilycoveCity/scripts.pory"
	return
# 377 "data/maps/LilycoveCity/scripts.pory"

# 378 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 379 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 380 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 381 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 382 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 383 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 384 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 385 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 386 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 387 "data/maps/LilycoveCity/scripts.pory"
	end
# 388 "data/maps/LilycoveCity/scripts.pory"

# 389 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 390 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 391 "data/maps/LilycoveCity/scripts.pory"
	return
# 392 "data/maps/LilycoveCity/scripts.pory"

# 393 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 394 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 395 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 396 "data/maps/LilycoveCity/scripts.pory"
	return
# 397 "data/maps/LilycoveCity/scripts.pory"

# 398 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 399 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 400 "data/maps/LilycoveCity/scripts.pory"
	return
# 401 "data/maps/LilycoveCity/scripts.pory"

# 402 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 403 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 404 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 405 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 406 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 407 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 408 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 409 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 410 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 411 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 412 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 413 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 414 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 415 "data/maps/LilycoveCity/scripts.pory"
	release
# 416 "data/maps/LilycoveCity/scripts.pory"
	end
# 417 "data/maps/LilycoveCity/scripts.pory"

# 418 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 419 "data/maps/LilycoveCity/scripts.pory"
	lock
# 420 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 421 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 422 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 423 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 424 "data/maps/LilycoveCity/scripts.pory"
	release
# 425 "data/maps/LilycoveCity/scripts.pory"
	end
# 426 "data/maps/LilycoveCity/scripts.pory"

# 427 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 428 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 429 "data/maps/LilycoveCity/scripts.pory"
	return
# 430 "data/maps/LilycoveCity/scripts.pory"

# 431 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 432 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 433 "data/maps/LilycoveCity/scripts.pory"
	return
# 434 "data/maps/LilycoveCity/scripts.pory"

# 435 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
# 437 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 438 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "POSTERS.\p"
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 441 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 446 "data/maps/LilycoveCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 447 "data/maps/LilycoveCity/scripts.pory"

# 448 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "TRAINER…$"
# 453 "data/maps/LilycoveCity/scripts.pory"

# 454 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your POKéMON!$"
# 457 "data/maps/LilycoveCity/scripts.pory"

# 458 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
# 460 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 461 "data/maps/LilycoveCity/scripts.pory"

# 462 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 463 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 468 "data/maps/LilycoveCity/scripts.pory"

# 469 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 470 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
# 471 "data/maps/LilycoveCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 474 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 475 "data/maps/LilycoveCity/scripts.pory"

# 476 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 478 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 479 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 480 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 484 "data/maps/LilycoveCity/scripts.pory"

# 485 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 488 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 489 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 492 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 493 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 494 "data/maps/LilycoveCity/scripts.pory"

# 495 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 496 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 497 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 498 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 499 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 500 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 501 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 504 "data/maps/LilycoveCity/scripts.pory"

# 505 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 506 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
# 507 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 508 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 509 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 510 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 511 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON better?$"
# 512 "data/maps/LilycoveCity/scripts.pory"

# 513 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 514 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
# 515 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 516 "data/maps/LilycoveCity/scripts.pory"

# 517 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 518 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 520 "data/maps/LilycoveCity/scripts.pory"

# 521 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 522 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
# 523 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 524 "data/maps/LilycoveCity/scripts.pory"

# 525 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 529 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 530 "data/maps/LilycoveCity/scripts.pory"

# 531 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: I…\n"
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 537 "data/maps/LilycoveCity/scripts.pory"

# 538 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 543 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 544 "data/maps/LilycoveCity/scripts.pory"

# 545 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 548 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 551 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 552 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 553 "data/maps/LilycoveCity/scripts.pory"

# 554 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 558 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 559 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "FRONTIER.\p"
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 567 "data/maps/LilycoveCity/scripts.pory"

# 568 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 569 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "HIDEOUT today…\p"
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 573 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 574 "data/maps/LilycoveCity/scripts.pory"

# 575 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 576 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
# 577 "data/maps/LilycoveCity/scripts.pory"
	.string "the BOSS is thinking…\p"
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on TEAM AQUA, I know I'll get\n"
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 581 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 582 "data/maps/LilycoveCity/scripts.pory"

# 583 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 587 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 588 "data/maps/LilycoveCity/scripts.pory"

# 589 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 590 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's, it will be a happier\l"
# 592 "data/maps/LilycoveCity/scripts.pory"
	.string "place for POKéMON, too.$"
# 593 "data/maps/LilycoveCity/scripts.pory"

# 594 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 595 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
# 596 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 597 "data/maps/LilycoveCity/scripts.pory"

# 598 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 599 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 602 "data/maps/LilycoveCity/scripts.pory"

# 603 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 606 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised POKéMON will\n"
# 607 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 609 "data/maps/LilycoveCity/scripts.pory"

# 610 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 612 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 613 "data/maps/LilycoveCity/scripts.pory"

# 614 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a CONTEST.\p"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the MOVE DELETER\n"
# 618 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 619 "data/maps/LilycoveCity/scripts.pory"

# 620 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 621 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "The HOENN region is beautiful with\n"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 624 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 625 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare POKéMON that live\n"
# 626 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 627 "data/maps/LilycoveCity/scripts.pory"

# 628 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "WAILMER in the cove.\p"
# 631 "data/maps/LilycoveCity/scripts.pory"
	.string "We SAILORS can't get our boats out\n"
# 632 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 633 "data/maps/LilycoveCity/scripts.pory"

# 634 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 635 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 636 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted TEAM AQUA out of\n"
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 638 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the WAILMER out of the cove,\n"
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 640 "data/maps/LilycoveCity/scripts.pory"

# 641 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 643 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 644 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my POKéMON!\p"
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 646 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA? Is it TEAM AQUA?$"
# 647 "data/maps/LilycoveCity/scripts.pory"

# 648 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 649 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 651 "data/maps/LilycoveCity/scripts.pory"

# 652 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the MUSEUM here has\n"
# 657 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 658 "data/maps/LilycoveCity/scripts.pory"

# 659 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 662 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 663 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 664 "data/maps/LilycoveCity/scripts.pory"

# 665 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 667 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 668 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 669 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 670 "data/maps/LilycoveCity/scripts.pory"

# 671 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 673 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 674 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 675 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 677 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 678 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving TEAM AQUA”!\p"
# 679 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 681 "data/maps/LilycoveCity/scripts.pory"

# 682 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 683 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 684 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 685 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 686 "data/maps/LilycoveCity/scripts.pory"
	.string "That TEAM AQUA lot, they must\n"
# 687 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 688 "data/maps/LilycoveCity/scripts.pory"

# 689 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 690 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
# 691 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 692 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 693 "data/maps/LilycoveCity/scripts.pory"

# 694 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 695 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
# 696 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for TRAINERS!”$"
# 697 "data/maps/LilycoveCity/scripts.pory"

# 698 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 699 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
# 700 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as COVE LILY of\n"
# 701 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE.”$"
# 702 "data/maps/LilycoveCity/scripts.pory"

# 703 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 704 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 705 "data/maps/LilycoveCity/scripts.pory"
	.string "“POKéMON Masterpiece Collection\n"
# 706 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 707 "data/maps/LilycoveCity/scripts.pory"

# 708 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 709 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 710 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s POKéMON Collection\n"
# 711 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 712 "data/maps/LilycoveCity/scripts.pory"

# 713 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 715 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 716 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in SLATEPORT CITY.\p"
# 717 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 719 "data/maps/LilycoveCity/scripts.pory"

# 720 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 721 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 722 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 724 "data/maps/LilycoveCity/scripts.pory"

# 725 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 726 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 727 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of TRAINERS are scribbled\n"
# 728 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 729 "data/maps/LilycoveCity/scripts.pory"

# 730 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 731 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
# 732 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 736 "data/maps/LilycoveCity/scripts.pory"

# 737 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 738 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
# 739 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted POKéMON moves deleted.”$"
# 740 "data/maps/LilycoveCity/scripts.pory"

# 741 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 742 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 743 "data/maps/LilycoveCity/scripts.pory"
	.string "BERRY BLENDER?$"
# 744 "data/maps/LilycoveCity/scripts.pory"

# 745 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 746 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 747 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 748 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 749 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 750 "data/maps/LilycoveCity/scripts.pory"

# 751 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 753 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 754 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
# 755 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 756 "data/maps/LilycoveCity/scripts.pory"

# 757 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 758 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 759 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 760 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the SKY PILLAR, I hear.$"
# 761 "data/maps/LilycoveCity/scripts.pory"

# 762 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 763 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 764 "data/maps/LilycoveCity/scripts.pory"
	.string "around ROUTE 131.\p"
# 765 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 766 "data/maps/LilycoveCity/scripts.pory"

# 767 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 768 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 769 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 770 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a DRAGON-type\n"
# 771 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON flying way up in the sky.\p"
# 772 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool POKéMON like that live in\n"
# 773 "data/maps/LilycoveCity/scripts.pory"
	.string "the HOENN region?$"
# 774 "data/maps/LilycoveCity/scripts.pory"

# 775 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 776 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 777 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare POKéMON as we can.\p"
# 778 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 779 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON as soon as we arrived.\p"
# 780 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"

LilycoveCity_EventScript_Parker_Text_0:
# 6 "data/maps/LilycoveCity/scripts.pory"
	.string "Parker: Go away, I'm listening to The\n"
	.string "War On Drugs and tweeting about Israel.$"

LilycoveCity_EventScript_Parker_Text_1:
# 13 "data/maps/LilycoveCity/scripts.pory"
	.string "Parker: Your bag is full. Classic.$"

LilycoveCity_EventScript_Parker_Text_2:
# 18 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh me? I'm Parker. I'm too cool to be in\n"
	.string "this pokemon game unironically, that\l"
	.string "would be fucking gay.\p"
	.string "Noah wants to keep access to my Plex\n"
	.string "server so he can't make me do something\l"
	.string "retarded like stick my dick in a vending\l"
	.string "machine.\p"
	.string "Here you can have this, hang yourself\n"
	.string "with it.$"
