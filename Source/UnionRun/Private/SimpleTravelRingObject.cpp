#include "SimpleTravelRingObject.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"

ASimpleTravelRingObject::ASimpleTravelRingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->TravelRingType = ETravelRingType::NotEffect_Entrance;
    this->RingSizeType = ETravelRingSizeType::Middle;
    this->TransformRingType = ETransformRingType::Car;
    this->RingMeshBySize[0] = NULL;
    this->RingMeshBySize[1] = NULL;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void ASimpleTravelRingObject::SetTravelRingType(const ETravelRingType Type) {
}

void ASimpleTravelRingObject::SetTravelRingSizeType(const ETravelRingSizeType Type) {
}

void ASimpleTravelRingObject::SetTransformRingType(const ETransformRingType Type) {
}

ETravelRingType ASimpleTravelRingObject::GetTravelRingType() {
    return ETravelRingType::Invalid;
}

ETravelRingSizeType ASimpleTravelRingObject::GetTravelRingSizeType() {
    return ETravelRingSizeType::Small;
}

ETransformRingType ASimpleTravelRingObject::GetTransformRingType() {
    return ETransformRingType::Car;
}


