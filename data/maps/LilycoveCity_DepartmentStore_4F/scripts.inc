LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
	.2byte ITEM_TM_FOCUS_PUNCH
	.2byte ITEM_TM_DRAGON_CLAW
	.2byte ITEM_TM_WATER_PULSE
	.2byte ITEM_TM_BULLET_SEED
	.2byte ITEM_TM_HIDDEN_POWER
	.2byte ITEM_TM_ICE_BEAM
	.2byte ITEM_TM_BLIZZARD
	.2byte ITEM_TM_HYPER_BEAM
	.2byte ITEM_TM_GIGA_DRAIN
	.2byte ITEM_TM_SOLAR_BEAM
	.2byte ITEM_TM_IRON_TAIL
	.2byte ITEM_TM_THUNDERBOLT
	.2byte ITEM_TM_THUNDER
	.2byte ITEM_TM_EARTHQUAKE
	.2byte ITEM_TM_DIG
	.2byte ITEM_TM_PSYCHIC
	.2byte ITEM_TM_SHADOW_BALL
	.2byte ITEM_TM_BRICK_BREAK
	.2byte ITEM_TM_SHOCK_WAVE
	.2byte ITEM_TM_FLAMETHROWER
	.2byte ITEM_TM_SLUDGE_BOMB
	.2byte ITEM_TM_FIRE_BLAST
	.2byte ITEM_TM_ROCK_TOMB
	.2byte ITEM_TM_AERIAL_ACE
	.2byte ITEM_TM_FACADE
	.2byte ITEM_TM_SECRET_POWER
	.2byte ITEM_TM_THIEF
	.2byte ITEM_TM_STEEL_WING
	.2byte ITEM_TM_OVERHEAT
	.2byte ITEM_TM_TAKE_DOWN
	.2byte ITEM_TM_MUD_SLAP
	.2byte ITEM_TM_FIRE_FANG
	.2byte ITEM_TM_THUNDER_FANG
	.2byte ITEM_TM_ICE_FANG
	.2byte ITEM_TM_ACID_SPRAY
	.2byte ITEM_TM_ACROBATICS
	.2byte ITEM_TM_STRUGGLE_BUG
	.2byte ITEM_TM_PSYBEAM
	.2byte ITEM_TM_DISARMING_VOICE
	.2byte ITEM_TM_TRAILBLAZE
	.2byte ITEM_TM_POUNCE
	.2byte ITEM_TM_CHILLING_WATER
	.2byte ITEM_TM_CHARGE_BEAM
	.2byte ITEM_TM_FIRE_SPIN
	.2byte ITEM_TM_POISON_TAIL
	.2byte ITEM_TM_BULLDOZE
	.2byte ITEM_TM_HEX
	.2byte ITEM_TM_SNARL
	.2byte ITEM_TM_METAL_CLAW
	.2byte ITEM_TM_SWIFT
	.2byte ITEM_TM_MAGICAL_LEAF
	.2byte ITEM_TM_ICY_WIND
	.2byte ITEM_TM_MUD_SHOT
	.2byte ITEM_TM_DRAINING_KISS
	.2byte ITEM_TM_FLAME_CHARGE
	.2byte ITEM_TM_LOW_SWEEP
	.2byte ITEM_TM_AIR_CUTTER
	.2byte ITEM_TM_STORED_POWER
	.2byte ITEM_TM_DRAGON_TAIL
	.2byte ITEM_TM_VENOSHOCK
	.2byte ITEM_TM_AVALANCHE
	.2byte ITEM_TM_VOLT_SWITCH
	.2byte ITEM_TM_SMART_STRIKE
	.2byte ITEM_TM_PSYSHOCK
	.2byte ITEM_TM_FALSE_SWIPE
	.2byte ITEM_TM_ZEN_HEADBUTT
	.2byte ITEM_TM_U_TURN
	.2byte ITEM_TM_SHADOW_CLAW
	.2byte ITEM_TM_FOUL_PLAY
	.2byte ITEM_TM_PSYCHIC_FANGS
	.2byte ITEM_TM_AIR_SLASH
	.2byte ITEM_TM_BODY_SLAM
	.2byte ITEM_TM_FIRE_PUNCH
	.2byte ITEM_TM_THUNDER_PUNCH
	.2byte ITEM_TM_ICE_PUNCH
	.2byte ITEM_TM_SEED_BOMB
	.2byte ITEM_TM_DRAIN_PUNCH
	.2byte ITEM_TM_ROCK_BLAST
	.2byte ITEM_TM_DAZZLING_GLEAM
	.2byte ITEM_TM_POISON_JAB
	.2byte ITEM_TM_STOMPING_TANTRUM
	.2byte ITEM_TM_ROCK_SLIDE
	.2byte ITEM_TM_BODY_PRESS
	.2byte ITEM_TM_FLASH_CANNON
	.2byte ITEM_TM_DARK_PULSE
	.2byte ITEM_TM_LEECH_LIFE
	.2byte ITEM_TM_IRON_HEAD
	.2byte ITEM_TM_POWER_GEM
	.2byte ITEM_TM_GUNK_SHOT
	.2byte ITEM_TM_X_SCISSOR
	.2byte ITEM_TM_DRILL_RUN
	.2byte ITEM_TM_CRUNCH
	.2byte ITEM_TM_LIQUIDATION
	.2byte ITEM_TM_AURA_SPHERE
	.2byte ITEM_TM_DRAGON_PULSE
	.2byte ITEM_TM_HYPER_VOICE
	.2byte ITEM_TM_HEAT_WAVE
	.2byte ITEM_TM_ENERGY_BALL
	.2byte ITEM_TM_ICE_SPINNER
	.2byte ITEM_TM_PLAY_ROUGH
	.2byte ITEM_TM_POLLEN_PUFF
	.2byte ITEM_TM_EARTH_POWER
	.2byte ITEM_TM_HYDRO_PUMP
	.2byte ITEM_TM_FIRE_PLEDGE
	.2byte ITEM_TM_WATER_PLEDGE
	.2byte ITEM_TM_GRASS_PLEDGE
	.2byte ITEM_TM_WILD_CHARGE
	.2byte ITEM_TM_STONE_EDGE
	.2byte ITEM_TM_PHANTOM_FORCE
	.2byte ITEM_TM_GIGA_IMPACT
	.2byte ITEM_TM_BLAST_BURN
	.2byte ITEM_TM_HYDRO_CANNON
	.2byte ITEM_TM_FRENZY_PLANT
	.2byte ITEM_TM_OUTRAGE
	.2byte ITEM_TM_FOCUS_BLAST
	.2byte ITEM_TM_LEAF_STORM
	.2byte ITEM_TM_HURRICANE
	.2byte ITEM_TM_BUG_BUZZ
	.2byte ITEM_TM_BRAVE_BIRD
	.2byte ITEM_TM_FLARE_BLITZ
	.2byte ITEM_TM_CLOSE_COMBAT
	.2byte ITEM_TM_DRACO_METEOR
	.2byte ITEM_TM_STEEL_BEAM
	.2byte ITEM_TM_TERA_BLAST
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
	.2byte ITEM_TM_CALM_MIND
	.2byte ITEM_TM_ROAR
	.2byte ITEM_TM_TOXIC
	.2byte ITEM_TM_HAIL
	.2byte ITEM_TM_BULK_UP
	.2byte ITEM_TM_SUNNY_DAY
	.2byte ITEM_TM_TAUNT
	.2byte ITEM_TM_LIGHT_SCREEN
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_TM_RAIN_DANCE
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_FRUSTRATION
	.2byte ITEM_TM_RETURN
	.2byte ITEM_TM_DOUBLE_TEAM
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_SANDSTORM
	.2byte ITEM_TM_TORMENT
	.2byte ITEM_TM_REST
	.2byte ITEM_TM_ATTRACT
	.2byte ITEM_TM_SKILL_SWAP
	.2byte ITEM_TM_SNATCH
	.2byte ITEM_TM_CHARM
	.2byte ITEM_TM_FAKE_TEARS
	.2byte ITEM_TM_AGILITY
	.2byte ITEM_TM_SCARY_FACE
	.2byte ITEM_TM_LOW_KICK
	.2byte ITEM_TM_CONFUSE_RAY
	.2byte ITEM_TM_NIGHT_SHADE
	.2byte ITEM_TM_FLING
	.2byte ITEM_TM_ENDURE
	.2byte ITEM_TM_SNOWSCAPE
	.2byte ITEM_TM_SLEEP_TALK
	.2byte ITEM_TM_ELECTRO_BALL
	.2byte ITEM_TM_METRONOME
	.2byte ITEM_TM_GRASS_KNOT
	.2byte ITEM_TM_THUNDER_WAVE
	.2byte ITEM_TM_SWORDS_DANCE
	.2byte ITEM_TM_SPIKES
	.2byte ITEM_TM_TOXIC_SPIKES
	.2byte ITEM_TM_IMPRISON
	.2byte ITEM_TM_EERIE_IMPULSE
	.2byte ITEM_TM_DRAGON_DANCE
	.2byte ITEM_TM_SUBSTITUTE
	.2byte ITEM_TM_IRON_DEFENSE
	.2byte ITEM_TM_WILL_O_WISP
	.2byte ITEM_TM_TRICK
	.2byte ITEM_TM_TAILWIND
	.2byte ITEM_TM_STEALTH_ROCK
	.2byte ITEM_TM_HEAVY_SLAM
	.2byte ITEM_TM_ENCORE
	.2byte ITEM_TM_AMNESIA
	.2byte ITEM_TM_HELPING_HAND
	.2byte ITEM_TM_BATON_PASS
	.2byte ITEM_TM_REVERSAL
	.2byte ITEM_TM_ELECTRIC_TERRAIN
	.2byte ITEM_TM_GRASSY_TERRAIN
	.2byte ITEM_TM_PSYCHIC_TERRAIN
	.2byte ITEM_TM_MISTY_TERRAIN
	.2byte ITEM_TM_NASTY_PLOT
	.2byte ITEM_TM_TRICK_ROOM
	pokemartlistend

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "This store stocks nearly every TM\n"
	.string "in existence now!$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "I'd like to get all the different TMs,\n"
	.string "but a POKéMON learns only four moves.$"

