#pragma once
#include "CoreMinimal.h"
#include "LobbyContextRecvLikeDelegateDelegate.generated.h"

class UCommonLobbyMemberContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLobbyContextRecvLikeDelegate, UCommonLobbyMemberContext*, SendUser, UCommonLobbyMemberContext*, RecvUser);

