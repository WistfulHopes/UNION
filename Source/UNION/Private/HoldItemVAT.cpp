#include "HoldItemVAT.h"
#include "UnionVATMeshComponent.h"

AHoldItemVAT::AHoldItemVAT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UnionVATMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("UnionVATMeshComponent"));
    this->UnionVATMeshComponent->SetupAttachment(RootComponent);
}

void AHoldItemVAT::SetupComponent(UStaticMesh* StaticMesh, TArray<UMaterialInterface*> Materials, int32 StartIndex) {
}


