#include "GimmickStaticBodyComponent.h"

UGimmickStaticBodyComponent::UGimmickStaticBodyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreItemInvincibleWall = false;
    this->bIgnoreAggressiveInvincibleWall = false;
    this->bIgnoreDefensiveInvincibleWall = false;
    this->bIgnoreAutopilotItemEndInvincibleWall = false;
    this->bUseSurfaceSetting = true;
    this->EditSurfaceType = EUnionSurfaceType::None;
    this->CameraId = 0;
    this->ParamId = 0;
    this->EffectType = EUnionRacePostProcessEffectType::None;
    this->ResultCameraType = EResultCameraProductionType::DEFAULT;
}

void UGimmickStaticBodyComponent::SetSurfaceType(EUnionSurfaceType Type) {
}

void UGimmickStaticBodyComponent::SetSurfaceFlag(FUnionSurfaceFlag flag) {
}

void UGimmickStaticBodyComponent::SetResultCameraType(EResultCameraProductionType Type) {
}

void UGimmickStaticBodyComponent::SetPostProcessEffectType(EUnionRacePostProcessEffectType Type) {
}

void UGimmickStaticBodyComponent::SetParamId(int32 ID) {
}

void UGimmickStaticBodyComponent::SetIgnoreItemInvincibleWall(bool flag) {
}

void UGimmickStaticBodyComponent::SetCameraId(int32 ID) {
}


