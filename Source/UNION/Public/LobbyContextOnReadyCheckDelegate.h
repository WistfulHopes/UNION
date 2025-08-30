#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnReadyCheckDelegate.generated.h"

class UCommonLobbyContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyContextOnReadyCheck, UCommonLobbyContext*, LobbyContext);

