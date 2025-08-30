#pragma once
#include "CoreMinimal.h"
#include "LobbyInitData.h"
#include "LobbyContextRecvInitLobbyDataDelegateDelegate.generated.h"

class UCommonLobbyContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLobbyContextRecvInitLobbyDataDelegate, UCommonLobbyContext*, LobbyContext, const FLobbyInitData&, Data);

