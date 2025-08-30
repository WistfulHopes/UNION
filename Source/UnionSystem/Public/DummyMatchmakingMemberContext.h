#pragma once
#include "CoreMinimal.h"
#include "MatchmakingRequestMemberContext.h"
#include "DummyMatchmakingMemberContext.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UDummyMatchmakingMemberContext : public UMatchmakingRequestMemberContext {
    GENERATED_BODY()
public:
    UDummyMatchmakingMemberContext();

};

