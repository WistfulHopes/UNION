#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnGoToRaceDelegate.generated.h"

class UCommonLobbyContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyContextOnGoToRace, UCommonLobbyContext*, LobbyContext);

