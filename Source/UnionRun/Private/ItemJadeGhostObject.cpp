#include "ItemJadeGhostObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"

AItemJadeGhostObject::AItemJadeGhostObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->MovementRoot = CreateDefaultSubobject<UGOCMovement>(TEXT("MovementRoot"));
    this->CountDownTime = 2.00f;
}


