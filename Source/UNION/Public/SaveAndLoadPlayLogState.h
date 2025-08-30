#pragma once
#include "CoreMinimal.h"
#include "ESaveDataStatus.h"
#include "MenuSequenceStateBase.h"
#include "SaveAndLoadPlayLogState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API USaveAndLoadPlayLogState : public UMenuSequenceStateBase {
    GENERATED_BODY()
public:
    USaveAndLoadPlayLogState(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayLogSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayLogLoadComplete(ESaveDataStatus Status);
    
};

