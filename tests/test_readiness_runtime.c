/*-----------------------------------------------------------------------------
 * Umicom Games Module
 * File: tests/test_readiness_runtime.c
 *
 * PURPOSE:
 *   Verify readiness remains Framework-owned while the product exposes complete status evidence.
 *
 * AUTHOR AND ORGANISATION:
 * Sammy Hegab
 * Umicom Foundation
 *
 * LICENCE:
 * MIT
 *---------------------------------------------------------------------------*/


#include <assert.h>

#include "umicom/games/readiness.h"

/*
 * Start this command or application, report setup failures, and return a process exit code
 * to the operating system.
 */
int main(void)
{
    UmiApplicationReadinessReport report;
    assert(umi_games_readiness_report(&report) == UMI_STATUS_OK);
    assert(report.feature_count > 0U);
    assert(report.readiness_percent <= 100U);
    assert(report.planned_count + report.foundation_count +
           report.implemented_count + report.verified_count ==
           report.feature_count);
    assert(umi_games_readiness_next_feature() == report.next_feature);
    return 0;
}
