#include "MachineAnimInstance.h"

UMachineAnimInstance::UMachineAnimInstance() {
    this->SpeedRate = 0.00f;
    this->SteeringLR = 0.00f;
    this->HitFront = false;
    this->HitRear = false;
    this->HitLeft = false;
    this->HitRight = false;
    this->IsInAir = false;
    this->IsInDrift = false;
    this->IsFloating = false;
    this->ScrewRotationValue = 0.00f;
    this->ScrewRotationRate = 10.00f;
    this->Yaw = 0.00f;
    this->Pitch = 0.00f;
    this->Brake = 0.00f;
    this->IsEnableWheelPosUpdate = true;
    this->IsEnableWheelRotUpdate = true;
    this->VehicleInRacePawn = NULL;
    this->MachineActor = NULL;
    this->MachineAnimDataAsset = NULL;
    this->MachineAnimParameterDataAsset = NULL;
}

void UMachineAnimInstance::VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value) {
}

void UMachineAnimInstance::VehicleModelEventInt(const int32& EventId, const int32& Value) {
}

void UMachineAnimInstance::SetAnimSyncChild(TScriptInterface<IUnionRacerAnimSyncChild> Child) {
}

void UMachineAnimInstance::SetAnimState(EMachineAnimState AnimState) {
}

void UMachineAnimInstance::MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime) {
}

void UMachineAnimInstance::MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate) {
}

void UMachineAnimInstance::MontageJumpToSection(EMachineAnimationMontageAssetId AssetId, FName SectionName) {
}

bool UMachineAnimInstance::IsUpdateState() const {
    return false;
}

float UMachineAnimInstance::GetBoatSyncAnimTime() const {
    return 0.0f;
}

EMachineAnimState UMachineAnimInstance::GetAnimState() const {
    return EMachineAnimState::Normal;
}

void UMachineAnimInstance::ChangeRaceState(ERaceInfoStateType InNewState) {
}


