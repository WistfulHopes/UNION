#include "SimpleMoveComponent.h"

USimpleMoveComponent::USimpleMoveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveTime = 0.00f;
    this->MoveType = ESimpleMoveLoopType::Return;
    this->MoveCurve = NULL;
    this->RotTime = 0.00f;
    this->RotType = ESimpleMoveLoopType::Return;
    this->RotCurve = NULL;
}


