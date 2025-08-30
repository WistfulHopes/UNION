#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EGameModeId.h"
#include "GameActivitySubsystemOnStartActivityCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FGameActivitySubsystemOnStartActivityComplete, const FUniqueNetIdRepl&, PlatformUserId, EGameModeId, ActivityId, bool, bSuccess);

