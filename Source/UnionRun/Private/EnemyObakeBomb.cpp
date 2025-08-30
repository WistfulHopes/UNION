#include "EnemyObakeBomb.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"

AEnemyObakeBomb::AEnemyObakeBomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GimmickContactType = EGimmickContactType::UnBreakableAndSendDamage;
    this->BombActveTime = 2.00f;
    this->BombExplodeTime = 1.00f;
    this->MoveSpeed = 500.00f;
    this->ActivateExplosionLength = 50.00f;
    this->m_BombMesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("BombStaticMesh"));
    this->m_BombStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->m_FireEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireAttackEffect"));
    this->m_AttackSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ExplodeSound"));
    this->FlameAttack1st = NULL;
    this->FlameLoopAttack1st = NULL;
    this->FlameAttack2nd = NULL;
    this->m_AttackSoundComponent->SetupAttachment(m_BombMesh);
    this->m_FireEffect->SetupAttachment(m_BombMesh);
}


