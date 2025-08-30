#include "UnionSplineActor.h"
#include "Components/SceneComponent.h"
#include "UnionSplineComponent.h"

AUnionSplineActor::AUnionSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Spline = CreateDefaultSubobject<UUnionSplineComponent>(TEXT("UnionSplineComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->Spline->SetupAttachment(RootComponent);
}


