#include "UnionPlaneRunParam.h"

UUnionPlaneRunParam::UUnionPlaneRunParam() {
    this->CommonCameraUpBlendRate = 0.50f;
    this->BoostCameraDeltaDistance = 4.00f;
    this->BoostCameraDeltaFOV = 5.00f;
    this->BoostCameraDeltaHeight = -0.20f;
    this->BoostCameraDeltaElevation = -5.00f;
    this->BoostCameraInterp = 0.50f;
    this->BoostCameraRestoreSpring = 5.00f;
    this->BoostCameraRestoreDamping = 10.00f;
    this->CameraBlendSeconds = 0.50f;
    this->ChargeCameraBlendSeconds = 1.00f;
    this->BoundaryCameraStartDistanceX = 20.00f;
    this->BoundaryCameraOffsetX = 1.50f;
    this->BoundaryCameraStartDistanceY = 15.00f;
    this->BoundaryCameraOffsetY = 1.00f;
    this->WarningDist = 30.00f;
    this->AttractDist = 10.00f;
    this->RespotDist = 10.00f;
    this->BoundaryHeight = 50.00f;
    this->BoundaryWidth = 50.00f;
    this->BoundaryWarningSeconds = 2.00f;
    this->BoundaryWindLengthRate = 0.50f;
    this->NoInputDelaySeconds = 1.00f;
    this->NoInputAngularSpeed = 10.00f;
    this->FarDeccel = 1000.00f;
    this->FarMaxAngularSpeed = 240.00f;
    this->FarMinAngularSpeed = 60.00f;
    this->RingGateDistance = 50.00f;
    this->MinusRingGateRadius = 5.00f;
    this->RingGateToCenterDegree = 30.00f;
    this->RingGateInAngularSpeedMin = 60.00f;
    this->RingGateInAngularSpeedMax = 120.00f;
    this->RingGateOutAngularSpeed = 240.00f;
    this->HandleAssistAngularSpeed = 30.00f;
    this->HandleAssistBlendRate = 0.50f;
    this->BoundaryAngularSpeed = 3.00f;
    this->BoundaryDeccel = 100.00f;
    this->OuterBoundaryRespotSeconds = 0.50f;
    this->CobraAcceptDegree = 60.00f;
    this->HookTurnStartDegree = 15.00f;
    this->CobraTurnStartDegree = 10.00f;
    this->BarrelRollCollisionRadius = 4.00f;
    this->BarrelRollCollisionLength = 12.00f;
    this->BarrelRollCollisionForwardOffset = 2.00f;
    this->LocalDegreeMax = 80.00f;
    this->LocalBodyPitchDegreeMax = 60.00f;
    this->LocalVelocityPitchDegreeMax = 45.00f;
    this->LocalBodyYawDegreeMax = 60.00f;
    this->LocalVelocityYawDegreeMax = 45.00f;
    this->CobraTurnInputDegree = 60.00f;
    this->bUseChargeDashCamera = true;
    this->ChargeDashDirectionBlendRate = 0.90f;
    this->NoInputDeccel = 0.50f;
    this->WallHitCount = 3;
    this->HeadOnDeg = 60.00f;
    this->HeadOnToCourseDegree = 20.00f;
    this->HitCountIntervalSeconds = 1.00f;
    this->PunchHittingSeconds = 1.00f;
    this->ModelRotSmoothing = 0.70f;
}


