#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnLobbyUpdateDelegate.generated.h"

class ULobbyContextBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyContextOnLobbyUpdate, ULobbyContextBase*, LobbyContext);

