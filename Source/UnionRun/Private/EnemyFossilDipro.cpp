#include "EnemyFossilDipro.h"
#include "UnionAtomComponent.h"
#include "GimmickStaticBodyComponent.h"
#include "UnionSkeletalMeshComponent.h"

AEnemyFossilDipro::AEnemyFossilDipro(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BreakSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveUpSE"));
    this->DamageRecoveryTime = 0.50f;
    this->FossilBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBodyComponent"));
    this->FossilNeck3BodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("Neck3BodyComponent"));
    this->AnimInstance = NULL;
    this->BreakSoundComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->FossilBodyComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->FossilNeck3BodyComponent->SetupAttachment(BodySkeletalMeshComponent);
}


