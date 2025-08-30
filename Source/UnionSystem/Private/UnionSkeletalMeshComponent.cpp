#include "UnionSkeletalMeshComponent.h"
#include "Components/SkinnedMeshComponent.h"

UUnionSkeletalMeshComponent::UUnionSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
    this->bUpdateOverlapsOnAnimationFinalize = false;
}

void UUnionSkeletalMeshComponent::SetVisibilityWithTickControl(bool bNewVisibility, bool bPropagateToChildren) {
}


