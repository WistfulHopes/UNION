#include "SimpleMachineAnimInstance.h"

USimpleMachineAnimInstance::USimpleMachineAnimInstance() {
    this->SpeedRate = 0.00f;
    this->SteeringLR = 0.00f;
    this->BodyG = 0.00f;
    this->BodyGd = 0.00f;
    this->BodyGr = 0.00f;
    this->HitFront = false;
    this->HitRear = false;
    this->HitLeft = false;
    this->HitRight = false;
    this->IsInAir = false;
    this->IsInDrift = false;
    this->IsEnableWheelPosUpdate = true;
    this->IsEnableWheelRotUpdate = true;
    this->Owner = NULL;
    this->UnionRacerStatusObject = NULL;
    this->MachineAnimDataAsset = NULL;
    this->MachineAnimParameterDataAsset = NULL;
}

void USimpleMachineAnimInstance::SetAnimSyncChild(TScriptInterface<IUnionRacerAnimSyncChild> Child) {
}

void USimpleMachineAnimInstance::SetAnimState(EMachineAnimState AnimState) {
}

void USimpleMachineAnimInstance::MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime) {
}

void USimpleMachineAnimInstance::MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate) {
}

void USimpleMachineAnimInstance::MontageJumpToSection(EMachineAnimationMontageAssetId AssetId, FName SectionName) {
}

float USimpleMachineAnimInstance::GetBoatSyncAnimTime() const {
    return 0.0f;
}

EMachineAnimState USimpleMachineAnimInstance::GetAnimState() const {
    return EMachineAnimState::Normal;
}


