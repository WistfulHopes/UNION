#include "TravelRingFloorObject.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"

ATravelRingFloorObject::ATravelRingFloorObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootScene_ = (USceneComponent*)RootComponent;
    this->MainFloor = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainFloor"));
    this->AccelFloor = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("AccelFloor"));
    this->AnimFloor_Front = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("AnimFloor_Front"));
    this->AnimFloor_Back = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("AnimFloor_Back"));
    this->AccelFloor->SetupAttachment(RootComponent);
    this->AnimFloor_Back->SetupAttachment(RootComponent);
    this->AnimFloor_Front->SetupAttachment(RootComponent);
    this->MainFloor->SetupAttachment(RootComponent);
}


