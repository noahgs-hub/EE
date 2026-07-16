#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Orbiting announces levitation on entry and blocks Ground moves")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_MUD_SLAP) == TYPE_GROUND);
        PLAYER(SPECIES_LUNATONE) { Ability(ABILITY_ORBITING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_MUD_SLAP); }
    } SCENE {
        MESSAGE("Orbiting causes Lunatone to levitate!");
        ABILITY_POPUP(player, ABILITY_ORBITING);
        MESSAGE("It doesn't affect Lunatone…");
    }
}

SINGLE_BATTLE_TEST("Orbiting absorbs Water-type moves and raises Sp. Atk by one stage")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_WATER_GUN) == TYPE_WATER);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_LUNATONE) { Ability(ABILITY_ORBITING); }
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, player);
            HP_BAR(opponent);
        };
        ABILITY_POPUP(opponent, ABILITY_ORBITING);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Lunatone's Sp. Atk rose!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Orbiting does not absorb non-Water moves")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_TACKLE) == TYPE_NORMAL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_LUNATONE) { Ability(ABILITY_ORBITING); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        HP_BAR(opponent);
    }
}

DOUBLE_BATTLE_TEST("Orbiting redirects single-target Water-type moves to the user")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_WATER_GUN) == TYPE_WATER);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_LUNATONE) { Ability(ABILITY_ORBITING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_WATER_GUN, target: opponentRight);
            MOVE(playerRight, MOVE_CELEBRATE);
            MOVE(opponentLeft, MOVE_CELEBRATE);
            MOVE(opponentRight, MOVE_CELEBRATE);
        }
    } SCENE {
        ABILITY_POPUP(opponentLeft, ABILITY_ORBITING);
        MESSAGE("The opposing Lunatone's Sp. Atk rose!");
    } THEN {
        EXPECT_EQ(opponentLeft->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(opponentRight->hp, opponentRight->maxHP);
    }
}
