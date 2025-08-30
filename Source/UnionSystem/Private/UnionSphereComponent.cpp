#include "UnionSphereComponent.h"

UUnionSphereComponent::UUnionSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
}


