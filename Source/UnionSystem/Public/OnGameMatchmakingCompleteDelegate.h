#pragma once
#include "CoreMinimal.h"
#include "CreateOrConnectLobbyResult.h"
#include "EGameMatchmakingCompleteStatus.h"
#include "OnGameMatchmakingCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGameMatchmakingComplete, EGameMatchmakingCompleteStatus, Status, const FCreateOrConnectLobbyResult&, Result);

