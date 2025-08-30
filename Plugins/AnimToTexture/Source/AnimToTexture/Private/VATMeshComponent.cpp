#include "VATMeshComponent.h"

UVATMeshComponent::UVATMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimToTextureDataAsset = NULL;
    this->AnimationIndex = 0;
    this->TimeStartOffset = 0.00f;
    this->TimeStartRange = 0.00f;
    this->RandomTimeStartOffset = false;
}

void UVATMeshComponent::SetAnimation(int32 Index, float InTimeStartOffset) {
}

void UVATMeshComponent::Reset() {
}

int32 UVATMeshComponent::GetNumAnimations() const {
    return 0;
}

FAnimToTextureMiniAnimState UVATMeshComponent::GetAnimation(int32 Index) const {
    return FAnimToTextureMiniAnimState{};
}


