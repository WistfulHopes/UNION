#pragma once
#include "CoreMinimal.h"
#include "LobbyOperationResult.h"
#include "MatchmakingContext_WithFlexMatch.h"
#include "CommonMatchmakingContext.generated.h"

UCLASS(Abstract, Blueprintable)
class UNION_API UCommonMatchmakingContext : public UMatchmakingContext_WithFlexMatch {
    GENERATED_BODY()
public:
    UCommonMatchmakingContext();

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteNotifyChangeMatchmakingStatus(bool bSuccessful, const FLobbyOperationResult& Result);
    
};

