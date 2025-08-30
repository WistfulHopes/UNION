#include "RaceObjectSimpleAnimation.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"

ARaceObjectSimpleAnimation::ARaceObjectSimpleAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->TransFrequency = 0.00f;
    this->TransAmplitude = 0.00f;
    this->RotFrequency = 1.00f;
    this->RotAmplitude = 1.00f;
    this->bContinuousRotation = false;
    this->ScaleFrequency = 0.00f;
    this->ScaleAmplitude = 0.00f;
    this->OnlyUpdateWhenRendered = true;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void ARaceObjectSimpleAnimation::UpdateTransform() {
}


