#include "RedStarRingObject.h"
#include "UnionStaticMeshComponent.h"
#include "StaticBodyComponent.h"
#include "SuckedMovement.h"

ARedStarRingObject::ARedStarRingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"))) {
    this->StaticMeshComponent = (UUnionStaticMeshComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->SuckedMovement = CreateDefaultSubobject<USuckedMovement>(TEXT("SuckedMovement"));
    this->RedStarRingIndex = 0;
    this->NormalMaterial = NULL;
    this->PickUpMaterial = NULL;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}


