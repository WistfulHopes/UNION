#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameActivitySubsystemOnChangeActivityAvailabilityCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGameActivitySubsystemOnChangeActivityAvailabilityComplete, const FUniqueNetIdRepl&, PlatformUserId, bool, bSuccess);

