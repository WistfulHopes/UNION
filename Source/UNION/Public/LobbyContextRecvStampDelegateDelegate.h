#pragma once
#include "CoreMinimal.h"
#include "LobbyContextRecvStampDelegateDelegate.generated.h"

class UCommonLobbyMemberContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLobbyContextRecvStampDelegate, UCommonLobbyMemberContext*, SendUser, int32, StampId);

