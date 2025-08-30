#include "ItemBlackBombBaseObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ItemStaticBodyComponent.h"
#include "TriggerComponent.h"

AItemBlackBombBaseObject::AItemBlackBombBaseObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MainRoot"));
    this->m_root = (USceneComponent*)RootComponent;
    this->m_meshRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRoot"));
    this->m_staticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Mesh"));
    this->m_movement = CreateDefaultSubobject<UGOCMovement>(TEXT("Movement"));
    this->m_trigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("HitTrigger"));
    this->m_sensorTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("SensorTrigger"));
    this->m_staticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("StaticBody"));
    this->m_explosionEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ExplosionEffect"));
    this->m_rollSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("RollSound"));
    this->m_blinkSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("BlinkSound"));
    this->m_explosionSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ExplosionSound"));
    this->m_levelUpSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("LevelUpSound"));
    this->m_explosionTime = 10.00f;
    this->m_sensorSize = 0.00f;
    this->m_explosionSize = 1.00f;
    this->m_explosionEffectSize = 1.00f;
    this->m_throwFrontMoveCorrectionDistance = 15.00f;
    this->m_invincibleFromAttackItem = false;
    this->m_canReflectWall = false;
    this->m_maxReflectNum = 0;
    this->m_canBreakObject = false;
    this->m_canCrushCar = false;
    this->m_upgradeTime = -1.00f;
    this->m_explosionDamageTime = 0.50f;
    this->m_blinkEmissiveMaterialIndex = 0;
    this->m_blinkEffectPower = 10.00f;
    this->m_blinkEffectSpeed = 18.00f;
    this->m_blinkEffectSpeedFast = 36.00f;
    this->m_normalBlinkEffectTime = 1.00f;
    this->m_fastBlinkEffectTime = 4.00f;
    this->m_scaleTimeFront = 0.10f;
    this->m_scaleMinFront = 0.00f;
    this->m_reflectMeshRadius = 0.50f;
    this->m_reflectCenterHeightOffset = 0.50f;
    this->m_ignoreHolderTime = 0.10f;
    this->m_rotateRatio = 1.00f;
    this->m_disableBoundTime = 0.10f;
    this->m_slowBlinkSoundCue = NULL;
    this->m_fastBlinkSoundCue = NULL;
    this->m_rollGroundSoundCue = NULL;
    this->m_rollWaterSoundCue = NULL;
    this->m_rollSoundRaycastInterval = 0.25f;
    this->m_debugMoveControllerDraw = false;
    this->m_blinkSound->SetupAttachment(RootComponent);
    this->m_explosionEffect->SetupAttachment(RootComponent);
    this->m_levelUpSound->SetupAttachment(RootComponent);
    this->m_meshRoot->SetupAttachment(RootComponent);
    this->m_rollSound->SetupAttachment(RootComponent);
    this->m_sensorTrigger->SetupAttachment(RootComponent);
    this->m_staticBody->SetupAttachment(RootComponent);
    this->m_staticMeshComponent->SetupAttachment(m_meshRoot);
    this->m_trigger->SetupAttachment(RootComponent);
}

void AItemBlackBombBaseObject::OnTriggerConflict(const FHitTriggerInfo& HitInfo) {
}


