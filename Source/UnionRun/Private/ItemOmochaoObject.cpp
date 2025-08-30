#include "ItemOmochaoObject.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "UnionAtomComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "ItemCountDownComponent.h"
#include "TriggerComponent.h"

AItemOmochaoObject::AItemOmochaoObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->RingRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RingRoot"));
    this->OmochaoMesh = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("OmochaoMesh"));
    this->ChildActorRing = CreateDefaultSubobject<UChildActorComponent>(TEXT("RingActor"));
    this->HitTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("HitTrigger"));
    this->CountDown = CreateDefaultSubobject<UItemCountDownComponent>(TEXT("CountDown"));
    this->Movement = CreateDefaultSubobject<UGOCMovement>(TEXT("Movement"));
    this->AppearSE = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("AppearSE"));
    this->ReturnSE = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ReturnSE"));
    this->CountDownTime = 2.00f;
    this->HeightAbovePath = 1.00f;
    this->StartPerformanceTime = 0.50f;
    this->bUseCourseBoundary = false;
    this->DropRingColumn = 1;
    this->DropRingColumnInterval = 1.50f;
    this->DropRingIntervalTime = 0.10f;
    this->DropRingSkipDistance = 1.00f;
    this->DropRingMaxNum = 50;
    this->DropRingHiehtOffset = 0.25f;
    this->RotateSpeed = 720.00f;
    this->InPauseDistance = 70.00f;
    this->InPauseTimer = 0.50f;
    this->VehicleStopSpeedThreshold = 1.00f;
    this->ExitRingPerformanceTime = 0.20f;
    this->StopDropRingAnimTime = 0.50f;
    this->FutureTimeInDrift = 0.20f;
    this->bDebugDraw = false;
    this->bDebugForceCancel = false;
    this->bDebugDropRingDraw = false;
    this->DroppedRingClass = NULL;
    this->ChildActorRing->SetupAttachment(RingRoot);
    this->HitTrigger->SetupAttachment(OmochaoMesh);
    this->OmochaoMesh->SetupAttachment(RootComponent);
    this->RingRoot->SetupAttachment(RootComponent);
}

void AItemOmochaoObject::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}


