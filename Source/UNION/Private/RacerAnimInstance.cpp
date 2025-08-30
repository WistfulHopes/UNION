#include "RacerAnimInstance.h"

URacerAnimInstance::URacerAnimInstance() {
}

EBoneScaleFaceType URacerAnimInstance::GetStateMachineScaleFace() const {
    return EBoneScaleFaceType::Normal;
}

EVehicleType URacerAnimInstance::GetRideableType() const {
    return EVehicleType::VehicleTypeCar;
}

ECarStatusType URacerAnimInstance::GetRideableStatusType() const {
    return ECarStatusType::CarStatusSpeed;
}

EVehicleDisplayMode URacerAnimInstance::GetRideableDisplayMode() const {
    return EVehicleDisplayMode::Nomal;
}

ERacerDriftState URacerAnimInstance::GetRacerStateDrift() const {
    return ERacerDriftState::None;
}

float URacerAnimInstance::GetParam(const ERacerAnimationParam ID) const {
    return 0.0f;
}

EBoneScaleFaceType URacerAnimInstance::GetMontagePlayingScaleFace() const {
    return EBoneScaleFaceType::Normal;
}

bool URacerAnimInstance::GetFlag(const ERacerAnimationFlag flag) const {
    return false;
}

float URacerAnimInstance::GetAnimationParam(const EDriverAnimationParam ID) const {
    return 0.0f;
}

bool URacerAnimInstance::GetAnimationFlag(const EDriverAnimationFlag flag) const {
    return false;
}


