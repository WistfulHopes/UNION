#include "MachineGadgetActionComponent.h"

UMachineGadgetActionComponent::UMachineGadgetActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpinDriftStartCurve = NULL;
    this->SpinDriftEndCurve = NULL;
    this->SpinDriftEffectAsset = NULL;
    this->SpinMaxAnglePerSecond = 1440.00f;
    this->SpinDriftMaxAccelerationDuration = 1.00f;
    this->SpinDriftDecelerationDuration = 0.50f;
    this->SpinDriftNiagaraComponent = NULL;
}


