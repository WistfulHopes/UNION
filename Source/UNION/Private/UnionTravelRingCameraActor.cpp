#include "UnionTravelRingCameraActor.h"
#include "UnionTravelRingComponent.h"

AUnionTravelRingCameraActor::AUnionTravelRingCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionTravelRingComponent>(TEXT("Root"));
    this->RootScene_ = (UUnionTravelRingComponent*)RootComponent;
    this->TravelRingType_ = ETravelRingType::Invalid;
}


