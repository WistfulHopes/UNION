#pragma once
#include "CoreMinimal.h"
#include "EPreRaceSeqErrorCode.h"
#include "PreRaceSequenceStateHostMigrateExitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreRaceSequenceStateHostMigrateExitDelegate, EPreRaceSeqErrorCode, ErrorCode);

