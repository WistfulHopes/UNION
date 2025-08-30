#pragma once
#include "CoreMinimal.h"
#include "ESaveDataStatus.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateSave.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateSave : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateSave(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnReplaySaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayLogSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnAppSaveComplete(ESaveDataStatus Status);
    
};

