#pragma once
#include "CoreMinimal.h"
#include "EPreRaceSeqErrorCode.h"
#include "PreRaceSeqCheckLobbyMemberExitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreRaceSeqCheckLobbyMemberExitDelegate, EPreRaceSeqErrorCode, ErrorCode);

