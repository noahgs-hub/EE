@##################################################################
@ Flash
@##################################################################

@ This is the new entry point script for using Flash
EventScript_TryUseFlash::
    lockall
    checkfieldmove FIELD_MOVE_FLASH
    goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantUseFlash

    @ --- Checks passed, execute the effect immediately ---
    @ Level 0 fully reveals the cave (no light circle) instead of a radius.
    animateflash 0
    setflashlevel 0
    releaseall
    end

EventScript_CantUseFlash::
    msgbox Text_CantUseFlash, MSGBOX_DEFAULT
    releaseall
    end

@ no longer used:
EventScript_UseFlash::
    animateflash 0
    setflashlevel 0
    releaseall
    end

@ --- New Text String ---
Text_CantUseFlash:
    .string "This won't have any effect.$"
