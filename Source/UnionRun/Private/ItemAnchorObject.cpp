#include "ItemAnchorObject.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ItemStaticBodyComponent.h"

AItemAnchorObject::AItemAnchorObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_root = (USceneComponent*)RootComponent;
    this->m_anchorRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AnchorRoot"));
    this->m_anchor = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("AnchorMesh"));
    this->M_Ring = CreateDefaultSubobject<UChildActorComponent>(TEXT("TransportActor"));
    this->m_staticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("StaticBody"));
    this->m_swoopSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SwoopSound"));
    this->m_connectedSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ConnectedSound"));
    this->m_disconnectedSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("DisconnectedSound"));
    this->m_landingSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("LandingSound"));
    this->m_ringMaxSize = 1.00f;
    this->m_appearTime = 0.50f;
    this->m_ringWaitTime = 0.00f;
    this->m_disappearTime = 0.50f;
    this->m_appearCurve = NULL;
    this->m_anchorThrowTime = 1.50f;
    this->m_anchorThrowOverDistance = 10.00f;
    this->m_dropDownTime = 0.30f;
    this->m_dropDownCurve = NULL;
    this->m_swoopSoundDelayTime = 0.00f;
    this->m_dropDownDelayTime = 0.10f;
    this->m_maxScaleHeightThreashold = 0.00f;
    this->m_failedObjectRemainTime = 1.50f;
    this->m_failedCalcPostureTime = 0.50f;
    this->m_failedFallRaycastLength = 5000.00f;
    this->m_playEffectMoveSpeedThreshold = 10.00f;
    this->m_landingGroundSoundCue = NULL;
    this->m_landingWaterSoundCue = NULL;
    this->m_landingAirSoundCue = NULL;
    this->bDebugSelfTarget = false;
    this->bDebugDrawCollider = false;
    this->M_Ring->SetupAttachment(RootComponent);
    this->m_anchor->SetupAttachment(m_anchorRoot);
    this->m_anchorRoot->SetupAttachment(RootComponent);
    this->m_connectedSound->SetupAttachment(RootComponent);
    this->m_disconnectedSound->SetupAttachment(RootComponent);
    this->m_landingSound->SetupAttachment(RootComponent);
    this->m_swoopSound->SetupAttachment(RootComponent);
}


