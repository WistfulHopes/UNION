#include "UnionMonsterTruckMeshContainer.h"
#include "Components/SceneComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"

AUnionMonsterTruckMeshContainer::AUnionMonsterTruckMeshContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->BodyMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("MonsterTruckBodyMesh"));
    this->BodyStaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MonsterTruckBodyStaticMesh"));
    this->CockpitMeshComponents.AddDefaulted(3);
    this->UnitCarStaticMeshComponents.AddDefaulted(4);
    this->UnitBoatStaticMeshComponents.AddDefaulted(4);
    this->UnitPlaneSkeletalMeshComponents.AddDefaulted(2);
    this->BodyMeshComponent->SetupAttachment(RootComponent);
    this->BodyStaticMeshComponent->SetupAttachment(RootComponent);
}


