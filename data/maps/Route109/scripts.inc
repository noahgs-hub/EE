Route109_MapScripts::
# 2 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route109_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE109_HYPNO_CREW
	return


Route109_EventScript_HypnoGirl::
# 9 "data/maps/Route109/scripts.pory"
	lockall
# 10 "data/maps/Route109/scripts.pory"
	delay 16
# 12 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_ROUTE109_HYPNO_CREW
# 13 "data/maps/Route109/scripts.pory"
	addobject LOCALID_ROUTE109_HYPNO_BOAT
# 14 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_HYPNO_BOAT, Route109_EventScript_HypnoGirl_Movement_0
# 15 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route109/scripts.pory"
	delay 16
# 18 "data/maps/Route109/scripts.pory"
	addobject LOCALID_ROUTE109_JEFF
# 19 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_JEFF, MAP_ROUTE109, 0
# 20 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_JEFF, Route109_EventScript_HypnoGirl_Movement_1
# 21 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_ROUTE109_JEFF, MAP_ROUTE109
# 24 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_HYPNO_GIRL1, Route109_EventScript_HypnoGirl_Movement_2
# 25 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_HYPNO_GIRL2, Route109_EventScript_HypnoGirl_Movement_2
# 26 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_JEFF, Route109_EventScript_HypnoGirl_Movement_3
# 29 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route109/scripts.pory"
	playse SE_BALL_THROW
# 31 "data/maps/Route109/scripts.pory"
	waitse
# 32 "data/maps/Route109/scripts.pory"
	addobject LOCALID_ROUTE109_HYPNO
# 33 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_HYPNO, Route109_EventScript_HypnoGirl_Movement_4
# 34 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
# 36 "data/maps/Route109/scripts.pory"
	waitmoncry
# 37 "data/maps/Route109/scripts.pory"
	msgbox Route109_EventScript_HypnoGirl_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/Route109/scripts.pory"
	closemessage
# 40 "data/maps/Route109/scripts.pory"
	playse SE_M_PSYBEAM
# 41 "data/maps/Route109/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 42 "data/maps/Route109/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 43 "data/maps/Route109/scripts.pory"
	playse SE_M_PSYBEAM
# 44 "data/maps/Route109/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 45 "data/maps/Route109/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 46 "data/maps/Route109/scripts.pory"
	delay 16
# 47 "data/maps/Route109/scripts.pory"
	msgbox Route109_EventScript_HypnoGirl_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/Route109/scripts.pory"
	closemessage
# 50 "data/maps/Route109/scripts.pory"
	compare VAR_LAST_TALKED, LOCALID_ROUTE109_HYPNO_GIRL1
	goto_if_eq Route109_EventScript_HypnoGirl_3
Route109_EventScript_HypnoGirl_1:
# 55 "data/maps/Route109/scripts.pory"
	playse SE_BALL
# 56 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_HYPNO
# 57 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_JEFF, MAP_ROUTE109, 0
# 58 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_HYPNO_GIRL1, MAP_ROUTE109, 0
# 59 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_HYPNO_GIRL2, MAP_ROUTE109, 0
# 60 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_JEFF, Route109_EventScript_HypnoGirl_Movement_6
# 61 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_HYPNO_GIRL1, Route109_EventScript_HypnoGirl_Movement_7
# 62 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_HYPNO_GIRL2, Route109_EventScript_HypnoGirl_Movement_8
# 63 "data/maps/Route109/scripts.pory"
	waitmovement LOCALID_ROUTE109_JEFF
# 64 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_JEFF
# 65 "data/maps/Route109/scripts.pory"
	waitmovement LOCALID_ROUTE109_HYPNO_GIRL1
# 66 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_HYPNO_GIRL1
# 67 "data/maps/Route109/scripts.pory"
	waitmovement LOCALID_ROUTE109_HYPNO_GIRL2
# 68 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_HYPNO_GIRL2
# 69 "data/maps/Route109/scripts.pory"
	delay 16
# 71 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_HYPNO_BOAT, Route109_EventScript_HypnoGirl_Movement_9
# 72 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_HYPNO_BOAT
# 74 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE109_HYPNO_CREW
# 75 "data/maps/Route109/scripts.pory"
	setflag FLAG_ROUTE109_HYPNO_EVENT_DONE
