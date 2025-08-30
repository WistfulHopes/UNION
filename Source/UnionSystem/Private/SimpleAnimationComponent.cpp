#include "SimpleAnimationComponent.h"

USimpleAnimationComponent::USimpleAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Animation = NULL;
    this->Target = NULL;
    this->PlayRate = 1.00f;
    this->PlayOffsetInFrame = 0.00f;
}


