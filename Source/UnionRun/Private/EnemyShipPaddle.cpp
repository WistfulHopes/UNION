#include "EnemyShipPaddle.h"
#include "Components/SceneComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"

AEnemyShipPaddle::AEnemyShipPaddle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bIsMove = true;
    this->GimmickContactType = EGimmickContactType::InvincibleBreakAndSendDamage;
    this->MainMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStaticMeshComponent"));
    this->MoveUpSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveUpSE"));
    this->RollingSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("RollingSE"));
    this->MoveUpTime = 1.50f;
    this->DamageMoveHight = 2000.00f;
    this->RotSpeed = 5.00f;
    this->DamageMoveUpCurve = NULL;
    this->bIsRolling = true;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->m_MainStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBody"));
    this->MainMeshComponent->SetupAttachment(RootComponent);
    this->MoveUpSoundComponent->SetupAttachment(RootComponent);
    this->RollingSoundComponent->SetupAttachment(RootComponent);
    this->m_MainStaticBodyComponent->SetupAttachment(MainMeshComponent);
}

void AEnemyShipPaddle::MovePositionUpdate(float Ratio) {
}


