#pragma once
#include "CoreMinimal.h"
#include "MatchmakingRequestContext.h"
#include "MatchmakingContext_WithFlexMatch.generated.h"

UCLASS(Abstract, Blueprintable)
class UNIONSYSTEM_API UMatchmakingContext_WithFlexMatch : public UMatchmakingRequestContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMatchmakingDescribeTimeSpan;
    
public:
    UMatchmakingContext_WithFlexMatch();

    UFUNCTION(BlueprintCallable)
    void InitializeFlexMatch(int32 LocalUserNum);
    
};