# 76 "data/maps/Route109/scripts.pory"
	delay 16
# 77 "data/maps/Route109/scripts.pory"
	msgbox Route109_EventScript_HypnoGirl_Text_2, MSGBOX_DEFAULT
# 78 "data/maps/Route109/scripts.pory"
	closemessage
# 79 "data/maps/Route109/scripts.pory"
	giveitem ITEM_PP_UP
# 80 "data/maps/Route109/scripts.pory"
	releaseall
	end

Route109_EventScript_HypnoGirl_2:
# 51 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_EventScript_HypnoGirl_Movement_5
# 52 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_HypnoGirl_1

Route109_EventScript_HypnoGirl_3:
# 50 "data/maps/Route109/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Route109_EventScript_HypnoGirl_2
	goto Route109_EventScript_HypnoGirl_1


# 84 "data/maps/Route109/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
# 85 "data/maps/Route109/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 86 "data/maps/Route109/scripts.pory"

# 87 "data/maps/Route109/scripts.pory"

# 88 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 89 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 90 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 91 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109, 0
# 92 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, Route109_Movement_BrineyEnterBoat
# 93 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_BRINEY
# 95 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 96 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 97 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 98 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 99 "data/maps/Route109/scripts.pory"
	end
# 100 "data/maps/Route109/scripts.pory"

# 101 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 102 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 103 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 105 "data/maps/Route109/scripts.pory"
	end
# 106 "data/maps/Route109/scripts.pory"

# 107 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 108 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 109 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 111 "data/maps/Route109/scripts.pory"
	end
# 112 "data/maps/Route109/scripts.pory"

# 113 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 114 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 115 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 117 "data/maps/Route109/scripts.pory"
	end
# 118 "data/maps/Route109/scripts.pory"

# 119 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 120 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE109
# 121 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 122 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BOAT, Route109_Movement_SailToDewford
# 123 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_SailToDewford
# 124 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route109/scripts.pory"
	delay 50
# 126 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 127 "data/maps/Route109/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 128 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerExitBoat
# 129 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 131 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 132 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 133 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 134 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 135 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route109_Movement_BrineyExitBoat
# 136 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 138 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 139 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_ROUTE109_BOAT, MAP_ROUTE109
# 140 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 141 "data/maps/Route109/scripts.pory"
	closemessage
# 142 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 143 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109
# 144 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 145 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 146 "data/maps/Route109/scripts.pory"
	release
# 147 "data/maps/Route109/scripts.pory"
	end
# 148 "data/maps/Route109/scripts.pory"

# 149 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 150 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 151 "data/maps/Route109/scripts.pory"
	walk_down
# 152 "data/maps/Route109/scripts.pory"
	walk_down
# 153 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 154 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 155 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 156 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 157 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 158 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 159 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 160 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 161 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 162 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 163 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 164 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 165 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 166 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 167 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 168 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 169 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 170 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 171 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 173 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 176 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 177 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 178 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 179 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 180 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 181 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 183 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 184 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 185 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 186 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 187 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 188 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 189 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 190 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 191 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 192 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 193 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 194 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 195 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 196 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 197 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 198 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 199 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 200 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 201 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 202 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 203 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 204 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 205 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 206 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 207 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 208 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 209 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 210 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 211 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 212 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 213 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 214 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 215 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 218 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 219 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 220 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 221 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 222 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 223 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 224 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 225 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 226 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 227 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 228 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 229 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 230 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 231 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 232 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 233 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 234 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 235 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 236 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 237 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 238 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 239 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 240 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 241 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 242 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 243 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 244 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 245 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 246 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 247 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 248 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 249 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 250 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 251 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 252 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 253 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 254 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 255 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 256 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 257 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 258 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 259 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 260 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 261 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 262 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 263 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 264 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 265 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 266 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 267 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 268 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 269 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 270 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 271 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 272 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 273 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 274 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 275 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 276 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 277 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 278 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 279 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 280 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 281 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 282 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 283 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 284 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 285 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 286 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 287 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 288 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 289 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 290 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 291 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 292 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 293 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 294 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 295 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 296 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 297 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 298 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 299 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 300 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 301 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 302 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 303 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 304 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 305 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 306 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 307 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 308 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 309 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 310 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 311 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 312 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 313 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 314 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 316 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 317 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 318 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 319 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 320 "data/maps/Route109/scripts.pory"
	walk_left
