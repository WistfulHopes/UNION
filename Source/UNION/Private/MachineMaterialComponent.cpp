#include "MachineMaterialComponent.h"

UMachineMaterialComponent::UMachineMaterialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialAnimationDataTable = NULL;
    this->FreshlyPaintColor = NULL;
    this->MaterialPlayerComponent = NULL;
}

void UMachineMaterialComponent::VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value) {
}


