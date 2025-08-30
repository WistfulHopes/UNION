#pragma once
#include "CoreMinimal.h"
#include "LobbyContextBase.h"
#include "MatchmakingRequestContext.generated.h"

UCLASS(Abstract, Blueprintable)
class UNIONSYSTEM_API UMatchmakingRequestContext : public ULobbyContextBase {
    GENERATED_BODY()
public:
    UMatchmakingRequestContext();

    UFUNCTION(BlueprintCallable)
    void SetNoTriggerMatchmakingComplete(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeries() const;
    
};

