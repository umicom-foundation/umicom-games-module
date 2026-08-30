/*-----------------------------------------------------------------------------
 * Umicom Games Module
 * File: include/umicom/games/runtime.h
 *
 * PURPOSE:
 *   Bind the thin product to the Framework-owned application workspace runtime without duplicating services.
 *
 * AUTHOR AND ORGANISATION:
 * Sammy Hegab
 * Umicom Foundation
 *
 * LICENCE:
 * MIT
 *---------------------------------------------------------------------------*/

#ifndef UMICOM_GAMES_RUNTIME_H
#define UMICOM_GAMES_RUNTIME_H

#include "umicom/application/runtime/runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

UmiStatus umi_games_runtime_init(
    UmiApplicationWorkspaceRuntime *out_runtime);
UmiStatus umi_games_runtime_health(
    UmiApplicationCapabilityProbe probe,
    void *user_data,
    UmiApplicationRuntimeHealth *out_health);
const UmiApplicationExperienceDefinition *umi_games_runtime_experience(void);

#ifdef __cplusplus
}
#endif

#endif
