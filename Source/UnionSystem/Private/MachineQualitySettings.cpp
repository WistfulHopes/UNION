#include "MachineQualitySettings.h"

FMachineQualitySettings::FMachineQualitySettings() {
    this->MeshType = EVehicleMeshType::Default;
    this->MeshMinLOD = 0;
    this->EngineSoundType = EVehicleEngineSoundType::Default;
    this->EffectLODLevel = 0;
    this->SurfaceEffectLODLevel = 0;
    this->bSpawnDriverActor = false;
    this->bSpawnBodycutActor = false;
    this->bVisibleTireMark = false;
    this->bUseWheelDomainPosition = false;
    this->bUseWheelDomainRotation = false;
    this->bEnableSurfaceSound = false;
}

