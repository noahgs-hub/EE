#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Centrifuge makes single-target physical moves hit both opposing Pokemon")
{
    GIVEN {
        PLAYER(SPECIES_CLAYDOL) { Ability(ABILITY_CENTRIFUGE); Speed(20); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(3); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
    }
}

DOUBLE_BATTLE_TEST("Centrifuge does not spread special moves")
{
    GIVEN {
        PLAYER(SPECIES_CLAYDOL) { Ability(ABILITY_CENTRIFUGE); Speed(20); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(3); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_WATER_GUN, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, playerLeft);
        HP_BAR(opponentLeft);
        NOT HP_BAR(opponentRight);
    }
}

DOUBLE_BATTLE_TEST("Centrifuge does not spread physical moves for a Pokemon without the ability")
{
    GIVEN {
        PLAYER(SPECIES_CLAYDOL) { Ability(ABILITY_LEVITATE); Speed(20); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(3); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerLeft);
        HP_BAR(opponentLeft);
        NOT HP_BAR(opponentRight);
    }
}

SINGLE_BATTLE_TEST("Centrifuge does nothing in a single battle")
{
    GIVEN {
        PLAYER(SPECIES_CLAYDOL) { Ability(ABILITY_CENTRIFUGE); Speed(20); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        HP_BAR(opponent);
    }
}
