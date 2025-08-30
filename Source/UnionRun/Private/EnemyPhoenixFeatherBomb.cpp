#include "EnemyPhoenixFeatherBomb.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ERandomObjType.h"
#include "GimmickStaticBodyComponent.h"

AEnemyPhoenixFeatherBomb::AEnemyPhoenixFeatherBomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RandomObjType = ERandomObjType::PhoenixPhase2;
    this->bIsVioletVoidTarget = true;
    this->FirstAdditionalIdleTime = 0.30f;
    this->IntervalTime = 4.00f;
    this->AttackReadyEffectStartRate = 0.50f;
    this->AttackReadyEffectStopRate = 0.78f;
    this->AttackExplosionStartRate = 0.85f;
    this->BombStaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->m_movement = NULL;
    this->m_attackReadyEffect = NULL;
    this->FiredSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("FireSE"));
    this->m_BombAbsorbedBody = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("BombAbsorbBody"));
    this->AttackWarning = NULL;
    this->m_BombAbsorbedBody->SetupAttachment(BombStaticMeshComponent);
}


