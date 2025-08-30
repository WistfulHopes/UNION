#include "TransformRingObject.h"
#include "Components/SceneComponent.h"

ATransformRingObject::ATransformRingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->TransformRingType = ETransformRingType::Car;
    this->ScaleRate = 1.00f;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}

void ATransformRingObject::UpdateParallelMode(int32 RacerIndex) {
}

void ATransformRingObject::SetTransformRingType(ETransformRingType Type) {
}

void ATransformRingObject::SetRingScaleRate(float Rate) {
}

float ATransformRingObject::GetRingScaleRate() {
    return 0.0f;
}


