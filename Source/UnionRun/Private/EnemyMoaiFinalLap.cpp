#include "EnemyMoaiFinalLap.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionVATMeshComponent.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"
#include "TriggerComponent.h"

AEnemyMoaiFinalLap::AEnemyMoaiFinalLap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsMove = true;
    this->GimmickContactType = EGimmickContactType::InvincibleBreak;
    this->VATMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("MainMeshComponent"));
    this->HitLandSmokeEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SmokeEffect"));
    this->HitLandSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("LandHitSE"));
    this->MoveUpSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveUpSE"));
    this->MoveDownTime = 1.00f;
    this->MoveUpTime = 1.00f;
    this->FallReadyTime = 1.00f;
    this->DownWaitTime = 1.50f;
    this->DownFinishTime = 0.50f;
    this->DownHight = 50.00f;
    this->UpHight = 50.00f;
    this->DamageMoveHight = 50.00f;
    this->MoveDownCurve = NULL;
    this->MoveUpCurve = NULL;
    this->DamageMoveUpCurve = NULL;
    this->UseDamageMoveTremor = true;
    this->UseNormalMoveTremor = true;
    this->TremorEnableDistance = 50.00f;
    this->TremorHighDistance = 25.00f;
    this->TremorMiddleDistance = 50.00f;
    this->TremorLowDistance = 75.00f;
    this->m_MainStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBody"));
    this->m_StompTriggerComponent = CreateDefaultSubobject<UTriggerComponent>(TEXT("StompHitTriggerComponent"));
    this->HitLandSmokeEffect->SetupAttachment(VATMeshComponent);
    this->HitLandSoundComponent->SetupAttachment(VATMeshComponent);
    this->MoveUpSoundComponent->SetupAttachment(VATMeshComponent);
    this->m_MainStaticBodyComponent->SetupAttachment(VATMeshComponent);
    this->m_StompTriggerComponent->SetupAttachment(VATMeshComponent);
}

void AEnemyMoaiFinalLap::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}

void AEnemyMoaiFinalLap::OnTremorEvent() {
}

void AEnemyMoaiFinalLap::MovePositionUpdate(float Ratio) {
}

void AEnemyMoaiFinalLap::MovePositionFinished() {
}


