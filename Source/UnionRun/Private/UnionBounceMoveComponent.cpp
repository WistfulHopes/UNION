#include "UnionBounceMoveComponent.h"

UUnionBounceMoveComponent::UUnionBounceMoveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BounceHeight = 1000.00f;
    this->BounceTime = 1.00f;
    this->FallTimingRatio = 0.50f;
    this->BounceCurve = NULL;
}


