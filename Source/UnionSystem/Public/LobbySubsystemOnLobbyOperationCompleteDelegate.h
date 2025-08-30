#pragma once
#include "CoreMinimal.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FLobbySubsystemOnLobbyOperationComplete, bool, bSuccessful, const FLobbyOperationResult&, Result);

