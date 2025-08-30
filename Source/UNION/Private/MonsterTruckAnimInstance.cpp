#include "MonsterTruckAnimInstance.h"

UMonsterTruckAnimInstance::UMonsterTruckAnimInstance() {
    this->SpeedRate = 0.00f;
    this->SteeringLR = 0.00f;
    this->BodyG = 0.00f;
    this->BodyGd = 0.00f;
    this->BodyGr = 0.00f;
    this->IsInAir = false;
    this->IsInDrift = false;
    this->IsEnableWheelPosUpdate = true;
    this->IsEnableWheelRotUpdate = true;
    this->Owner = NULL;
    this->UnionRacerStatusObject = NULL;
    this->MachineAnimDataAsset = NULL;
}

void UMonsterTruckAnimInstance::SetAnimSyncChild(TScriptInterface<IUnionRacerAnimSyncChild> Child) {
}

void UMonsterTruckAnimInstance::MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime) {
}

void UMonsterTruckAnimInstance::MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate) {
}

void UMonsterTruckAnimInstance::MontageJumpToSection(EMachineAnimationMontageAssetId AssetId, FName SectionName) {
}


