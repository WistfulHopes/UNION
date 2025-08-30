#include "ItemWarpRingObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "UnionAtomComponent.h"

AItemWarpRingObject::AItemWarpRingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->PerformanceObjectRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PerformanceObjectRoot"));
    this->Movement = CreateDefaultSubobject<UGOCMovement>(TEXT("Movement"));
    this->SEWarping = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEM_WARPRING_WARPING"));
    this->SEWarpingLocal = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEM_WARPRING_WARPING_LOCAL"));
    this->MinLifeTimeNoTarget = 2.00f;
    this->JumpLandingTime = 0.50f;
    this->JumpLandingTime_YellowDrill = 0.50f;
    this->JumpLandingTime_MonsterTruck = 0.50f;
    this->MoveToPathMaxTime = 1.00f;
    this->MoveToPathAdjustDistanceTime = 1.00f;
    this->MoveToPathAdjustDistance = 1.50f;
    this->MoveToPathAdjustDistanceAvoided = 1.50f;
    this->MoveToPathAdjustDistanceCanceled = 5.00f;
    this->MoveToPathRotateAddSpeed = 12000.00f;
    this->MoveToPathRotateMaxSpeed = 12000.00f;
    this->HomingDistance = 30.00f;
    this->HomingDistancePath = 30.00f;
    this->CloseDistance = 1.50f;
    this->AvailableTargetChaseMaxTime = 2.00f;
    this->FallAcceleration = 10.00f;
    this->MaxFallSpeed = 60.00f;
    this->RotateSpeed = 720.00f;
    this->AttackCancelTime = 0.20f;
    this->EndCameraRemoveTiming = 0.50f;
    this->JumpLandindCurve = NULL;
    this->bDebugDraw = false;
    this->bForceEnd = false;
    this->bForceEndImm = false;
    this->bInfinityWarp = false;
    this->StartCameraClass = NULL;
    this->EndCameraClass = NULL;
    this->EndAttackCameraClass = NULL;
    this->StartCameraObject = NULL;
    this->EndCameraObject = NULL;
    this->EndAttackCameraObject = NULL;
    this->PerformanceObjectRoot->SetupAttachment(RootComponent);
    this->SEWarping->SetupAttachment(RootComponent);
}

void AItemWarpRingObject::OnHitTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}


