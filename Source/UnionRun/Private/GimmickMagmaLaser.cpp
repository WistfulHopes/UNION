#include "GimmickMagmaLaser.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickMagmaLaser::AGimmickMagmaLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->bIsMove = true;
    this->GimmickContactType = EGimmickContactType::UnBreakableAndSendDamage;
    this->StaticMeshComponent = (UUnionStaticMeshComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->AtomComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("AtomComponent"));
    this->DamageType = RacerDamageType::EnemyMedium;
    this->IsMove = false;
    this->IsRoundTrip = true;
    this->RotRollSpeed = 120.00f;
    this->RoundTripAngle = 180.00f;
    this->XYScale = 1.00f;
    this->ZScale = 1.00f;
    this->AtomComponent->SetupAttachment(RootComponent);
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}


