#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

u32 ScriptGiveMon(enum Species species, u8 level, enum Item item);
u8 ScriptGiveEgg(enum Species species);
void CreateScriptedWildMon(enum Species species, u8 level, enum Item item);
void CreateScriptedDoubleWildMon(enum Species species, u8 level, enum Item item, enum Species species2, u8 level2, enum Item item2);
void ScriptSetMonMoveSlot(u8 monIndex, enum Move move, u8 slot);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void Script_GetChosenMonOffensiveEVs(void);
void Script_GetChosenMonDefensiveEVs(void);
void Script_GetChosenMonOffensiveIVs(void);
void Script_GetChosenMonDefensiveIVs(void);
u32 BirchCase_GiveMonParameterized(u16 species, u8 level, u16 item, u8 ball, u8 nature, u8 abilityNum, u8 gender, u8 *evs, u8 *ivs, u16 *moves, bool8 ggMaxFactor, u8 teraType, bool8 isShinyExpansion);

#endif // GUARD_SCRIPT_POKEMON_UTIL_H
