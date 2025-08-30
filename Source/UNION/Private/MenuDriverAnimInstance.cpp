#include "MenuDriverAnimInstance.h"

UMenuDriverAnimInstance::UMenuDriverAnimInstance() {
    this->DriverId = EDriverId::Num;
    this->bMeshVisibilityFromAnimationCurve = false;
}

void UMenuDriverAnimInstance::SetAnimSyncTimeById(const ERacerAnimSyncId ID, float Time) {
}

void UMenuDriverAnimInstance::PreloadMenuAllAssets() {
}

UAnimMontage* UMenuDriverAnimInstance::GetMontageAssetById(const EDriverAnimationAssetId AssetId) const {
    return NULL;
}

UBlendSpace* UMenuDriverAnimInstance::GetBlendSpaceAssetById(const EDriverBlendSpaceAssetId AssetId) const {
    return NULL;
}

float UMenuDriverAnimInstance::GetAnimSyncTimeById(const ERacerAnimSyncId ID) const {
    return 0.0f;
}

UAnimSequence* UMenuDriverAnimInstance::GetAnimationAssetById(const EDriverAnimationAssetId AssetId) const {
    return NULL;
}


