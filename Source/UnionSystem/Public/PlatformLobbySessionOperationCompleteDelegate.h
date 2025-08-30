#pragma once
#include "CoreMinimal.h"
#include "PlatformLobbySessionOperationCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPlatformLobbySessionOperationComplete, bool, bSuccess);

