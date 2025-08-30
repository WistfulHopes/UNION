#include "ReplayGhostMachine.h"
#include "UnionAOStaticMeshComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"

AReplayGhostMachine::AReplayGhostMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebguMesh = NULL;
    this->CockpitMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("Cockpit"));
    this->FrontMeshComponent = CreateDefaultSubobject<UUnionAOStaticMeshComponent>(TEXT("Front"));
    this->RearMeshComponent = CreateDefaultSubobject<UUnionAOStaticMeshComponent>(TEXT("Rear"));
    this->SideMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Side"));
    this->TireMeshComponents.AddDefaulted(4);
    this->TireDataTable = NULL;
    this->CarShadowDataTable = NULL;
    this->CockpitMeshComponent->SetupAttachment(RootComponent);
    this->FrontMeshComponent->SetupAttachment(CockpitMeshComponent);
    this->RearMeshComponent->SetupAttachment(CockpitMeshComponent);
    this->SideMeshComponent->SetupAttachment(CockpitMeshComponent);
}


