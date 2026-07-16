#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(IsKickingMove(MOVE_MEGA_KICK));
    ASSUME(IsKickingMove(MOVE_DOUBLE_KICK));
    ASSUME(IsKickingMove(MOVE_LOW_KICK));
    ASSUME(IsKickingMove(MOVE_JUMP_KICK));
    ASSUME(IsKickingMove(MOVE_HIGH_JUMP_KICK));
    ASSUME(IsKickingMove(MOVE_ROLLING_KICK));
    ASSUME(IsKickingMove(MOVE_TRIPLE_KICK));
    ASSUME(IsKickingMove(MOVE_BLAZE_KICK));
    ASSUME(IsKickingMove(MOVE_TROP_KICK));
    ASSUME(IsKickingMove(MOVE_THUNDEROUS_KICK));
    ASSUME(IsKickingMove(MOVE_AXE_KICK));
    ASSUME(IsKickingMove(MOVE_LOW_SWEEP));
    ASSUME(IsKickingMove(MOVE_STOMP));
    ASSUME(IsKickingMove(MOVE_TRIPLE_AXEL));
    ASSUME(IsKickingMove(MOVE_STOMPING_TANTRUM));
    ASSUME(!IsKickingMove(MOVE_TACKLE));
}

SINGLE_BATTLE_TEST("Strong Legs boosts kicking moves by 30%", s16 damage)
{
    enum Ability ability;

    PARAMETRIZE { ability = ABILITY_BLAZE; }
    PARAMETRIZE { ability = ABILITY_STRONG_LEGS; }

    GIVEN {
        PLAYER(SPECIES_BLAZIKEN) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_MEGA_KICK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEGA_KICK, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, UQ_4_12(1.3), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Strong Legs does not boost non-kicking moves", s16 damage)
{
    enum Ability ability;

    PARAMETRIZE { ability = ABILITY_BLAZE; }
    PARAMETRIZE { ability = ABILITY_STRONG_LEGS; }

    GIVEN {
        PLAYER(SPECIES_BLAZIKEN) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Strong Legs boosts Stomping Tantrum", s16 damage)
{
    enum Ability ability;

    PARAMETRIZE { ability = ABILITY_BLAZE; }
    PARAMETRIZE { ability = ABILITY_STRONG_LEGS; }

    GIVEN {
        PLAYER(SPECIES_BLAZIKEN) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, UQ_4_12(1.3), results[1].damage);
    }
}
