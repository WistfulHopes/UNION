#include "HoldItemBlackBombComponent.h"

UHoldItemBlackBombComponent::UHoldItemBlackBombComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExpansionEffectCurve = NULL;
    this->ExpansionColor = NULL;
    this->TargetMaterial = NULL;
}

void UHoldItemBlackBombComponent::Update(float DeltaTime) {
}

void UHoldItemBlackBombComponent::Setup() {
}


