#include "EnemyMoai.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "GimmickStaticBodyComponent.h"
#include "TriggerComponent.h"

AEnemyMoai::AEnemyMoai(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainMoaiMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MoaiStaticMeshComponent"));
    this->HitLandSmokeEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LandEffectComponent"));
    this->HitLandSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("LandHitSE"));
    this->MoveUpSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveUpSE"));
    this->MoveUpTime = 1.00f;
    this->DamageMoveHight = 2000.00f;
    this->DamageMoveUpCurve = NULL;
    this->UseDamageMoveTremor = true;
    this->TremorEnableDistance = 50.00f;
    this->TremorHighDistance = 25.00f;
    this->TremorMiddleDistance = 50.00f;
    this->TremorLowDistance = 75.00f;
    this->m_MainStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBody"));
    this->m_StompTriggerComponent = CreateDefaultSubobject<UTriggerComponent>(TEXT("StompHitTriggerComponent"));
    this->HitLandSmokeEffect->SetupAttachment(MainMoaiMeshComponent);
    this->HitLandSoundComponent->SetupAttachment(MainMoaiMeshComponent);
    this->MoveUpSoundComponent->SetupAttachment(MainMoaiMeshComponent);
    this->m_MainStaticBodyComponent->SetupAttachment(MainMoaiMeshComponent);
    this->m_StompTriggerComponent->SetupAttachment(MainMoaiMeshComponent);
}

void AEnemyMoai::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}

void AEnemyMoai::OnTremorEvent() {
}

void AEnemyMoai::MovePositionUpdate(float Ratio) {
}


