#include "MachineAuraEffectComponent.h"

UMachineAuraEffectComponent::UMachineAuraEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AuraEffectComponent = NULL;
}

void UMachineAuraEffectComponent::StopEffect() {
}

void UMachineAuraEffectComponent::StartEffect() {
}

void UMachineAuraEffectComponent::CreateAuraMachine(USceneComponent* InMachineComponent, EMachineAuraId InAuraID, ECarStatusType InCarStatusType) {
}

void UMachineAuraEffectComponent::CreateAuraHoverboard(USceneComponent* InDriverComponent, EMachineAuraId InAuraID, ECarStatusType InCarStatusType) {
}


