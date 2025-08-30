#include "GimmickMoai.h"
#include "Components/SceneComponent.h"

AGimmickMoai::AGimmickMoai(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}


