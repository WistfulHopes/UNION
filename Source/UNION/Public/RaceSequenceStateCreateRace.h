#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateCreateRace.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateCreateRace : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateCreateRace(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DebugPostCreateRace();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateRace();
    
};

