#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "UnionSkeletalMeshComponentBudgeted.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionSkeletalMeshComponentBudgeted : public USkeletalMeshComponentBudgeted {
    GENERATED_BODY()
public:
    UUnionSkeletalMeshComponentBudgeted(const FObjectInitializer& ObjectInitializer);

};