# 321 "data/maps/Route109/scripts.pory"
	walk_left
# 322 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 323 "data/maps/Route109/scripts.pory"
	step_end
# 324 "data/maps/Route109/scripts.pory"

# 325 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 326 "data/maps/Route109/scripts.pory"
	walk_down
# 327 "data/maps/Route109/scripts.pory"
	walk_down
# 328 "data/maps/Route109/scripts.pory"
	step_end
# 329 "data/maps/Route109/scripts.pory"

# 330 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 331 "data/maps/Route109/scripts.pory"
	walk_down
# 332 "data/maps/Route109/scripts.pory"
	walk_down
# 333 "data/maps/Route109/scripts.pory"
	walk_left
# 334 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 335 "data/maps/Route109/scripts.pory"
	step_end
# 336 "data/maps/Route109/scripts.pory"

# 337 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 338 "data/maps/Route109/scripts.pory"
	walk_right
# 339 "data/maps/Route109/scripts.pory"
	walk_down
# 340 "data/maps/Route109/scripts.pory"
	step_end
# 341 "data/maps/Route109/scripts.pory"

# 342 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 343 "data/maps/Route109/scripts.pory"
	walk_left
# 344 "data/maps/Route109/scripts.pory"
	walk_down
# 345 "data/maps/Route109/scripts.pory"
	step_end
# 346 "data/maps/Route109/scripts.pory"

# 347 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 348 "data/maps/Route109/scripts.pory"
	walk_down
# 349 "data/maps/Route109/scripts.pory"
	step_end
# 350 "data/maps/Route109/scripts.pory"

# 351 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 352 "data/maps/Route109/scripts.pory"
	walk_down
# 353 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 354 "data/maps/Route109/scripts.pory"
	step_end
# 355 "data/maps/Route109/scripts.pory"

# 356 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 357 "data/maps/Route109/scripts.pory"
	lock
# 358 "data/maps/Route109/scripts.pory"
	faceplayer
# 359 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 360 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 361 "data/maps/Route109/scripts.pory"
	end
# 362 "data/maps/Route109/scripts.pory"

# 363 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 364 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 365 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 366 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 367 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 368 "data/maps/Route109/scripts.pory"
	end
# 369 "data/maps/Route109/scripts.pory"

# 370 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 371 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 372 "data/maps/Route109/scripts.pory"
	waitmessage
# 373 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 374 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 375 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 376 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 377 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 378 "data/maps/Route109/scripts.pory"
	end
# 379 "data/maps/Route109/scripts.pory"

# 380 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 381 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 382 "data/maps/Route109/scripts.pory"
	closemessage
# 383 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 384 "data/maps/Route109/scripts.pory"
	end
# 385 "data/maps/Route109/scripts.pory"

# 386 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 387 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 388 "data/maps/Route109/scripts.pory"
	release
# 389 "data/maps/Route109/scripts.pory"
	end
# 390 "data/maps/Route109/scripts.pory"

# 391 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 392 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 393 "data/maps/Route109/scripts.pory"
	release
# 394 "data/maps/Route109/scripts.pory"
	end
# 395 "data/maps/Route109/scripts.pory"

# 396 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 397 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
# 398 "data/maps/Route109/scripts.pory"
	end
# 399 "data/maps/Route109/scripts.pory"

# 400 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 401 "data/maps/Route109/scripts.pory"
	lock
# 402 "data/maps/Route109/scripts.pory"
	faceplayer
# 403 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 404 "data/maps/Route109/scripts.pory"
	closemessage
# 405 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 406 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 407 "data/maps/Route109/scripts.pory"
	release
# 408 "data/maps/Route109/scripts.pory"
	end
# 409 "data/maps/Route109/scripts.pory"

# 410 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 411 "data/maps/Route109/scripts.pory"
	lock
# 412 "data/maps/Route109/scripts.pory"
	faceplayer
# 413 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 414 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 415 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 416 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 417 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 418 "data/maps/Route109/scripts.pory"
	closemessage
# 419 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 420 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 422 "data/maps/Route109/scripts.pory"
	release
# 423 "data/maps/Route109/scripts.pory"
	end
