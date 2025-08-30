#include "ItemPerformanceBase.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TimelineComponent.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"

AItemPerformanceBase::AItemPerformanceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->RingRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RingRoot"));
    this->RingChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("RingBody"));
    this->AlertEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("AlertEffect"));
    this->AlertSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("AlertSound"));
    this->AvoidedSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("AvoidedSound"));
    this->RingScaleTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("RingTimeline"));
    this->RingAlertTime = 0.00f;
    this->RingShowTime = 2.00f;
    this->bUpdateRootRotation = true;
    this->bRotationAlwaysUseCourseUP = false;
    this->AttachRacerIndex = -1;
    this->RingScaleCurve = NULL;
    this->bUseAllowAvoidData = false;
    this->AvoidDataTable = NULL;
    this->bAllowAvoid = false;
    this->AllowAvoidAttackCarSpeed = 0.00f;
    this->AvoidAttackMoveDistance = -300.00f;
    this->AvoidAttackMoveTime = 0.20f;
    this->bUseMachineFormOffset = false;
    this->MachineFormOffsetTarget = EMachineFormOffsetTarget::Root;
    this->bPreSpawned = false;
    this->bOverrideUseItemUI = false;
    this->AlertEffect->SetupAttachment(RingRoot);
    this->RingChildActorComponent->SetupAttachment(RingRoot);
    this->RingRoot->SetupAttachment(RootComponent);
}

void AItemPerformanceBase::RingScaleUpdate(float Ratio) {
}

void AItemPerformanceBase::RingScaleFinished() {
}


