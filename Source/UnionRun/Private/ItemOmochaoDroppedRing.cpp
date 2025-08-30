#include "ItemOmochaoDroppedRing.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "StaticBodyComponent.h"
#include "SuckedMovement.h"

AItemOmochaoDroppedRing::AItemOmochaoDroppedRing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->MeshRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRoot"));
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->Movement = CreateDefaultSubobject<UGOCMovement>(TEXT("Movement"));
    this->SuckedMovement = CreateDefaultSubobject<USuckedMovement>(TEXT("SuckedMovement"));
    this->Lifetime = 3.00f;
    this->DropSpeed = 5.00f;
    this->RingRadius = 1.00f;
    this->DropDistance = 2.00f;
    this->RacerIndex = -1;
    this->bDebugDraw = false;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->MeshRoot->SetupAttachment(RootComponent);
    this->StaticBodyComponent->SetupAttachment(MeshRoot);
}


