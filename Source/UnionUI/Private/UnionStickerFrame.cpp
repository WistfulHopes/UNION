#include "UnionStickerFrame.h"
#include "Components/StaticMeshComponent.h"

AUnionStickerFrame::AUnionStickerFrame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
}

void AUnionStickerFrame::AddStaticMeshComponent() {
}


