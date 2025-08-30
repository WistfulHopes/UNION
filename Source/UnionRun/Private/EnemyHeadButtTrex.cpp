#include "EnemyHeadButtTrex.h"
#include "Components/SceneComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "ERandomObjType.h"
#include "StaticBodyComponent.h"

AEnemyHeadButtTrex::AEnemyHeadButtTrex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->RandomObjType = ERandomObjType::TREX;
    this->SkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->isForceBoot = false;
    this->isMirror = false;
    this->TremorHighDistance = 25.00f;
    this->TremorMiddleDistance = 50.00f;
    this->TremorLowDistance = 75.00f;
    this->DamageMontage = NULL;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->HeadStaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("HeadStaticBody"));
    this->JawStaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("JawHandStaticBody"));
    this->AnimSequenceAppear = NULL;
    this->AnimSequenceLoop = NULL;
    this->HeadStaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
    this->JawStaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void AEnemyHeadButtTrex::OnTremorEvent() {
}

void AEnemyHeadButtTrex::OnDestroyRockEvent() {
}


