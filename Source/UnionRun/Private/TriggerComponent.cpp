#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSurfaceSetting = false;
    this->EditSurfaceType = EUnionSurfaceType::None;
    this->bEnableCCD = false;
    this->CCDSphereRadius = -1.00f;
    this->CCDValidDistance = -1.00f;
}

void UTriggerComponent::SetSurfaceType(EUnionSurfaceType Type) {
}

void UTriggerComponent::SetSurfaceFlag(FUnionSurfaceFlag flag) {
}

void UTriggerComponent::OnCollisionHitResult(const FCollisionHitResultInfo& Info) {
}

void UTriggerComponent::OnCollisionBaseHit(const FCollisionHitInfo& Info) {
}


