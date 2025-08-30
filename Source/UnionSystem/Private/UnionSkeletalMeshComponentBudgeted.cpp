#include "UnionSkeletalMeshComponentBudgeted.h"
#include "Components/SkinnedMeshComponent.h"

UUnionSkeletalMeshComponentBudgeted::UUnionSkeletalMeshComponentBudgeted(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
    this->bUpdateOverlapsOnAnimationFinalize = false;
}


