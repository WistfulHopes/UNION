#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "SkeletalMeshActorBudgeted.generated.h"

UCLASS(Blueprintable)
class UNION_API ASkeletalMeshActorBudgeted : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    ASkeletalMeshActorBudgeted(const FObjectInitializer& ObjectInitializer);

};

