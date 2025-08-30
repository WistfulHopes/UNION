#pragma once
#include "CoreMinimal.h"
#include "ELobbySequenceState.h"
#include "LobbyContextOnRecvNextLobbySequenceStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyContextOnRecvNextLobbySequenceStateDelegate, ELobbySequenceState, NextState);

