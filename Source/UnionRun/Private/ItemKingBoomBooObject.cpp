#include "ItemKingBoomBooObject.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionSkeletalMeshComponent.h"

AItemKingBoomBooObject::AItemKingBoomBooObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->BoomBooSkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("BoomBooSkeletalMeshComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->RingSkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("RingSkeletalMeshComponent"));
    this->KingBoomBooProjectile = NULL;
    this->AttackSignEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("AttackSignEffectComponent"));
    this->AttackBallEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("AttackBallEffectComponent"));
    this->MoveSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveSoundComponent"));
    this->AvoidSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("AvoidSoundComponent"));
    this->ActorScale = 3.00f;
    this->m_StartFrontOffset = 10.00f;
    this->MoveStraightDistance = 20.00f;
    this->MoveTargetRacerDistance = 10.00f;
    this->AttackTargetDistance = 1.00f;
    this->Lifetime = 5.00f;
    this->TargetFrontOffset = 10.00f;
    this->MoveToPathTime = 3.00f;
    this->HeightOffset = 1.00f;
    this->TargetSearchTime = 2.00f;
    this->TargetLookAtSpeed = 10.00f;
    this->ForceExitTime = 30.00f;
    this->NormalMoveSpeed = 20.00f;
    this->PathMoveSpeed = 180.00f;
    this->HomingMoveSpeed = 180.00f;
    this->AttackMoveSpeed = 60.00f;
    this->SpeedRateNormal = 1.00f;
    this->SpeedRateHigh = 1.00f;
    this->SpeedRateSonic = 1.00f;
    this->SpeedRateSuperSonic = 1.00f;
    this->ChangeToPathMoveTimer = 1.00f;
    this->ChangeToHomingTimer = 1.00f;
    this->PillarSpawnNum = 5;
    this->PillarSpawnTime = 0.10f;
    this->PillarTrajectoryDistance = 100.00f;
    this->PillarSpawnOffset = 300.00f;
    this->PillarRadiusRate = 1.00f;
    this->PillarHeightRate = 1.00f;
    this->PillarPlayRate = 1.00f;
    this->PillarLifeSpan = 5.00f;
    this->PillarAvoidFrame = 2;
    this->PillarAvoidTopOffset = 500.00f;
    this->AttackSignEffectStartTime = 0.00f;
    this->AttackBallEffectStartTime = 0.00f;
    this->AttackSignEffectPlayTime = 0.00f;
    this->AttackBallEffectPlayTime = 0.00f;
    this->AttackEffectOffsetMin = 0.00f;
    this->AttackEffectOffsetMinSpeed = 80.00f;
    this->AttackEffectOffsetMax = 100.00f;
    this->AttackEffectOffsetMaxSpeed = 150.00f;
    this->TopAttackSignEffectHeight = 0.20f;
    this->TopAttackSignRaycastToWallStartHeight = 0.50f;
    this->TopAttackSignRaycastToWallOffset = 2.00f;
    this->TopAttackSignRaycastToRoadLength = 2.00f;
    this->FutureTimeAtTargetVelocity = 0.05f;
    this->AttackStartTime = 1.80f;
    this->AttackAvoidStartTime = 1.65f;
    this->AttackWaitTime = 0.80f;
    this->MaterialChangeTime = 0.50f;
    this->DebugDrawTrajectory = false;
    this->AnimInstance = NULL;
    this->RingAnimInstance = NULL;
    this->AttackBallEffectComponent->SetupAttachment(BoomBooSkeletalMeshComponent);
    this->AttackSignEffectComponent->SetupAttachment(BoomBooSkeletalMeshComponent);
    this->BoomBooSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->MoveSoundComponent->SetupAttachment(BoomBooSkeletalMeshComponent);
    this->RingSkeletalMeshComponent->SetupAttachment(RootComponent);
}


