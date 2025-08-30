#pragma once
#include "CoreMinimal.h"
#include "LobbyContextRecvHornDelegateDelegate.generated.h"

class UCommonLobbyMemberContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyContextRecvHornDelegate, UCommonLobbyMemberContext*, MemberContext);

