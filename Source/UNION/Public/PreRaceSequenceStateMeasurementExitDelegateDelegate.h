#pragma once
#include "CoreMinimal.h"
#include "EPreRaceSeqErrorCode.h"
#include "PreRaceSequenceStateMeasurementExitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreRaceSequenceStateMeasurementExitDelegate, EPreRaceSeqErrorCode, ErrorCode);

