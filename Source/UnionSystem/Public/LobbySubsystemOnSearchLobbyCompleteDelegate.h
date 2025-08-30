#pragma once
#include "CoreMinimal.h"
#include "SearchLobbyResult.h"
#include "LobbySubsystemOnSearchLobbyCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FLobbySubsystemOnSearchLobbyComplete, bool, bSuccessful, const FSearchLobbyResult&, Result);

