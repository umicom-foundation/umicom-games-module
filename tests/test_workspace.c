/*-----------------------------------------------------------------------------
 * Umicom Games Module
 * File: tests/test_workspace.c
 *
 * PURPOSE:
 *   Verify the module exposes Framework-owned layouts without duplicating workbench logic.
 *
 * AUTHOR AND ORGANISATION:
 * Sammy Hegab
 * Umicom Foundation
 *
 * LICENCE:
 * MIT
 *---------------------------------------------------------------------------*/

#include <assert.h>

#include "umicom/games/workspace.h"

int main(void)
{
    const UmiExperienceLayoutDefinition *layout =
        umi_games_workspace_default();
    assert(umi_games_workspace_layout_count() > 0U);
    assert(layout != NULL);
    assert(layout->panel_count > 0U);
    assert(umi_games_workspace_layout_at(0U) != NULL);
    return 0;
}