# 424 "data/maps/Route109/scripts.pory"

# 425 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 426 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 427 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 428 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 429 "data/maps/Route109/scripts.pory"
	release
# 430 "data/maps/Route109/scripts.pory"
	end
# 431 "data/maps/Route109/scripts.pory"

# 432 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 433 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 434 "data/maps/Route109/scripts.pory"
	end
# 435 "data/maps/Route109/scripts.pory"

# 436 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 437 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 438 "data/maps/Route109/scripts.pory"
	end
# 439 "data/maps/Route109/scripts.pory"

# 440 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 441 "data/maps/Route109/scripts.pory"
	lock
# 442 "data/maps/Route109/scripts.pory"
	faceplayer
# 443 "data/maps/Route109/scripts.pory"
	waitse
# 444 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 445 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 446 "data/maps/Route109/scripts.pory"
	waitmoncry
# 447 "data/maps/Route109/scripts.pory"
	release
# 448 "data/maps/Route109/scripts.pory"
	end
# 449 "data/maps/Route109/scripts.pory"

# 450 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 451 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 452 "data/maps/Route109/scripts.pory"
	end
# 453 "data/maps/Route109/scripts.pory"

# 454 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 455 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 456 "data/maps/Route109/scripts.pory"
	end
# 457 "data/maps/Route109/scripts.pory"

# 458 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 459 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 460 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 461 "data/maps/Route109/scripts.pory"
	end
# 462 "data/maps/Route109/scripts.pory"

# 463 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 464 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 465 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 466 "data/maps/Route109/scripts.pory"
	end
# 467 "data/maps/Route109/scripts.pory"

# 468 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 469 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 470 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 471 "data/maps/Route109/scripts.pory"
	end
# 472 "data/maps/Route109/scripts.pory"

# 473 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 474 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 475 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 476 "data/maps/Route109/scripts.pory"
	end
# 477 "data/maps/Route109/scripts.pory"

# 478 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 479 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 480 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 481 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 482 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 483 "data/maps/Route109/scripts.pory"
	release
# 484 "data/maps/Route109/scripts.pory"
	end
# 485 "data/maps/Route109/scripts.pory"

# 486 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 487 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 488 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 489 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 490 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 491 "data/maps/Route109/scripts.pory"
	release
# 492 "data/maps/Route109/scripts.pory"
	end
# 493 "data/maps/Route109/scripts.pory"

# 494 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 495 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 496 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 497 "data/maps/Route109/scripts.pory"
	end
# 498 "data/maps/Route109/scripts.pory"

# 499 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 500 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 501 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 502 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 503 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 504 "data/maps/Route109/scripts.pory"
	release
# 505 "data/maps/Route109/scripts.pory"
	end
# 506 "data/maps/Route109/scripts.pory"

# 507 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 508 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 509 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 510 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 511 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 512 "data/maps/Route109/scripts.pory"
	release
# 513 "data/maps/Route109/scripts.pory"
	end
# 514 "data/maps/Route109/scripts.pory"

# 515 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 516 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 517 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 518 "data/maps/Route109/scripts.pory"
	end
# 519 "data/maps/Route109/scripts.pory"

# 520 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 521 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 522 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 523 "data/maps/Route109/scripts.pory"
	end
# 524 "data/maps/Route109/scripts.pory"

# 525 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 526 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 527 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 528 "data/maps/Route109/scripts.pory"
	end
# 529 "data/maps/Route109/scripts.pory"

# 530 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 531 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 532 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 533 "data/maps/Route109/scripts.pory"
	end
# 534 "data/maps/Route109/scripts.pory"

# 535 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 536 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 537 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 538 "data/maps/Route109/scripts.pory"
	end
# 539 "data/maps/Route109/scripts.pory"

# 540 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 541 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 542 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 543 "data/maps/Route109/scripts.pory"
	end
# 544 "data/maps/Route109/scripts.pory"

# 545 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 546 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 547 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 548 "data/maps/Route109/scripts.pory"
	end
# 549 "data/maps/Route109/scripts.pory"

# 550 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 551 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 552 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 553 "data/maps/Route109/scripts.pory"
	end
# 554 "data/maps/Route109/scripts.pory"

