#include "HoldItem.h"
#include "Components/SceneComponent.h"
#include "UnionAtomComponent.h"

AHoldItem::AHoldItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->UnionAtomComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("UnionAtom"));
    this->ItemId = EItemId::NonItem;
    this->bIsFromItemPool = false;
    this->UnionAtomComponent->SetupAttachment(RootComponent);
}







bool AHoldItem::IsWaitDestroy() const {
    return false;
}

UMeshComponent* AHoldItem::GetMeshComponent_Implementation() const {
    return NULL;
}


void AHoldItem::Create_Implementation(const FHoldItemCreateParam& Param) {
}


