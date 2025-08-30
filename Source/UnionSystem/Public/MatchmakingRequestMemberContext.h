#pragma once
#include "CoreMinimal.h"
#include "LobbyMemberContextBase.h"
#include "MatchmakingRequestMemberContext.generated.h"

UCLASS(Abstract, Blueprintable)
class UNIONSYSTEM_API UMatchmakingRequestMemberContext : public ULobbyMemberContextBase {
    GENERATED_BODY()
public:
    UMatchmakingRequestMemberContext();

};

