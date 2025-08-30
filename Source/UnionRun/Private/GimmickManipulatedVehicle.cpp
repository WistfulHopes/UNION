#include "GimmickManipulatedVehicle.h"
#include "Components/SceneComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickManipulatedVehicle::AGimmickManipulatedVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->GimmickContactType = EGimmickContactType::InvincibleBreakAndSendDamage;
    this->MoveUpTime = 1.00f;
    this->DamageMoveHight = 2000.00f;
    this->DamageMoveUpCurve = NULL;
    this->DamageType = RacerDamageType::EnemyMedium;
    this->IsSplineMove = false;
    this->bIsExecuteIdleMove = false;
    this->IdleMoveRotateTime = 1.00f;
    this->IdleMoveLocationTime = 1.00f;
    this->IdleMoveCurve = NULL;
    this->IdleRotateYaxisCurve = NULL;
    this->IdleRotateZaxisCurve = NULL;
    this->IdleMoveHorizontal = 100.00f;
    this->IdleMoveVertical = 50.00f;
    this->IdleRotateYaxis = 20.00f;
    this->IdleRotateZaxis = 20.00f;
    this->BodyStatickMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent"));
    this->ShadowStatickMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("ShadowMeshComponent"));
    this->MoveUpSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveUpSE"));
    this->MoveSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveIdleSE"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->m_MainStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBody"));
    this->BodyStatickMeshComponent->SetupAttachment(RootComponent);
    this->MoveSoundComponent->SetupAttachment(RootComponent);
    this->MoveUpSoundComponent->SetupAttachment(RootComponent);
    this->ShadowStatickMeshComponent->SetupAttachment(RootComponent);
    this->m_MainStaticBodyComponent->SetupAttachment(BodyStatickMeshComponent);
}

void AGimmickManipulatedVehicle::DebugUpdateIdleMove(float DeltaTime) {
}


