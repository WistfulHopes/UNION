#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnMemberUpdateDelegate.generated.h"

class ULobbyContextBase;
class ULobbyMemberContextBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FLobbyContextOnMemberUpdate, ULobbyContextBase*, LobbyContext, ULobbyMemberContextBase*, MemberContext);

