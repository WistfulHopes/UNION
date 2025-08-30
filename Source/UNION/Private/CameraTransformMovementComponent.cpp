#include "CameraTransformMovementComponent.h"

UCameraTransformMovementComponent::UCameraTransformMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinZoomOffsetMultiplier = 0.00f;
    this->MaxZoomOffsetMultiplier = 0.00f;
    this->AutoMovementTime = 0.00f;
    this->AutoMovementEasingFunc = EEasingFunc::Linear;
}

void UCameraTransformMovementComponent::Update(float InDeltaTime) {
}

void UCameraTransformMovementComponent::StopAutoMovement() {
}

void UCameraTransformMovementComponent::StartAutoMovementByIndex(int32 InMovementDataIndex) {
}

void UCameraTransformMovementComponent::SetMovementDataByIndex(int32 InMovementDataIndex) {
}

void UCameraTransformMovementComponent::SetMovementData(const FCameraTransformMovementData& InMovementData) {
}

FCameraTransformMovementData UCameraTransformMovementComponent::GetMovementData() const {
    return FCameraTransformMovementData{};
}

bool UCameraTransformMovementComponent::GetIsAutoMoving() const {
    return false;
}


