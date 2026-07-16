#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_RAZOR_WIND) == EFFECT_TWO_TURNS_ATTACK);
    ASSUME(GetMoveEffect(MOVE_DIG) == EFFECT_SEMI_INVULNERABLE);
}

SINGLE_BATTLE_TEST("Nuclear Fusion announces levitation on entry and blocks Ground moves")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_MUD_SLAP) == TYPE_GROUND);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_NUCLEAR_FUSION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_MUD_SLAP); }
    } SCENE {
        MESSAGE("Nuclear Fusion causes Wobbuffet to levitate!");
        ABILITY_POPUP(player, ABILITY_NUCLEAR_FUSION);
        MESSAGE("It doesn't affect Wobbuffet…");
    }
}

SINGLE_BATTLE_TEST("Nuclear Fusion charges the user at the end of the turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_NUCLEAR_FUSION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NUCLEAR_FUSION);
        MESSAGE("Nuclear Fusion charges Wobbuffet!");
    }
}

SINGLE_BATTLE_TEST("Nuclear Fusion does not recharge on a turn it starts charged")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_NUCLEAR_FUSION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Nuclear Fusion charges Wobbuffet!");
        NOT MESSAGE("Nuclear Fusion charges Wobbuffet!");
    }
}

SINGLE_BATTLE_TEST("Nuclear Fusion lets a charged user fire a two-turn move immediately")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_NUCLEAR_FUSION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_RAZOR_WIND); }
    } SCENE {
        MESSAGE("Nuclear Fusion charges Wobbuffet!");
        MESSAGE("Wobbuffet used Razor Wind!");
        MESSAGE("Wobbuffet became fully charged by Nuclear Fusion!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAZOR_WIND, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Nuclear Fusion does not recharge on the turn its charge is expended")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_NUCLEAR_FUSION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_RAZOR_WIND); }
        TURN { MOVE(player, MOVE_RAZOR_WIND); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        // Turn 1: charges at end of turn.
        MESSAGE("Nuclear Fusion charges Wobbuffet!");
        // Turn 2: fires instantly, expending the charge.
        MESSAGE("Wobbuffet became fully charged by Nuclear Fusion!");
        HP_BAR(opponent);
        // No recharge at the end of turn 2, so turn 3 must be a charging turn.
        NOT MESSAGE("Nuclear Fusion charges Wobbuffet!");
        MESSAGE("Wobbuffet used Razor Wind!");
        // It recharges at the end of turn 3 (started it uncharged).
        MESSAGE("Nuclear Fusion charges Wobbuffet!");
        // Turn 4: the move fires normally.
        MESSAGE("Wobbuffet used Razor Wind!");
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Nuclear Fusion charge is not expended by finishing a normally charged move")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_NUCLEAR_FUSION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_RAZOR_WIND); }
        TURN { SKIP_TURN(player); }
        TURN { MOVE(player, MOVE_RAZOR_WIND); }
    } SCENE {
        // Turn 1: charging turn, then end-of-turn charge.
        MESSAGE("Wobbuffet used Razor Wind!");
        MESSAGE("Nuclear Fusion charges Wobbuffet!");
        // Turn 2: fires the charged-up move without expending the ability charge.
        MESSAGE("Wobbuffet used Razor Wind!");
        NOT MESSAGE("Wobbuffet became fully charged by Nuclear Fusion!");
        HP_BAR(opponent);
        // Turn 3: the kept charge lets it fire instantly.
        MESSAGE("Wobbuffet used Razor Wind!");
        MESSAGE("Wobbuffet became fully charged by Nuclear Fusion!");
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Nuclear Fusion does not skip the charge turn of semi-invulnerable moves")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_NUCLEAR_FUSION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_DIG); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        MESSAGE("Nuclear Fusion charges Wobbuffet!");
        // Turn 2: Dig goes underground despite the charge.
        MESSAGE("Wobbuffet used Dig!");
        NOT MESSAGE("Wobbuffet became fully charged by Nuclear Fusion!");
        // Turn 3: Dig hits.
        MESSAGE("Wobbuffet used Dig!");
        HP_BAR(opponent);
    }
}
