#include "MachineSoundComponent.h"

UMachineSoundComponent::UMachineSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceSoundDataTable = NULL;
}

void UMachineSoundComponent::VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value) {
}

void UMachineSoundComponent::VehicleModelEventItemId(const int32& EventId, const EItemId& Value, const int32& IntValue, const EItemThrowDirection& ThrowType, const bool bGadgetLuckyItem) {
}

void UMachineSoundComponent::VehicleModelEventInt(const int32& EventId, const int32& Value) {
}

void UMachineSoundComponent::VehicleModelEventAttackedInfo(const int32& EventId, const FAttackedInfo& Value) {
}


