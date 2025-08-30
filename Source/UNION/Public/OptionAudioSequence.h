#pragma once
#include "CoreMinimal.h"
#include "OptionSequenceBase.h"
#include "OptionAudioSequence.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UOptionAudioSequence : public UOptionSequenceBase {
    GENERATED_BODY()
public:
    UOptionAudioSequence(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnMoveEvent(uint8 kind, float Ratio);
    
    UFUNCTION(BlueprintCallable)
    void OnDecisionEvent(uint8 kind, float Ratio);
    
};

