#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnLobbyDeleteDelegate.generated.h"

class ULobbyContextBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyContextOnLobbyDelete, ULobbyContextBase*, LobbyContext);

