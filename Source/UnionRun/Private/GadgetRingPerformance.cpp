#include "GadgetRingPerformance.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"

AGadgetRingPerformance::AGadgetRingPerformance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->RingMesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("RingMesh"));
    this->RingNum = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("RingNum"));
    this->RacerIndex = -1;
    this->RotateCurve = NULL;
    this->RingMesh->SetupAttachment(RootComponent);
    this->RingNum->SetupAttachment(RingMesh);
}


