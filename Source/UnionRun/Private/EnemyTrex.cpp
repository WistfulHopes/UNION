#include "EnemyTrex.h"
#include "Components/SceneComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "EEnemyType.h"
#include "ERandomObjType.h"
#include "StaticBodyComponent.h"

AEnemyTrex::AEnemyTrex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->RandomObjType = ERandomObjType::TREX;
    this->EnemyType = EEnemyType::TREX;
    this->SkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->bEnableHudAttackInfo = false;
    this->TremorHighDistance = 25.00f;
    this->TremorMiddleDistance = 50.00f;
    this->TremorLowDistance = 75.00f;
    this->TurnStartRate = 0.80f;
    this->DamageMontage = NULL;
    this->bTurnIsValid = false;
    this->bIsTurnEnd = false;
    this->bIsTurnReady = false;
    this->TurnValidStartTime = 1.64f;
    this->TurnValidTime = 0.12f;
    this->TurnEndTime = 3.94f;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->LeftFootStaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("LeftFootStaticBody"));
    this->RightFootStaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("RightFootStaticBody"));
    this->HeadStaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("HeadStaticBody"));
    this->Tail01StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("Tail01StaticBody"));
    this->Tail02StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("Tail02StaticBody"));
    this->Body01StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("Body01StaticBody"));
    this->AnimSequenceMove = NULL;
    this->AnimSequenceTurn = NULL;
    this->AnimSequenceDamage = NULL;
    this->Body01StaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
    this->HeadStaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
    this->LeftFootStaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
    this->RightFootStaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->Tail01StaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
    this->Tail02StaticBodyComponent->SetupAttachment(SkeletalMeshComponent);
}

void AEnemyTrex::OnTremorEvent() {
}


