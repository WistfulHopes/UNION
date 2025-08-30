#include "CollisionBaseComponent.h"

UCollisionBaseComponent::UCollisionBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->AttachmentType = EAttachmentType::RootComponent;
    this->bIsKinematic = false;
    this->bIgnoreSelfCollision = false;
    this->bManualUpdate = false;
    this->bActorScale = false;
    this->BodyType = EStaticBodyShapeType::StaticBodySphere;
    this->LineThickness = 1.00f;
    this->DomainNumber = EDomainNumber::InvalidDomainNumber;
}

void UCollisionBaseComponent::UpdateCollisionShape() {
}

void UCollisionBaseComponent::SetOverrideTransform(const FTransform& trans) {
}

void UCollisionBaseComponent::SetLocalScalingUE(const FVector& Scale) {
}

void UCollisionBaseComponent::SetDomainNumber(EDomainNumber domain) {
}

void UCollisionBaseComponent::SetCollisionEnabled(bool bEnabled, bool bForceUpdate) {
}

bool UCollisionBaseComponent::IsCollisionEnabled() const {
    return false;
}

bool UCollisionBaseComponent::IsCollisionAvailable() const {
    return false;
}

FTransform UCollisionBaseComponent::GetTransform() const {
    return FTransform{};
}

FVector UCollisionBaseComponent::GetLocalScalingUE() const {
    return FVector{};
}


