# 1 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 2 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_MapScripts::
# 3 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.byte 0
# 4 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 5 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Steven::
# 6 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lock
# 7 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
# 8 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitse
# 9 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playse SE_PIN
# 10 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_ExclamationMark
# 11 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 12 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_Delay48
# 13 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 14 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
# 15 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 16 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
# 17 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
# 18 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 19 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_StillMuchToExplore, MSGBOX_DEFAULT
# 20 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	giveitem ITEM_EON_TICKET
# 21 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_ENABLE_SHIP_SOUTHERN_ISLAND
# 22 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 23 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
# 24 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 25 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
# 26 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	giveitem ITEM_OLD_SEA_MAP
# 27 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_ENABLE_SHIP_FARAWAY_ISLAND
# 28 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
# 29 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 30 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 31 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 32 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Defeated::
# 33 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
# 34 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 35 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 36 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 37 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 38 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 39 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
# 40 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "STEVEN: Oh, wow, {PLAYER}{KUN}.\n"
# 41 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I'm amazed you knew where to find me.\p"
# 42 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Do you, uh…maybe think of me as\n"
# 43 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "just a rock maniac?\p"
# 44 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "No, that can't be right.\p"
# 45 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "We battled alongside each other at\n"
# 46 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "the SOOTOPOLIS SPACE CENTER.\p"
# 47 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "You should have a very good idea\n"
# 48 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "about how good I am.\p"
# 49 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, if you're going to mount\n"
# 50 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "a serious challenge, expect the worst!$"
# 51 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 52 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_StevenDefeat:
# 53 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "You…\n"
# 54 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I had no idea you'd become so strong…$"
# 55 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 56 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
# 57 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "STEVEN: Come to think of it, ever since\n"
# 58 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "our paths first crossed in GRANITE\l"
# 59 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "CAVE in DEWFORD, I had this feeling.\p"
# 60 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I thought that you would eventually\n"
# 61 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "become the CHAMPION.\p"
# 62 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "My predictions usually come true.\p"
# 63 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "And where will you go from here?\p"
# 64 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "… … … … … …\n"
# 65 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "… … … … … …\p"
# 66 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Fufufu, even I couldn't tell you that.$"
# 67 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 68 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_StillMuchToExplore:
# 69 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "There is still much to explore,\n"
# 70 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "your journey doesn't end here.\p"
# 71 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Take these, they may lead you to\n"
# 72 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "your next adventure!$"
