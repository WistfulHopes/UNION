#include "UnionItemSkeletalMeshContainer.h"

UUnionItemSkeletalMeshContainer::UUnionItemSkeletalMeshContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdate = false;
}

void UUnionItemSkeletalMeshContainer::OnEndItem() {
}

void UUnionItemSkeletalMeshContainer::OnBeginItem(AActor* OwnerActor) {
}

void UUnionItemSkeletalMeshContainer::OnBeginGame() {
}


