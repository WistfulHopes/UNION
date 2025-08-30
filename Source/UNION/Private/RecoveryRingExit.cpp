#include "RecoveryRingExit.h"
#include "Components/SceneComponent.h"
#include "Components/TimelineComponent.h"
#include "UnionStaticMeshComponent.h"

ARecoveryRingExit::ARecoveryRingExit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->BodyComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Body"));
    this->AppearTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("Appear"));
    this->ShowTime = 3.00f;
    this->IsTimeReverse = false;
    this->BodyComponent->SetupAttachment(RootComponent);
}


void ARecoveryRingExit::FinishAppearTimeline() {
}


void ARecoveryRingExit::AppearTimelineUpdate(float Ratio) {
}


