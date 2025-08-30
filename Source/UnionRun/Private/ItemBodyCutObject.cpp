#include "ItemBodyCutObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ItemStaticBodyComponent.h"
#include "TriggerComponent.h"

AItemBodyCutObject::AItemBodyCutObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_root = (USceneComponent*)RootComponent;
    this->m_meshRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRoot"));
    this->m_staticMesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMesh"));
    this->m_skeltal = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeltalMesh"));
    this->m_trigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("Trigger"));
    this->m_body = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("Body"));
    this->m_rollEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RollEffect"));
    this->m_sparkEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SparkEffect"));
    this->m_breakEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BreakEffect"));
    this->m_throwStartSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ThrowStartSound"));
    this->m_cuttingSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("CuttingSound"));
    this->m_hitCarSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("HitCarSound"));
    this->m_revertCarSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("RevertCarSound"));
    this->m_movement = CreateDefaultSubobject<UGOCMovement>(TEXT("Movement"));
    this->m_leftToRightCutAnim = NULL;
    this->m_hitCue = NULL;
    this->m_hitLocalCue = NULL;
    this->m_hitCuttingCue = NULL;
    this->m_hitCuttingLocalCue = NULL;
    this->m_homingLifeTime = 15.00f;
    this->m_keepHeight = 1.00f;
    this->m_throwFrontMoveCorrectionDistance = 5.00f;
    this->m_ignoreSelfTime = 1.00f;
    this->m_changeSpeedTimeToPathMove = 1.00f;
    this->m_changeSpeedTimeToHoming = 0.10f;
    this->m_toPathMaxTime = 1.00f;
    this->m_targetForwardDistance = 5.00f;
    this->m_targetForwardDistanceTime = 1.00f;
    this->m_targetForwardRotateAddSpeed = 720.00f;
    this->m_targetForwardRotateMaxSpeed = 1080.00f;
    this->m_fallSpeed = 9.80f;
    this->m_fallSpeedMax = 60.00f;
    this->m_fallSpeedOnPath = 9.80f;
    this->m_fallSpeedMaxOnPath = 60.00f;
    this->m_homingDistance = 30.00f;
    this->m_HomingDistancePath = 30.00f;
    this->m_moveTargetHorizontalTime = 0.15f;
    this->m_moveTargetVerticalTime = 0.10f;
    this->m_keepAroundTime = 1.00f;
    this->m_moveRotSpeed = 15.00f;
    this->m_beforeCuttingRotSpeed = 150.00f;
    this->m_canPlayBreakEffectTimeAfterCut = 0.00f;
    this->m_rollEffectActivateThreshold = 3.00f;
    this->m_playRecoverEffectRemainTime = 1.00f;
    this->m_debugSelfTarget = false;
    this->m_body->SetupAttachment(m_meshRoot);
    this->m_breakEffect->SetupAttachment(m_meshRoot);
    this->m_cuttingSound->SetupAttachment(RootComponent);
    this->m_hitCarSound->SetupAttachment(RootComponent);
    this->m_meshRoot->SetupAttachment(RootComponent);
    this->m_rollEffect->SetupAttachment(m_meshRoot);
    this->m_skeltal->SetupAttachment(m_meshRoot);
    this->m_sparkEffect->SetupAttachment(RootComponent);
    this->m_staticMesh->SetupAttachment(m_meshRoot);
    this->m_throwStartSound->SetupAttachment(RootComponent);
    this->m_trigger->SetupAttachment(m_meshRoot);
}

void AItemBodyCutObject::OnTriggerConflict(const FHitTriggerInfo& HitInfo) {
}


