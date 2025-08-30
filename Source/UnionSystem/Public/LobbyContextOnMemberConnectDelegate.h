#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnMemberConnectDelegate.generated.h"

class ULobbyContextBase;
class ULobbyMemberContextBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FLobbyContextOnMemberConnect, ULobbyContextBase*, LobbyContext, ULobbyMemberContextBase*, MemberContext);

