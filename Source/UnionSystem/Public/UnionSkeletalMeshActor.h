#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "UnionSkeletalMeshActor.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API AUnionSkeletalMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    AUnionSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

};

