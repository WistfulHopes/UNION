#include "CameraDebugMovementComponent.h"

UCameraDebugMovementComponent::UCameraDebugMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveSpeed = 0.00f;
    this->LookSpeed = 0.00f;
}

void UCameraDebugMovementComponent::Update(float InDeltaTime) {
}


