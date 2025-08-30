#include "DialogueBillboardActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ADialogueBillboardActor::ADialogueBillboardActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BillboardPlane"));
    this->StaticMesh->SetupAttachment(RootComponent);
}

void ADialogueBillboardActor::ChangeTexture(TSoftObjectPtr<UTexture2D> NewTexture) {
}

void ADialogueBillboardActor::ChangeMaterial(TSoftObjectPtr<UMaterialInterface> NewMaterial) {
}


