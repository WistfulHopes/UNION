#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnStartMatchmakingDelegate.generated.h"

class UCommonLobbyContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyContextOnStartMatchmaking, UCommonLobbyContext*, LobbyContext);

