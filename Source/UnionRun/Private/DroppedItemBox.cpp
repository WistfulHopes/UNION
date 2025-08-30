#include "DroppedItemBox.h"
#include "GOCMovement.h"
#include "UnionAtomComponent.h"
#include "StaticBodyComponent.h"

ADroppedItemBox::ADroppedItemBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Movement = CreateDefaultSubobject<UGOCMovement>(TEXT("Movement"));
    this->BodyCollision = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("BodyCollision"));
    this->HitEffect = NULL;
    this->SpawnSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_SPAWN_ITEMBOX"));
    this->HitSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEMBOX"));
    this->Lifetime = 10.00f;
    this->CountDownTime = 2.00f;
    this->CollisionEnableTime_Owner = 0.50f;
    this->CollisionEnableTime_Other = 0.50f;
    this->NormalSpawnSound = NULL;
    this->DoubleSpawnSound = NULL;
    this->NormalHitSound = NULL;
    this->DoubleHitSound = NULL;
    this->m_blinkIntervalTime = 0.05f;
    this->m_radius = 0.50f;
    this->m_restitutionCoffi = 0.40f;
    this->m_sinkLength = 0.50f;
    this->BodyCollision->SetupAttachment(RootComponent);
}


