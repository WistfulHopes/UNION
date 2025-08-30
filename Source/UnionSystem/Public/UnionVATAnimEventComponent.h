#pragma once
#include "CoreMinimal.h"
#include "UnionVATAnimEventSequence.h"
#include "UnionVATMeshComponent.h"
#include "UnionVATSequenceInfo.h"
#include "UnionVATAnimEventComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionVATAnimEventComponent : public UUnionVATMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionVATAnimEventSequence> AnimEventSequences;
    
    UUnionVATAnimEventComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnVATSequence(UUnionVATMeshComponent* VATMeshComponent, const FUnionVATSequenceInfo& SequenceInfo);
    
};

