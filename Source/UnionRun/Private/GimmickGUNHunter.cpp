#include "GimmickGUNHunter.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickGUNHunter::AGimmickGUNHunter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("Mesh"));
    this->ComAvoid = true;
    this->GimmickContactType = EGimmickContactType::InvincibleBreakAndSendDamage;
    this->Mesh = (UUnionSkeletalMeshComponent*)RootComponent;
    this->Body = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("Body"));
    this->DeadEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("DeadEffect"));
    this->HoverSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("HoverSound"));
    this->DeadSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("DeadSound"));
    this->DamageType = RacerDamageType::Non;
    this->MoveType = EGUNHunterMotion::WaitSky;
    this->BlowawayTime = 0.90f;
    this->DeadEffectDelayTime = 0.80f;
    this->DeadWaitTime = 3.00f;
    this->RespawnSearchRacerRange = 1000.00f;
    this->Body->SetupAttachment(RootComponent);
    this->DeadEffect->SetupAttachment(RootComponent);
    this->DeadSound->SetupAttachment(RootComponent);
    this->HoverSound->SetupAttachment(RootComponent);
}

void AGimmickGUNHunter::StopMove() {
}

void AGimmickGUNHunter::StartMove() {
}


