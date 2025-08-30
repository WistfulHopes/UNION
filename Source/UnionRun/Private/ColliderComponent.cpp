#include "ColliderComponent.h"

UColliderComponent::UColliderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSurfaceSetting = false;
    this->EditSurfaceType = EUnionSurfaceType::None;
}

void UColliderComponent::SetSurfaceType(EUnionSurfaceType Type) {
}

void UColliderComponent::SetSurfaceFlag(FUnionSurfaceFlag flag) {
}

void UColliderComponent::SetScaleEnabled(bool Enable) {
}

void UColliderComponent::SetOverrideTransform(FTransform trans) {
}

void UColliderComponent::SetObjectCollisionEnabled(bool Enable) {
}

void UColliderComponent::SetCollisionProcessEnabled(bool Enable) {
}

void UColliderComponent::SetCheckScaleEnabled(bool Enable) {
}

bool UColliderComponent::GetScaleEnabled() const {
    return false;
}

FTransform UColliderComponent::GetOverrideTransform() const {
    return FTransform{};
}

bool UColliderComponent::GetObjectCollisionEnabled() const {
    return false;
}

FTransform UColliderComponent::GetFinalTransform() const {
    return FTransform{};
}

bool UColliderComponent::GetCollisionProcessEnabled() const {
    return false;
}


