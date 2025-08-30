#include "EnemyAmbushTrex.h"
#include "Components/SceneComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "ERandomObjType.h"
#include "StaticBodyComponent.h"

AEnemyAmbushTrex::AEnemyAmbushTrex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->RandomObjType = ERandomObjType::TREX;
    this->SkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->bIsDamage = false;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->LeftFootStaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("LeftFootStaticBody"));
    this->RightFootStaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("RightFootStaticBody"));
    this->HeadStaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("HeadStaticBody"));
    this->AnimSequenceAttack = NULL;
    this->AnimSequenceDamage = NULL;
    this->HeadStaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
    this->LeftFootStaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
    this->RightFootStaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void AEnemyAmbushTrex::HitRacer(int32 RacerIndex) {
}


