#include "HoverboardInRaceActor.h"
#include "UnionStaticMeshComponent.h"

AHoverboardInRaceActor::AHoverboardInRaceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UnitBoatStaticMeshComponents.AddDefaulted(2);
    this->UnitPlaneStaticMeshComponents.AddDefaulted(2);
    this->BodyCutRearMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("BodyCutRear"));
    this->BodyCutRearMeshComponent->SetupAttachment(RootComponent);
}


