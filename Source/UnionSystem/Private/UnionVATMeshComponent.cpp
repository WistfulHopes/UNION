#include "UnionVATMeshComponent.h"

UUnionVATMeshComponent::UUnionVATMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->VisibilityBasedVatUpdateOption = EVisibilityBasedVatUpdateOption::AlwaysUpdate;
    this->PlayMode = EUnionVATPlayMode::MaterialDriven;
    this->MaterialIndice0 = 0;
    this->MaterialIndice1 = -1;
    this->MaterialIndice2 = -1;
    this->MaterialIndice3 = -1;
}

void UUnionVATMeshComponent::UpdateFrame() {
}

void UUnionVATMeshComponent::UpdateDeltaTime(float DeltaTime) {
}

void UUnionVATMeshComponent::SetPlayMode(EUnionVATPlayMode NewPlayMode, bool ResetState) {
}

void UUnionVATMeshComponent::SetFrame(int32 Frame) {
}

void UUnionVATMeshComponent::ResetPlaybackState() {
}

void UUnionVATMeshComponent::Rebuild(bool ResetState) {
}

int32 UUnionVATMeshComponent::GetFrame() const {
    return 0;
}


