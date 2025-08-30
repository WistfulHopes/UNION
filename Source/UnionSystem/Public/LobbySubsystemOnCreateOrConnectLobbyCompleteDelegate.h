#pragma once
#include "CoreMinimal.h"
#include "CreateOrConnectLobbyResult.h"
#include "LobbySubsystemOnCreateOrConnectLobbyCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FLobbySubsystemOnCreateOrConnectLobbyComplete, bool, bSuccessful, const FCreateOrConnectLobbyResult&, Result);

