#include "ItemTeamWarpRingObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "UnionAtomComponent.h"

AItemTeamWarpRingObject::AItemTeamWarpRingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->PerformanceObjectRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PerformanceObjectRoot"));
    this->Movement = CreateDefaultSubobject<UGOCMovement>(TEXT("Movement"));
    this->SEWarping = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEM_WARPRING_WARPING"));
    this->SEWarpingLocal = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEM_WARPRING_WARPING_LOCAL"));
    this->MinLifeTimeNoTarget = 2.00f;
    this->EndDistanceToTarget = -10.00f;
    this->MoveToPathMaxTime = 1.00f;
    this->MoveToPathAdjustDistanceTime = 1.00f;
    this->MoveToPathAdjustDistance = 1.50f;
    this->MoveToPathAdjustDistanceCanceled = 5.00f;
    this->FallAcceleration = 10.00f;
    this->MaxFallSpeed = 60.00f;
    this->RotateSpeed = 720.00f;
    this->bUseWarpCamera = false;
    this->UseEndCameraType = 0;
    this->EndCameraRemoveTiming = 0.50f;
    this->bDebugDraw = false;
    this->bForceEnd = false;
    this->bForceEndImm = false;
    this->bInfinityWarp = false;
    this->StartCameraClass = NULL;
    this->WarpCameraClass = NULL;
    this->EndCameraLookDownClass = NULL;
    this->EndCameraLookUpClass = NULL;
    this->StartCameraObject = NULL;
    this->WarpCameraObject = NULL;
    this->EndCameraObject = NULL;
    this->PerformanceObjectRoot->SetupAttachment(RootComponent);
    this->SEWarping->SetupAttachment(RootComponent);
    this->SEWarpingLocal->SetupAttachment(RootComponent);
}


