#include "ItemShieldObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"

AItemShieldObject::AItemShieldObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->MovementRoot = CreateDefaultSubobject<UGOCMovement>(TEXT("MovementRoot"));
    this->CountDownTime = 2.00f;
}


