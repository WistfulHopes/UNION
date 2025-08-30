#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnMemberDisconnectDelegate.generated.h"

class ULobbyContextBase;
class ULobbyMemberContextBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FLobbyContextOnMemberDisconnect, ULobbyContextBase*, LobbyContext, ULobbyMemberContextBase*, MemberContext, bool, bWasKicked);

