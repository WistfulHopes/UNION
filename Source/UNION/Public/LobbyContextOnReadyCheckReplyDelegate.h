#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnReadyCheckReplyDelegate.generated.h"

class UCommonLobbyContext;
class UCommonLobbyMemberContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLobbyContextOnReadyCheckReply, UCommonLobbyContext*, LobbyContext, UCommonLobbyMemberContext*, MemberContext);

