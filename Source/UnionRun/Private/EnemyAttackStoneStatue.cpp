#include "EnemyAttackStoneStatue.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "UnionVATMeshComponent.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"
#include "TriggerComponent.h"

AEnemyAttackStoneStatue::AEnemyAttackStoneStatue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GimmickContactType = EGimmickContactType::InvincibleBreak;
    this->BeamActorRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BeamRoot"));
    this->VATMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("MainMeshComponent"));
    this->UnderBodyMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainUnderMeshComponent"));
    this->LaserStaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserBodyMeshComponent"));
    this->LaserHitStaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("HitMeshComponent"));
    this->LaserMuzzleStaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MuzzleMeshComponent"));
    this->MoveUpSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveUpSE"));
    this->LandHitSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("LandHitSE"));
    this->IdleMoveSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("RollingSE"));
    this->BeamSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("BeamEffectSE"));
    this->BeamScaleRatio = 1.50f;
    this->BeamScaleCurve = NULL;
    this->SparkEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("HitSparkEffect"));
    this->BeamScaleTime = 0.80f;
    this->MoveUpTime = 1.00f;
    this->DamageMoveHight = 400.00f;
    this->RotateSpeed = 2.00f;
    this->RotateDirection = true;
    this->DamageMoveUpCurve = NULL;
    this->UseDamageMoveTremor = true;
    this->TremorEnableDistance = 50.00f;
    this->m_MainStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBody"));
    this->m_StompTriggerComponent = CreateDefaultSubobject<UTriggerComponent>(TEXT("StompHitTriggerComponent"));
    this->BeamActorRoot->SetupAttachment(VATMeshComponent);
    this->BeamSoundComponent->SetupAttachment(LaserHitStaticMeshComponent);
    this->IdleMoveSoundComponent->SetupAttachment(VATMeshComponent);
    this->LandHitSoundComponent->SetupAttachment(VATMeshComponent);
    this->LaserHitStaticMeshComponent->SetupAttachment(VATMeshComponent);
    this->LaserMuzzleStaticMeshComponent->SetupAttachment(VATMeshComponent);
    this->LaserStaticMeshComponent->SetupAttachment(VATMeshComponent);
    this->MoveUpSoundComponent->SetupAttachment(UnderBodyMeshComponent);
    this->SparkEffect->SetupAttachment(VATMeshComponent);
    this->VATMeshComponent->SetupAttachment(UnderBodyMeshComponent);
    this->m_MainStaticBodyComponent->SetupAttachment(VATMeshComponent);
    this->m_StompTriggerComponent->SetupAttachment(VATMeshComponent);
}

void AEnemyAttackStoneStatue::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}

void AEnemyAttackStoneStatue::OnTremorEvent() {
}



void AEnemyAttackStoneStatue::MovePositionUpdate(float Ratio) {
}


