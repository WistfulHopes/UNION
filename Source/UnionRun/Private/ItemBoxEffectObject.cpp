#include "ItemBoxEffectObject.h"
#include "Components/SceneComponent.h"

AItemBoxEffectObject::AItemBoxEffectObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->EffectNormals.AddDefaulted(10);
    this->EffectDoubles.AddDefaulted(8);
    this->EffectSpecials.AddDefaulted(8);
    this->EffectiveRange = 30.00f;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}


