#include "EnemyPhoenixFeatherPerformance.h"
#include "NiagaraComponent.h"
#include "UnionStaticMeshComponent.h"

AEnemyPhoenixFeatherPerformance::AEnemyPhoenixFeatherPerformance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParticleRadiusParameter = 10.00f;
    this->ParticleDurationParameter = 2.00f;
    this->FirstAdditionalIdleTime = 0.30f;
    this->IntervalTime = 3.00f;
    this->ArrackReadyStartRate = 0.80f;
    this->ArrackExplosionStartRate = 0.80f;
    this->BombEffectTime = 1.00f;
    this->BombStaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->m_explosionEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ExplosionEffect"));
    this->m_BombStaticBodyComponent = NULL;
}


