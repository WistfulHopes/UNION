#include "GarageCameraMovementComponent.h"

UGarageCameraMovementComponent::UGarageCameraMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransformDataTable = NULL;
    this->ArmDataTable = NULL;
}

void UGarageCameraMovementComponent::SwitchRadius(bool bInImmediateReflection) {
}

void UGarageCameraMovementComponent::SetVerticalAngleRange(double InMin, double InMax) {
}

void UGarageCameraMovementComponent::SetTransformDataTable(UDataTable* InTransformDataTable) {
}

void UGarageCameraMovementComponent::SetTransformByTransformDataId(EGarageCameraMovementTransformDataId InId, bool bInImmediateReflection) {
}

void UGarageCameraMovementComponent::SetTransformByTransformData(const FGarageCameraMovementTransformData& InTransformData, bool bInImmediateReflection) {
}

void UGarageCameraMovementComponent::SetTransformByArmDataId(EGarageCameraMovementArmDataId InId, bool bInImmediateReflection) {
}

void UGarageCameraMovementComponent::SetTransformByArmData(const FGarageCameraMovementArmData& InArmData, bool bInImmediateReflection) {
}

void UGarageCameraMovementComponent::SetRadiusByIndex(int32 InRadiusIndex, bool bInImmediateReflection) {
}

void UGarageCameraMovementComponent::SetRadii(const TArray<double>& InRadii) {
}

void UGarageCameraMovementComponent::SetMovementTime(float InMovementTime) {
}

void UGarageCameraMovementComponent::SetMode(EGarageCameraMovementMode InMode) {
}

void UGarageCameraMovementComponent::SetArmDataTable(UDataTable* InArmDataTable) {
}

bool UGarageCameraMovementComponent::IsMoving() const {
    return false;
}

int32 UGarageCameraMovementComponent::GetRadiusIndex() const {
    return 0;
}

void UGarageCameraMovementComponent::AddToVerticalAngle(double InVal) {
}

void UGarageCameraMovementComponent::AddToHorizontalAngle(double InVal) {
}


