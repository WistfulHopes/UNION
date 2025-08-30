#include "MachineEngineSoundComponent.h"

UMachineEngineSoundComponent::UMachineEngineSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SPDEngineVibCue = NULL;
    this->ACLEngineVibCue = NULL;
    this->POWEngineVibCue = NULL;
    this->HNDEngineVibCue = NULL;
    this->DSHEngineVibCue = NULL;
}


