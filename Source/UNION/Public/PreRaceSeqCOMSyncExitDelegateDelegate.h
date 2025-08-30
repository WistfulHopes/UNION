#pragma once
#include "CoreMinimal.h"
#include "EPreRaceSeqErrorCode.h"
#include "PreRaceSeqCOMSyncExitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreRaceSeqCOMSyncExitDelegate, EPreRaceSeqErrorCode, ErrorCode);

