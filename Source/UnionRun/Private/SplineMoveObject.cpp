#include "SplineMoveObject.h"
#include "Components/SceneComponent.h"
#include "UnionSplineMoveComponent.h"

ASplineMoveObject::ASplineMoveObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bInitTransform = false;
    this->SplineMoveComponent = CreateDefaultSubobject<UUnionSplineMoveComponent>(TEXT("SplineMoveComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}


