#include "UnionShortcutComponent.h"

UUnionShortcutComponent::UUnionShortcutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerRingActor_ = NULL;
    this->Source_ = NULL;
    this->Destination_ = NULL;
}