# 555 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 556 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 557 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 558 "data/maps/Route109/scripts.pory"
	end
# 559 "data/maps/Route109/scripts.pory"

# 560 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 561 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 562 "data/maps/Route109/scripts.pory"
	.string "We've made land in SLATEPORT!\p"
# 563 "data/maps/Route109/scripts.pory"
	.string "I suppose you're going to visit CAPT.\n"
# 564 "data/maps/Route109/scripts.pory"
	.string "STERN and deliver the DEVON GOODS?$"
# 565 "data/maps/Route109/scripts.pory"

# 566 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 567 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: I thought you're supposed\n"
# 568 "data/maps/Route109/scripts.pory"
	.string "to deliver the DEVON GOODS.\p"
# 569 "data/maps/Route109/scripts.pory"
	.string "Would you like to sail back to\n"
# 570 "data/maps/Route109/scripts.pory"
	.string "DEWFORD, then?$"
# 571 "data/maps/Route109/scripts.pory"

# 572 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 573 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\p"
# 574 "data/maps/Route109/scripts.pory"
	.string "Anchors aweigh!\n"
# 575 "data/maps/Route109/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 576 "data/maps/Route109/scripts.pory"

# 577 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 578 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 579 "data/maps/Route109/scripts.pory"
	.string "the DEVON GOODS. I'll be waiting.$"
# 580 "data/maps/Route109/scripts.pory"

# 581 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 582 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy! We've made land in\n"
# 583 "data/maps/Route109/scripts.pory"
	.string "SLATEPORT!\p"
# 584 "data/maps/Route109/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 585 "data/maps/Route109/scripts.pory"
	.string "you want to set sail again!$"
# 586 "data/maps/Route109/scripts.pory"

# 587 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 588 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 589 "data/maps/Route109/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 590 "data/maps/Route109/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 591 "data/maps/Route109/scripts.pory"

# 592 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 593 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 594 "data/maps/Route109/scripts.pory"
	.string "you need to set sail again!$"
# 595 "data/maps/Route109/scripts.pory"

# 596 "data/maps/Route109/scripts.pory"
Route109_Text_ChillAtMyPapasSpot:
# 597 "data/maps/Route109/scripts.pory"
	.string "Yo, TRAINERS!\n"
# 598 "data/maps/Route109/scripts.pory"
	.string "Whether you're hot to trot,\l"
# 599 "data/maps/Route109/scripts.pory"
	.string "or cool cat not,\l"
# 600 "data/maps/Route109/scripts.pory"
	.string "chill at my papa's spot!$"
# 601 "data/maps/Route109/scripts.pory"

# 602 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 603 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 604 "data/maps/Route109/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 605 "data/maps/Route109/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 606 "data/maps/Route109/scripts.pory"
	.string "Mine are with my POKéMON, so they\n"
# 607 "data/maps/Route109/scripts.pory"
	.string "should be okay, but…$"
# 608 "data/maps/Route109/scripts.pory"

# 609 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 610 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 611 "data/maps/Route109/scripts.pory"
	.string "to make.$"
# 612 "data/maps/Route109/scripts.pory"

# 613 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 614 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"
# 615 "data/maps/Route109/scripts.pory"

# 616 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 617 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
# 618 "data/maps/Route109/scripts.pory"
	.string "the beach and make a big castle!\p"
# 619 "data/maps/Route109/scripts.pory"
	.string "And then we're going to be a king and\n"
# 620 "data/maps/Route109/scripts.pory"
	.string "queen.\p"
# 621 "data/maps/Route109/scripts.pory"
	.string "We'll let you be a servant.$"
# 622 "data/maps/Route109/scripts.pory"

# 623 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 624 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
# 625 "data/maps/Route109/scripts.pory"
	.string "But, I get my ZIGZAGOON to pick up\n"
# 626 "data/maps/Route109/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 627 "data/maps/Route109/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 628 "data/maps/Route109/scripts.pory"
	.string "rivers, which we drink from…\p"
# 629 "data/maps/Route109/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 630 "data/maps/Route109/scripts.pory"
	.string "back to haunt us eventually.$"
# 631 "data/maps/Route109/scripts.pory"

# 632 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 633 "data/maps/Route109/scripts.pory"
	.string "ZIGZAGOON: Guguu?$"
