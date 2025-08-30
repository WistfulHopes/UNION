#pragma once
#include "CoreMinimal.h"
#include "LobbyId.h"
#include "SquadContextOnReceiveJoinRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSquadContextOnReceiveJoinRequest, FLobbyId, TargetLobbyId);

