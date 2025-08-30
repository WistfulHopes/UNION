#include "GimmickManipulatedShip.h"
#include "Components/SceneComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "SimpleMoveComponent.h"

AGimmickManipulatedShip::AGimmickManipulatedShip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->BodyStatickMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent"));
    this->SimpleMoveComponent = CreateDefaultSubobject<USimpleMoveComponent>(TEXT("ShipSimpleMoveComponent"));
    this->IdleMoveSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveSE"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->BodyStatickMeshComponent->SetupAttachment(RootComponent);
    this->IdleMoveSoundComponent->SetupAttachment(BodyStatickMeshComponent);
}


