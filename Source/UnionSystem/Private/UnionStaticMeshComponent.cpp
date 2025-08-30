#include "UnionStaticMeshComponent.h"

UUnionStaticMeshComponent::UUnionStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
}

void UUnionStaticMeshComponent::ResetMaterialAll() {
}

bool UUnionStaticMeshComponent::IsNotChangedMaterial(int32 MaterialID) const {
    return false;
}

void UUnionStaticMeshComponent::ChangeMaterial(int32 MaterialID, bool bChange, UMaterialInterface* InMaterial) {
}


