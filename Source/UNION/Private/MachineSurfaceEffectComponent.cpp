#include "MachineSurfaceEffectComponent.h"

UMachineSurfaceEffectComponent::UMachineSurfaceEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceEffectDataAsset = NULL;
    this->NiagaraComponent = NULL;
}

void UMachineSurfaceEffectComponent::VehicleModelEventInt(const int32& EventId, const int32& Value) {
}


