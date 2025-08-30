#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EGameActivityOutcomeType.h"
#include "EGameModeId.h"
#include "GameActivitySubsystemOnEndActivityCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FGameActivitySubsystemOnEndActivityComplete, const FUniqueNetIdRepl&, PlatformUserId, EGameModeId, ActivityId, EGameActivityOutcomeType, Outcome, bool, bSuccess);

