#include "RespotObject.h"
#include "Components/SceneComponent.h"
#include "ECourseObjColType.h"
#include "StaticBodyComponent.h"

ARespotObject::ARespotObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ColType = ECourseObjColType::Respot;
    this->_bColliderParamUpdate = false;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBody"));
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}

void ARespotObject::UpdateRespotMatrix(const FTransform& NewTransform) {
}

void ARespotObject::SetRespotType() {
}

void ARespotObject::SetRespotMatrix() {
}


