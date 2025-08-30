#pragma once
#include "CoreMinimal.h"
#include "LobbyContextRecvDecidedRaceStageSettingsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLobbyContextRecvDecidedRaceStageSettings, int32, DecidedCourseId, int32, DecidedPlayerOnlineIndex);

