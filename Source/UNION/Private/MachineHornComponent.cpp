#include "MachineHornComponent.h"

UMachineHornComponent::UMachineHornComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MachineHornNiagara = NULL;
    this->MachineHornSound = NULL;
    this->MachineHornToAttach = NULL;
    this->MachineNiagaraHornComponent = NULL;
    this->MachineHornEffectParam = 0;
    this->MenuInputReceiveObject = NULL;
}

void UMachineHornComponent::UnBindHornInput() {
}

void UMachineHornComponent::SetMachineHornSoundPan(ESoundPan InSoundPan) {
}

void UMachineHornComponent::SetHornEnable(bool bIsEnable) {
}

void UMachineHornComponent::SetHornData(EMachineHornType InHornType) {
}

void UMachineHornComponent::SetAttachOffsetFromCarType(ECarStatusType InCarType) {
}

void UMachineHornComponent::SetAttachOffset(FVector InOffsetLocation, FRotator InOffsetRot) {
}

void UMachineHornComponent::SetAttachHornToMachineData(USceneComponent* InHornToAttach, ECarStatusType InCarType) {
}

void UMachineHornComponent::PlayMachineHorn() {
}

void UMachineHornComponent::OnMenuInputPlayMachineHornObject(UObject* Object) {
}

void UMachineHornComponent::OnMenuInputPlayMachineHorn() {
}

bool UMachineHornComponent::IsEnableHorn() const {
    return false;
}

void UMachineHornComponent::BindHornInput() {
}


