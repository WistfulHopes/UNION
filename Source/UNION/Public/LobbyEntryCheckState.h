#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "LobbyEntryCheckState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbyEntryCheckState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    ULobbyEntryCheckState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOnlyCheckRomVersion(bool bInEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRomVersionComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryServerTimeComplete(FDateTime UtcTimestamp, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckFairPointComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
};

