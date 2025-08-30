#include "GadgetBoatJumpSplashPeformance.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "TriggerComponent.h"

AGadgetBoatJumpSplashPeformance::AGadgetBoatJumpSplashPeformance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("DamageTrigger"));
    this->DamageEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ExplosionEffect"));
    this->ExplosionSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ExplosionSE"));
    this->ExplosionSoundLocal = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ExplosionSELocal"));
    this->ExplosionLifeTime = 0.50f;
    this->ExplosionRadius = 10.00f;
    this->ExplosionHeight = 4.00f;
    this->RacerIndex = -1;
    this->DamageTrigger->SetupAttachment(DamageEffect);
    this->ExplosionSound->SetupAttachment(DamageEffect);
}

void AGadgetBoatJumpSplashPeformance::OnTriggerColliderConflict(const FHitTriggerInfo& Info) {
}


