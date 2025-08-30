#include "EnemyFossilTrexBite.h"
#include "UnionAtomComponent.h"
#include "GimmickStaticBodyComponent.h"
#include "UnionSkeletalMeshComponent.h"

AEnemyFossilTrexBite::AEnemyFossilTrexBite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BreakSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveUpSE"));
    this->bIsTypeB = false;
    this->DamageRecoveryTime = 0.50f;
    this->FossilBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBodyComponent"));
    this->FossilBodyUpComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBody2Component"));
    this->AnimInstance = NULL;
    this->BreakSoundComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->FossilBodyComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->FossilBodyUpComponent->SetupAttachment(BodySkeletalMeshComponent);
}


