#include "EnemyDarkGaiaPhoenixPhase3.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "ERandomObjType.h"
#include "ETimingGimmickType.h"

AEnemyDarkGaiaPhoenixPhase3::AEnemyDarkGaiaPhoenixPhase3(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RandomObjType = ERandomObjType::PhoenixPhase3;
    this->TimingGimmickType = ETimingGimmickType::DarkGaiaPhoenix;
    this->ForceSelectAttack = false;
    this->ForceLeftAttack = false;
    this->AppearTime = 4.60f;
    this->FirstAttackIsLeft = false;
    this->BodySoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("BodyFireSE"));
    this->m_BodySkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("PhoenixSkeletalMeshComponent"));
    this->m_bodyEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PhoenixBodyEffect"));
    this->AnimInstance = NULL;
    this->RightFireAttack = NULL;
    this->LeftFireAttack = NULL;
}

void AEnemyDarkGaiaPhoenixPhase3::WingAttack(bool isRight, bool isMirrer) {
}




void AEnemyDarkGaiaPhoenixPhase3::ActivateAttackEffect(bool isRight, bool isMirrer) {
}


