#pragma once
#include "CoreMinimal.h"
#include "CommonLobbyMemberContext.h"
#include "ESquadMemberContextReadyCheckType.h"
#include "SquadMemberContext.generated.h"

UCLASS(Blueprintable)
class UNION_API USquadMemberContext : public UCommonLobbyMemberContext {
    GENERATED_BODY()
public:
    USquadMemberContext();

    UFUNCTION(BlueprintCallable)
    void SetReadyMatching(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetReadyCheckEnum(ESquadMemberContextReadyCheckType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetReadyCheck(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetReadyMatching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReadyCheckEnum(ESquadMemberContextReadyCheckType& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReadyCheck() const;
    
};

