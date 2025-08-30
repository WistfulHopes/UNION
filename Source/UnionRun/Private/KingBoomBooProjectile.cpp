#include "KingBoomBooProjectile.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "TriggerComponent.h"

AKingBoomBooProjectile::AKingBoomBooProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->TargetEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TargetEffectComponent"));
    this->PillarEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PillarEffectComponent"));
    this->EndEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("EndEffectComponent"));
    this->DamageType = RacerDamageType::KingBoomBoo;
    this->TriggerComponent = CreateDefaultSubobject<UTriggerComponent>(TEXT("TriggerComponent"));
    this->EndEffectComponent->SetupAttachment(RootComponent);
    this->PillarEffectComponent->SetupAttachment(RootComponent);
    this->TargetEffectComponent->SetupAttachment(RootComponent);
    this->TriggerComponent->SetupAttachment(RootComponent);
}

void AKingBoomBooProjectile::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}


