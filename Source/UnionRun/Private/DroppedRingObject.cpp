#include "DroppedRingObject.h"
#include "Components/SceneComponent.h"
#include "StaticBodyComponent.h"
#include "SuckedMovement.h"

ADroppedRingObject::ADroppedRingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_suckedMovement = CreateDefaultSubobject<USuckedMovement>(TEXT("SuckedMovement"));
    this->m_modelMinScale = 0.10f;
    this->m_modelScaleTime = 0.20f;
    this->m_landOffset = 0.45f;
    this->m_lifeTime = 5.00f;
    this->m_blinkTime = 1.00f;
    this->m_blinkingIntervalTime = 0.05f;
    this->m_collisionInvalidTime = 0.30f;
    this->m_restitutionCoffi = 0.50f;
    this->m_boundCount = 3;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}

void ADroppedRingObject::HitRacer(int32 RacerIndex) {
}


