#include "ItemHomingPunchObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ItemStaticBodyComponent.h"
#include "TriggerComponent.h"

AItemHomingPunchObject::AItemHomingPunchObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->m_staticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->m_staticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("StaticBody"));
    this->m_hitTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("HitTrigger"));
    this->m_movement = CreateDefaultSubobject<UGOCMovement>(TEXT("Movement"));
    this->m_NiagaraJet = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_FX_Item_HomingPunch_Jet"));
    this->m_NiagaraHit = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_FX_Item_HomingPaunch_Hit"));
    this->m_MoveSoundUnionAtom = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveSoundUnionAtom"));
    this->m_HitSoundUnionAtom = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("HitSoundUnionAtom"));
    this->m_lifeTime = 30.00f;
    this->m_MissTargetTime = 0.20f;
    this->m_flyHeightUE = 200.00f;
    this->m_ChangeToPathMoveTimer = 0.50f;
    this->m_ChangeToHomingTimer = 0.50f;
    this->m_MoveToPathTime = 3.00f;
    this->m_targetForwardDistance = 5.00f;
    this->m_targetForwardDistanceTime = 1.00f;
    this->m_targetForwardRotateAddSpeed = 720.00f;
    this->m_targetForwardRotateMaxSpeed = 1080.00f;
    this->m_FallAcceleration = 10.00f;
    this->m_MaxFallSpeed = 60.00f;
    this->m_FallAccelerationOnPath = 10.00f;
    this->m_MaxFallSpeedOnPath = 60.00f;
    this->m_homingDistance = 30.00f;
    this->m_HomingDistancePath = 30.00f;
    this->m_collisionInvalidTime = 0.10f;
    this->m_HitSoundUnionAtom->SetupAttachment(m_staticMeshComponent);
    this->m_MoveSoundUnionAtom->SetupAttachment(m_staticMeshComponent);
    this->m_NiagaraHit->SetupAttachment(m_staticMeshComponent);
    this->m_NiagaraJet->SetupAttachment(m_staticMeshComponent);
    this->m_hitTrigger->SetupAttachment(RootComponent);
    this->m_staticBody->SetupAttachment(RootComponent);
    this->m_staticMeshComponent->SetupAttachment(RootComponent);
}

void AItemHomingPunchObject::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}





