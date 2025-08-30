#include "MachineEffectComponent.h"

UMachineEffectComponent::UMachineEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectDataTable = NULL;
    this->MeshEffectDataTable = NULL;
    this->CockpitComponentRef = NULL;
    this->FrontComponentRef = NULL;
    this->RearComponentRef = NULL;
    this->TPCameraComponentRef = NULL;
}

void UMachineEffectComponent::VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value) {
}

void UMachineEffectComponent::VehicleModelEventInt(const int32& EventId, const int32& Value) {
}

void UMachineEffectComponent::VehicleModelEventAttackedInfo(const int32& EventId, const FAttackedInfo& Value) {
}

void UMachineEffectComponent::SetEnableTransformEffect(bool NewEnable) {
}

bool UMachineEffectComponent::GetEnableTransformEffect() const {
    return false;
}


