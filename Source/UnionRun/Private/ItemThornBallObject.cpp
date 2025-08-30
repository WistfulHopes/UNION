#include "ItemThornBallObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "UnionStaticMeshComponent.h"
#include "ItemStaticBodyComponent.h"
#include "TriggerComponent.h"

AItemThornBallObject::AItemThornBallObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_staticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->m_movement = CreateDefaultSubobject<UGOCMovement>(TEXT("UGOCMovement"));
    this->m_triggerComponent = CreateDefaultSubobject<UTriggerComponent>(TEXT("UTriggerComponent"));
    this->m_staticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("StaticBody"));
    this->m_holderInvencibleTime = 0.50f;
    this->m_largeTypeScale = 1.00f;
    this->m_fallingDetectingOffsetFront = 0.00f;
    this->m_fallingDetectingOffsetFront_ToFlight = 0.00f;
    this->m_radius = 1.00f;
    this->m_sinkLength = 0.30f;
    this->m_restitutionCoffi = 0.40f;
    this->m_floatingHeight = 100.00f;
    this->m_floatingAngularSpeed = 180.00f;
    this->m_staticBody->SetupAttachment(RootComponent);
    this->m_staticMeshComponent->SetupAttachment(RootComponent);
    this->m_triggerComponent->SetupAttachment(RootComponent);
}

void AItemThornBallObject::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}






float AItemThornBallObject::GetHitSpeedRatio() {
    return 0.0f;
}


