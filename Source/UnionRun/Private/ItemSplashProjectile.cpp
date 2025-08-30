#include "ItemSplashProjectile.h"
#include "GOCMovement.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ItemStaticBodyComponent.h"
#include "TriggerComponent.h"

AItemSplashProjectile::AItemSplashProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("WaterBallMesh"));
    this->StaticMesh = (UStaticMeshComponent*)RootComponent;
    this->Movement = CreateDefaultSubobject<UGOCMovement>(TEXT("GOCMovement"));
    this->HitTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("HitTrigger"));
    this->DamageTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("DamageTrigger"));
    this->StaticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("StaticBody"));
    this->DamageEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_FX_Item_Splash_Explosion01"));
    this->ExplosionSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEM_SPLASH_MILKCROWN"));
    this->ExplosionSoundAir = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEM_SPLASH_MILKCROWN_PLANE"));
    this->Lifetime = 4.50f;
    this->ScaleDisappearTime = 0.20f;
    this->HolderInvencibleTime = 0.50f;
    this->FallingDetectingOffsetFront = 0.00f;
    this->FallingDetectingOffsetFront_ToFlight = 0.00f;
    this->ExplosionLifeTime = 0.50f;
    this->ExplosionRadius = 10.00f;
    this->ExplosionHeight = 4.00f;
    this->RacerIndex = -1;
    this->DomainNumber = EDomainNumber::InvalidDomainNumber;
    this->DamageTrigger->SetupAttachment(DamageEffect);
    this->ExplosionSound->SetupAttachment(DamageEffect);
    this->ExplosionSoundAir->SetupAttachment(DamageEffect);
    this->HitTrigger->SetupAttachment(RootComponent);
    this->StaticBody->SetupAttachment(RootComponent);
}

void AItemSplashProjectile::OnTriggerColliderConflict(const FHitTriggerInfo& Info) {
}


