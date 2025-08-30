#include "GimmickThornBall.h"
#include "UnionStaticMeshComponent.h"
#include "GimmickStaticBodyComponent.h"

AGimmickThornBall::AGimmickThornBall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMeshComponent = (UUnionStaticMeshComponent*)RootComponent;
    this->GimmickStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("UGimmickStaticBodyComponent"));
    this->DamageType = RacerDamageType::EnemyMedium;
    this->GimmickStaticBodyComponent->SetupAttachment(RootComponent);
}


float AGimmickThornBall::GetHitSpeedRatio() {
    return 0.0f;
}


