#include "GimmickFeatherBombWarning.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "EGimmickContactType.h"
#include "ERandomObjType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickFeatherBombWarning::AGimmickFeatherBombWarning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RandomObjType = ERandomObjType::PhoenixPhase2;
    this->GimmickContactType = EGimmickContactType::UnBreakableAndSendDamage;
    this->ReadyParticleRadiusParameter = 10.00f;
    this->WarningActiveTime = 0.50f;
    this->BombAttackingTime = 2.00f;
    this->BombEffectOffsetHeight = 0.00f;
    this->ExplodeParticleRadiusParameter = 10.00f;
    this->ExplodeParticleDurationParameter = 2.00f;
    this->DamageType = RacerDamageType::EnemyMedium;
    this->m_attackReadyEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ExplosionReadyEffect"));
    this->m_bombAttackEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BombExplosionEffect"));
    this->BombExplodeSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("BombExplosionSE"));
    this->m_BombStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->BombExplodeSoundComponent->SetupAttachment(m_bombAttackEffect);
}


