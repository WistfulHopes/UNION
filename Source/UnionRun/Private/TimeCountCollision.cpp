#include "TimeCountCollision.h"
#include "Components/SceneComponent.h"
#include "StaticBodyComponent.h"

ATimeCountCollision::ATimeCountCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBody"));
    this->CollisionType = ETimeCountCollisionType::Start;
    this->DrawX = 0;
    this->DrawY = 35;
    this->m_bIsStartCollision = false;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}


