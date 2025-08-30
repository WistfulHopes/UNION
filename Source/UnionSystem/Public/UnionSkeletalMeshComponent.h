#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "UnionSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UUnionSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibilityWithTickControl(bool bNewVisibility, bool bPropagateToChildren);
    
};

