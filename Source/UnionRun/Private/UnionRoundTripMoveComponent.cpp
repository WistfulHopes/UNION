#include "UnionRoundTripMoveComponent.h"

UUnionRoundTripMoveComponent::UUnionRoundTripMoveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TemplateID = -1;
    this->bValidMovement_ = false;
    this->bSnapStartLocationAtStart_ = true;
    this->bUseLRRayCast_ = false;
    this->racCastHeight_ = 300.00f;
    this->racCastLength_ = 58000.00f;
    this->racCastInnerOffset_ = 400.00f;
    this->startDelay_ = 0.00f;
    this->startOffsetBySeconds_ = 0.00f;
}


