#include "UnionYellowDrillMeshContainer.h"

UUnionYellowDrillMeshContainer::UUnionYellowDrillMeshContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoopEffect = NULL;
    this->NomalOnGroundEffect = NULL;
    this->WaterOnGroundEffect = NULL;
    this->TransEffect = NULL;
    this->ReturnEffect = NULL;
    this->DrillLoopSound = NULL;
    this->MachineActor = NULL;
    this->CurrentBodySurfaceType = EUnionSurfaceType::None;
}

void UUnionYellowDrillMeshContainer::VehicleModelEventInt(const int32& EventId, const int32& Value) {
}

void UUnionYellowDrillMeshContainer::VehicleModelEventFloat(const int32& EventId, const float& Value) {
}

void UUnionYellowDrillMeshContainer::OnEndNiagaraSystem(UNiagaraComponent* EndSystem) {
}


