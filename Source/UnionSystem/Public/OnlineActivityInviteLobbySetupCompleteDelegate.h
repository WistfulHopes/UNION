#pragma once
#include "CoreMinimal.h"
#include "OnlineActivityInviteLobbySetupCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnlineActivityInviteLobbySetupComplete, bool, bSuccess);

