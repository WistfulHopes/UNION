#include "ItemMagnetObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ItemStaticBodyComponent.h"
#include "TriggerComponent.h"

AItemMagnetObject::AItemMagnetObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_root = (USceneComponent*)RootComponent;
    this->m_magnetMoveRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MagnetRoot"));
    this->m_attractDirectionRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AttractionDirectionRoot"));
    this->m_staticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->m_attractRangeMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("NS_FX_Item_Magnet_Area01_Mesh"));
    this->m_attractTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("AttractCarTrigger"));
    this->m_hitTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("HitCarTrigger"));
    this->m_staticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("StaticBody"));
    this->m_movement = CreateDefaultSubobject<UGOCMovement>(TEXT("UGOCMovement"));
    this->m_attractRangeEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_FX_Item_Magnet_Area01"));
    this->m_hitCollisionEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_FX_Item_Magnet_HitCollision01"));
    this->m_hitBreakEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_FX_Item_Magnet_Broken01"));
    this->m_hitAttachEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_FX_Item_Magnet_Hit01"));
    this->m_hitOnSurfaceSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_HitOnGround"));
    this->m_hitBreakSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_HitBreak"));
    this->m_hitAttachSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_HitAttach"));
    this->m_attachCurve = NULL;
    this->m_attractionRadius = 15.00f;
    this->m_holderInvencibleTime = 1.50f;
    this->m_attachMotionTime = 0.50f;
    this->m_fallingDetectingOffsetFront = 0.00f;
    this->m_fallingDetectingOffsetFront_ToFlight = 0.00f;
    this->m_attachFallDownTime = 0.20f;
    this->m_radius = 1.00f;
    this->m_sinkLength = 0.30f;
    this->m_landCalcUpRayLength = 0.00f;
    this->m_restitutionCoffi = 0.40f;
    this->SE_HitGroundNormal = NULL;
    this->SE_HitGroundWater = NULL;
    this->Effect_AttractDirection = NULL;
    this->m_attractDirectionRoot->SetupAttachment(RootComponent);
    this->m_attractRangeEffect->SetupAttachment(m_magnetMoveRoot);
    this->m_attractRangeMeshComponent->SetupAttachment(m_attractRangeEffect);
    this->m_attractTrigger->SetupAttachment(m_magnetMoveRoot);
    this->m_hitAttachEffect->SetupAttachment(m_staticMeshComponent);
    this->m_hitAttachSound->SetupAttachment(m_staticMeshComponent);
    this->m_hitBreakEffect->SetupAttachment(m_staticMeshComponent);
    this->m_hitBreakSound->SetupAttachment(m_magnetMoveRoot);
    this->m_hitCollisionEffect->SetupAttachment(m_magnetMoveRoot);
    this->m_hitOnSurfaceSound->SetupAttachment(m_magnetMoveRoot);
    this->m_hitTrigger->SetupAttachment(m_staticMeshComponent);
    this->m_magnetMoveRoot->SetupAttachment(RootComponent);
    this->m_staticBody->SetupAttachment(m_staticMeshComponent);
    this->m_staticMeshComponent->SetupAttachment(m_magnetMoveRoot);
}

void AItemMagnetObject::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}


