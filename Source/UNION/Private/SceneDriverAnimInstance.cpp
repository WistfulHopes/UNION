#include "SceneDriverAnimInstance.h"

USceneDriverAnimInstance::USceneDriverAnimInstance() {
    this->DriverId = EDriverId::Num;
    this->DriverPose = EDriverPose::Num;
    this->LipSyncBlendInTime = 0.25f;
    this->LipSyncBlendOutTime = 0.25f;
    this->LipSyncAnimAssets[0] = NULL;
    this->LipSyncAnimAssets[1] = NULL;
    this->LipSyncAnimAssets[2] = NULL;
    this->AnimSequenceAssets[0] = NULL;
    this->AnimSequenceAssets[1] = NULL;
    this->AnimSequenceAssets[2] = NULL;
    this->AnimSequenceAssets[3] = NULL;
    this->AnimSequenceAssets[4] = NULL;
    this->AnimSequenceAssets[5] = NULL;
    this->AnimSequenceAssets[6] = NULL;
    this->AnimSequenceAssets[7] = NULL;
    this->AnimSequenceAssets[8] = NULL;
    this->AnimSequenceAssets[9] = NULL;
    this->AnimSequenceAssets[10] = NULL;
    this->AnimSequenceAssets[11] = NULL;
    this->AnimSequenceAssets[12] = NULL;
    this->AnimSequenceAssets[13] = NULL;
    this->AnimSequenceAssets[14] = NULL;
    this->AnimSequenceAssets[15] = NULL;
    this->AnimSequenceAssets[16] = NULL;
    this->AnimSequenceAssets[17] = NULL;
    this->AnimSequenceAssets[18] = NULL;
    this->AnimSequenceAssets[19] = NULL;
    this->AnimSequenceAssets[20] = NULL;
    this->AnimSequenceAssets[21] = NULL;
    this->AnimSequenceAssets[22] = NULL;
    this->OwnerMeshComponent = NULL;
    this->CustomAttrAnimComponent = NULL;
}

void USceneDriverAnimInstance::ReloadAllAsset() {
}

void USceneDriverAnimInstance::PlayLipSyncMotion(UAnimSequence* LipSyncAnimAsset) {
}

void USceneDriverAnimInstance::PlayLipSyncById(ESceneDriverLipSyncId ID) {
}

void USceneDriverAnimInstance::PlayAnimSequence(UAnimSequenceBase* AnimSequence, const float Position) {
}

void USceneDriverAnimInstance::PlayAnimMontageById(ESceneDriverAnimationId ID) {
}

void USceneDriverAnimInstance::PlayAnimMontage(UAnimMontage* AnimMontage, const float Position) {
}

EDriverPose USceneDriverAnimInstance::GetDriverPose() const {
    return EDriverPose::Car;
}

bool USceneDriverAnimInstance::GetAnimationFlag(ESceneDriverAnimationFlag flag) const {
    return false;
}

UAnimSequence* USceneDriverAnimInstance::GetAnimationAsset(const ESceneDriverAnimationId AssetId) const {
    return NULL;
}


