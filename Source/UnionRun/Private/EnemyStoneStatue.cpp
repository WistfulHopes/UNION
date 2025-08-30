#include "EnemyStoneStatue.h"
#include "UnionAtomComponent.h"
#include "UnionVATMeshComponent.h"
#include "ERandomObjType.h"
#include "GimmickStaticBodyComponent.h"
#include "TriggerComponent.h"

AEnemyStoneStatue::AEnemyStoneStatue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RandomObjType = ERandomObjType::BooPlane;
    this->VATMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("MainMeshComponent"));
    this->MoveUpSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveUpSE"));
    this->LandHitSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("LandHitSE"));
    this->MoveUpTime = 1.00f;
    this->DamageMoveHight = 2000.00f;
    this->DamageMoveUpCurve = NULL;
    this->UseDamageMoveTremor = true;
    this->TremorEnableDistance = 50.00f;
    this->m_MainStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBody"));
    this->m_StompTriggerComponent = CreateDefaultSubobject<UTriggerComponent>(TEXT("StompHitTriggerComponent"));
    this->LandHitSoundComponent->SetupAttachment(VATMeshComponent);
    this->MoveUpSoundComponent->SetupAttachment(VATMeshComponent);
    this->m_MainStaticBodyComponent->SetupAttachment(VATMeshComponent);
    this->m_StompTriggerComponent->SetupAttachment(VATMeshComponent);
}

void AEnemyStoneStatue::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}

void AEnemyStoneStatue::OnTremorEvent() {
}

void AEnemyStoneStatue::MovePositionUpdate(float Ratio) {
}


