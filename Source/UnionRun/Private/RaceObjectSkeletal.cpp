#include "RaceObjectSkeletal.h"
#include "Components/SceneComponent.h"
#include "UnionSkeletalMeshComponent.h"

ARaceObjectSkeletal::ARaceObjectSkeletal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->BodyRoot = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("CarAbnimationRoot"));
    this->BodyRoot->SetupAttachment(RootComponent);
}

void ARaceObjectSkeletal::SetBodySkeletalMesh(USkeletalMesh* NewSkeletalMesh) {
}


