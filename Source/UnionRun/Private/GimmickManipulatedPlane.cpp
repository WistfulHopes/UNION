#include "GimmickManipulatedPlane.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "EGimmickContactType.h"
#include "ERandomObjType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickManipulatedPlane::AGimmickManipulatedPlane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RandomObjType = ERandomObjType::StoneStatue;
    this->GimmickContactType = EGimmickContactType::InvincibleBreakAndSendDamage;
    this->DamageType = RacerDamageType::EnemyMedium;
    this->RotateSpeed = 1.00f;
    this->RotateDirection = false;
    this->DamageMoveTime = 3.00f;
    this->DamageMoveLength = 10000.00f;
    this->DamageMoveCurve = NULL;
    this->isDebugDamageCheck = false;
    this->BodyStatickMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent"));
    this->IdleSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("IdleSE"));
    this->MoveUpSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveUpSE"));
    this->m_MainStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBody"));
    this->m_Wing1StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("Wing1BodyComponent"));
    this->m_Wing2StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("Wing2BodyComponent"));
    this->IdleSoundComponent->SetupAttachment(BodyStatickMeshComponent);
    this->MoveUpSoundComponent->SetupAttachment(BodyStatickMeshComponent);
    this->m_MainStaticBodyComponent->SetupAttachment(BodyStatickMeshComponent);
    this->m_Wing1StaticBodyComponent->SetupAttachment(BodyStatickMeshComponent);
    this->m_Wing2StaticBodyComponent->SetupAttachment(BodyStatickMeshComponent);
}


