#include "ReplayGhostHoverboard.h"
#include "UnionStaticMeshComponent.h"

AReplayGhostHoverboard::AReplayGhostHoverboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebguMesh = NULL;
    this->FrontMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Front"));
    this->RearMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Rear"));
    this->CenterMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Center"));
    this->UnitBoatStaticMeshComponents.AddDefaulted(2);
    this->UnitPlaneStaticMeshComponents.AddDefaulted(2);
    this->CenterMeshComponent->SetupAttachment(RootComponent);
    this->FrontMeshComponent->SetupAttachment(CenterMeshComponent);
    this->RearMeshComponent->SetupAttachment(CenterMeshComponent);
}


