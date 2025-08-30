#include "GimmickBingoBall.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"
#include "StaticBodyComponent.h"

AGimmickBingoBall::AGimmickBingoBall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->SkeletalMeshComponent = (UUnionSkeletalMeshComponent*)RootComponent;
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->BallStaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("BallStaticBody"));
    this->AnimSequence = NULL;
    this->DamageType = RacerDamageType::EnemySquashed;
    this->BallStaticBodyComponent->SetupAttachment(RootComponent);
}

void AGimmickBingoBall::SetCollisionSocketName(FName NewName) {
}


