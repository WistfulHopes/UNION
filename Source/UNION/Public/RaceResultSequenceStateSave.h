#pragma once
#include "CoreMinimal.h"
#include "ESaveDataStatus.h"
#include "RaceResultSequenceStateBase.h"
#include "RaceResultSequenceStateSave.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceResultSequenceStateSave : public URaceResultSequenceStateBase {
    GENERATED_BODY()
public:
    URaceResultSequenceStateSave(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayLogSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnAppSaveComplete(ESaveDataStatus Status);
    
};

