#include "PostEffectCollision.h"
#include "Components/SceneComponent.h"
#include "ECourseObjColType.h"
#include "GimmickStaticBodyComponent.h"

APostEffectCollision::APostEffectCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ColType = ECourseObjColType::PostEffectCollision;
    this->StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->bUseDirection = false;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}


