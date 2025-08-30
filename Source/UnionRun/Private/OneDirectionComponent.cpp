#include "OneDirectionComponent.h"

UOneDirectionComponent::UOneDirectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstancedMesh = NULL;
    this->VisibleInGame = false;
    this->Interval = 300.00f;
}


