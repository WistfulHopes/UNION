#include "DroppedObjectBase.h"
#include "Components/SceneComponent.h"

ADroppedObjectBase::ADroppedObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}


