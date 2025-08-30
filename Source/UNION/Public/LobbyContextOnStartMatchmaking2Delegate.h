#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnStartMatchmaking2Delegate.generated.h"

class UCommonLobbyContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyContextOnStartMatchmaking2, UCommonLobbyContext*, LobbyContext);

