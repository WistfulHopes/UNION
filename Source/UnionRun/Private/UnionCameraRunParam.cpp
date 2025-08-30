#include "UnionCameraRunParam.h"

UUnionCameraRunParam::UUnionCameraRunParam() {
    this->FOVOutSeconds = 0.50f;
    this->ElevationInterpSeconds = 1.00f;
    this->DistanceInterpSeconds = 1.00f;
    this->FOVInterpSeconds = 1.00f;
    this->TargetForwardInterpSeconds = 1.00f;
    this->TargetHeightInterpSeconds = 1.00f;
    this->FOVDelta = 30.00f;
    this->TargetYDelta = 2.00f;
    this->TargetZDelta = 2.00f;
    this->ItemAxisBlendDiffDegree = 1.00f;
    this->ItemAxisBlendSeconds = 1.00f;
    this->DistanceOffset4P = 1.00f;
}


