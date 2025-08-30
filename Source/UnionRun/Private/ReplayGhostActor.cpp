#include "ReplayGhostActor.h"
#include "Components/StaticMeshComponent.h"
#include "UnionAOStaticMeshComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"

AReplayGhostActor::AReplayGhostActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->DebguMesh = (UStaticMeshComponent*)RootComponent;
    this->Root = NULL;
    this->CockpitMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("Cockpit"));
    this->FrontMeshComponent = CreateDefaultSubobject<UUnionAOStaticMeshComponent>(TEXT("Front"));
    this->RearMeshComponent = CreateDefaultSubobject<UUnionAOStaticMeshComponent>(TEXT("Rear"));
    this->SideMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Side"));
    this->TireDataTable = NULL;
    this->CarShadowDataTable = NULL;
    this->DummyMaterialInterface = NULL;
    this->FrontMeshComponent->SetupAttachment(CockpitMeshComponent);
    this->RearMeshComponent->SetupAttachment(CockpitMeshComponent);
    this->SideMeshComponent->SetupAttachment(CockpitMeshComponent);
}


