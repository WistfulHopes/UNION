#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SequenceTriggerComponent.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API USequenceTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequenceParameterLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* soundAsset_;
    
public:
    USequenceTriggerComponent(const FObjectInitializer& ObjectInitializer);

};

