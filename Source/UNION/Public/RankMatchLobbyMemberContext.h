#pragma once
#include "CoreMinimal.h"
#include "CommonLobbyMemberContext.h"
#include "RankMatchLobbyMemberContext.generated.h"

UCLASS(Blueprintable)
class UNION_API URankMatchLobbyMemberContext : public UCommonLobbyMemberContext {
    GENERATED_BODY()
public:
    URankMatchLobbyMemberContext();

};