# 634 "data/maps/Route109/scripts.pory"

# 635 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 636 "data/maps/Route109/scripts.pory"
	.string "SEASHORE HOUSE\p"
# 637 "data/maps/Route109/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 638 "data/maps/Route109/scripts.pory"
	.string "The place for hot TRAINERS!”$"
# 639 "data/maps/Route109/scripts.pory"

# 640 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 641 "data/maps/Route109/scripts.pory"
	.string "TRAINER TIPS\p"
# 642 "data/maps/Route109/scripts.pory"
	.string "POKéMON at the same level may not\n"
# 643 "data/maps/Route109/scripts.pory"
	.string "always have identical stats.\p"
# 644 "data/maps/Route109/scripts.pory"
	.string "POKéMON raised by TRAINERS are said\n"
# 645 "data/maps/Route109/scripts.pory"
	.string "to grow stronger than wild POKéMON.$"

# 14 "data/maps/Route109/scripts.pory"
Route109_EventScript_HypnoGirl_Movement_0:
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
# 14 "data/maps/Route109/scripts.pory"
	walk_fast_up
	step_end

# 20 "data/maps/Route109/scripts.pory"
Route109_EventScript_HypnoGirl_Movement_1:
# 20 "data/maps/Route109/scripts.pory"
	jump_up
	step_end

# 24 "data/maps/Route109/scripts.pory"
Route109_EventScript_HypnoGirl_Movement_2:
# 24 "data/maps/Route109/scripts.pory"
	face_down
	step_end

# 28 "data/maps/Route109/scripts.pory"
Route109_EventScript_HypnoGirl_Movement_3:
# 28 "data/maps/Route109/scripts.pory"
	face_left
	step_end

# 33 "data/maps/Route109/scripts.pory"
Route109_EventScript_HypnoGirl_Movement_4:
# 33 "data/maps/Route109/scripts.pory"
	jump_in_place_up
	step_end

# 51 "data/maps/Route109/scripts.pory"
Route109_EventScript_HypnoGirl_Movement_5:
# 51 "data/maps/Route109/scripts.pory"
	walk_right
# 51 "data/maps/Route109/scripts.pory"
	face_left
	step_end

# 60 "data/maps/Route109/scripts.pory"
Route109_EventScript_HypnoGirl_Movement_6:
# 60 "data/maps/Route109/scripts.pory"
	face_down
# 60 "data/maps/Route109/scripts.pory"
	walk_down
	step_end

# 61 "data/maps/Route109/scripts.pory"
Route109_EventScript_HypnoGirl_Movement_7:
# 61 "data/maps/Route109/scripts.pory"
	delay_16
# 61 "data/maps/Route109/scripts.pory"
	delay_16
# 61 "data/maps/Route109/scripts.pory"
	walk_down
# 61 "data/maps/Route109/scripts.pory"
	walk_down
# 61 "data/maps/Route109/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/Route109/scripts.pory"
Route109_EventScript_HypnoGirl_Movement_8:
# 62 "data/maps/Route109/scripts.pory"
	delay_16
# 62 "data/maps/Route109/scripts.pory"
	delay_16
# 62 "data/maps/Route109/scripts.pory"
	delay_16
# 62 "data/maps/Route109/scripts.pory"
	delay_16
# 62 "data/maps/Route109/scripts.pory"
	walk_left
# 62 "data/maps/Route109/scripts.pory"
	walk_down
# 62 "data/maps/Route109/scripts.pory"
	walk_down
# 62 "data/maps/Route109/scripts.pory"
	walk_down
	step_end

# 71 "data/maps/Route109/scripts.pory"
Route109_EventScript_HypnoGirl_Movement_9:
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
	step_end

Route109_EventScript_HypnoGirl_Text_0:
# 37 "data/maps/Route109/scripts.pory"
	.string "Jeff: Hypno use Hypnosis!$"

Route109_EventScript_HypnoGirl_Text_1:
# 47 "data/maps/Route109/scripts.pory"
	.string "Come on girls!$"

Route109_EventScript_HypnoGirl_Text_2:
# 77 "data/maps/Route109/scripts.pory"
	.string "Wow that was concerning! Hopefully\n"
	.string "someone else has time to deal with it!\p"
	.string "Oh look, he left something behind!$"
