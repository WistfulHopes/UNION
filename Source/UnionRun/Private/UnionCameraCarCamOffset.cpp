#include "UnionCameraCarCamOffset.h"

AUnionCameraCarCamOffset::AUnionCameraCarCamOffset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSpecialCameraOffset = false;
    this->bApplySpecialCameraOffsetToTarget = false;
    this->SpecialCameraOffsetLerpTime = 0.20f;
}


