#include "GimmickStalactite.h"
#include "Components/SceneComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "StaticBodyComponent.h"

AGimmickStalactite::AGimmickStalactite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_locator = CreateDefaultSubobject<USceneComponent>(TEXT("MovementLocator"));
    this->m_skeletalMesh = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->m_body = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBody"));
    this->m_landingMarker = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("LandingMarker"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->m_body->SetupAttachment(m_locator);
    this->m_landingMarker->SetupAttachment(RootComponent);
    this->m_locator->SetupAttachment(RootComponent);
    this->m_skeletalMesh->SetupAttachment(m_locator);
}


