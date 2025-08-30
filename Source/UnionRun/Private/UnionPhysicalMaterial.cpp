#include "UnionPhysicalMaterial.h"

UUnionPhysicalMaterial::UUnionPhysicalMaterial() {
    this->PhysicalSurfaceType = EUnionSurfaceType::None;
    this->CameraId = 0;
    this->ParameterId = 0;
}

bool UUnionPhysicalMaterial::IsYellowDrill() const {
    return false;
}

bool UUnionPhysicalMaterial::IsWall() const {
    return false;
}

bool UUnionPhysicalMaterial::IsSlowDownMedium() const {
    return false;
}

bool UUnionPhysicalMaterial::IsSlowDownLight() const {
    return false;
}

bool UUnionPhysicalMaterial::IsSlippy() const {
    return false;
}

bool UUnionPhysicalMaterial::IsSlide() const {
    return false;
}

bool UUnionPhysicalMaterial::IsRespot() const {
    return false;
}

bool UUnionPhysicalMaterial::IsPseudoPlane() const {
    return false;
}

bool UUnionPhysicalMaterial::IsNrrow() const {
    return false;
}

bool UUnionPhysicalMaterial::IsNoJump() const {
    return false;
}

bool UUnionPhysicalMaterial::IsMachineOnlyWall() const {
    return false;
}

bool UUnionPhysicalMaterial::IsItemOnly() const {
    return false;
}

bool UUnionPhysicalMaterial::IsIgnoreSticky() const {
    return false;
}

bool UUnionPhysicalMaterial::IsHitSlowdownMidium() const {
    return false;
}

bool UUnionPhysicalMaterial::IsHitSlowdownLight() const {
    return false;
}

bool UUnionPhysicalMaterial::IsHitLoseRing() const {
    return false;
}

bool UUnionPhysicalMaterial::IsHitBouncyMidium() const {
    return false;
}

bool UUnionPhysicalMaterial::IsGuidedJump() const {
    return false;
}

bool UUnionPhysicalMaterial::IsGrindDash() const {
    return false;
}

bool UUnionPhysicalMaterial::IsGravitySwitch() const {
    return false;
}

bool UUnionPhysicalMaterial::IsDash() const {
    return false;
}

bool UUnionPhysicalMaterial::IsCylindrical() const {
    return false;
}

bool UUnionPhysicalMaterial::IsCarDriveable() const {
    return false;
}

bool UUnionPhysicalMaterial::IsCameraChange() const {
    return false;
}

bool UUnionPhysicalMaterial::IsBumpyMedium() const {
    return false;
}

bool UUnionPhysicalMaterial::IsBumpyLight() const {
    return false;
}

bool UUnionPhysicalMaterial::IsBumpyHeavy() const {
    return false;
}

bool UUnionPhysicalMaterial::IsBouncy() const {
    return false;
}

bool UUnionPhysicalMaterial::IsAssistWallItemIgnoret() const {
    return false;
}

bool UUnionPhysicalMaterial::IsAssistWall() const {
    return false;
}

FUnionSurfaceFlag UUnionPhysicalMaterial::GetSurfaceFlag() const {
    return FUnionSurfaceFlag{};
}

EUnionSurfaceType UUnionPhysicalMaterial::GetPhysicalSurfaceType() const {
    return EUnionSurfaceType::None;
}


