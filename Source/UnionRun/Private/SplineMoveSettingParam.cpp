#include "SplineMoveSettingParam.h"

FSplineMoveSettingParam::FSplineMoveSettingParam() {
    this->SplineActor = NULL;
    this->Speed = 0.00f;
    this->LoopType = ESplineMoveLoopType::NoLoop;
    this->InitPositionRate = 0.00f;
    this->StartWaitTime = 0.00f;
    this->bUseLocalRotator = false;
    this->bUseLocalRotatorRoll = false;
    this->bUseLocalRotatorPitch = false;
    this->bUseLocalRotatorYaw = false;
    this->bReverseStart = false;
    this->bReverseMoveRot = false;
    this->MoveCurve = NULL;
    this->bIsCulling = false;
    this->bIsCullingUpdate = false;
    this->UpdateWaitTime = 0.00f;
    this->bIgnoreSplineRotator = false;
    this->bOptimizedMode = false;
}

