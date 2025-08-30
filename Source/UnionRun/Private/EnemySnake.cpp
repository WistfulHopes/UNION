#include "EnemySnake.h"
#include "UnionAtomComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "GimmickStaticBodyComponent.h"
#include "TriggerComponent.h"

AEnemySnake::AEnemySnake(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsMove = true;
    this->DamageRecoveryTime = 0.75f;
    this->AttackingTime = 1.00f;
    this->AttackInterval = 1.00f;
    this->DanageSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("DarkChaoSE"));
    this->SnakeSkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SnakeSkeletalMeshComponent"));
    this->SnakeBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("SnakeBodyComponent"));
    this->m_FindTriggerComponent = CreateDefaultSubobject<UTriggerComponent>(TEXT("CarFindTriggerComponent"));
    this->bIsDamage = false;
    this->bIsAttack = false;
    this->AnimInstance = NULL;
    this->DanageSoundComponent->SetupAttachment(SnakeSkeletalMeshComponent);
    this->SnakeBodyComponent->SetupAttachment(SnakeSkeletalMeshComponent);
    this->m_FindTriggerComponent->SetupAttachment(SnakeSkeletalMeshComponent);
}

void AEnemySnake::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}


