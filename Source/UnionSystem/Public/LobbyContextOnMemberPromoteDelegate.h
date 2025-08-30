#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnMemberPromoteDelegate.generated.h"

class ULobbyContextBase;
class ULobbyMemberContextBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FLobbyContextOnMemberPromote, ULobbyContextBase*, LobbyContext, ULobbyMemberContextBase*, MemberContext);

