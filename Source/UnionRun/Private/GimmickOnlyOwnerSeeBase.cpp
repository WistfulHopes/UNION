#include "GimmickOnlyOwnerSeeBase.h"
#include "Components/SceneComponent.h"

AGimmickOnlyOwnerSeeBase::AGimmickOnlyOwnerSeeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}


