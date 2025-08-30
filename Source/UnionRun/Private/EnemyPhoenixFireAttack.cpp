#include "EnemyPhoenixFireAttack.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "GimmickStaticBodyComponent.h"

AEnemyPhoenixFireAttack::AEnemyPhoenixFireAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParticleIntParameterSetting = 0;
    this->AttackContinueTime = 1.00f;
    this->m_FireEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireAttackEffect"));
    this->BurningSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("FireSE"));
    this->m_FireStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
}


