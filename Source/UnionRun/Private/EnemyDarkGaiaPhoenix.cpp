#include "EnemyDarkGaiaPhoenix.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionSkeletalMeshComponent.h"

AEnemyDarkGaiaPhoenix::AEnemyDarkGaiaPhoenix(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovefinishRate = 0.95f;
    this->ForceSelectAttack = false;
    this->ForceLeftAttack = false;
    this->BodySoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("BodyFireSE"));
    this->m_BodySkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("PhoenixSkeletalMeshComponent"));
    this->m_bodyEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PhoenixBodyEffect"));
    this->AnimInstance = NULL;
}

void AEnemyDarkGaiaPhoenix::StartAttack() {
}





