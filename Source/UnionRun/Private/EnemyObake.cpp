#include "EnemyObake.h"
#include "UnionAtomComponent.h"
#include "UnionVATAnimEventComponent.h"
#include "ETimingGimmickType.h"

AEnemyObake::AEnemyObake(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimingGimmickType = ETimingGimmickType::Enemy04002;
    this->MovingAttackIntervalTime = 2.00f;
    this->AttackingTime = 0.95f;
    this->AttackIntervalTime = 0.95f;
    this->IdleAnimationIndex = 0;
    this->AttackAnimationIndex = 1;
    this->VATModelMeshComponent = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("VATMeshModel"));
    this->m_AttackSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ShotSound"));
    this->FlameAttack1st = NULL;
    this->FlameLoopAttack1st = NULL;
    this->FlameAttack2nd = NULL;
    this->m_AttackSoundComponent->SetupAttachment(VATModelMeshComponent);
}


