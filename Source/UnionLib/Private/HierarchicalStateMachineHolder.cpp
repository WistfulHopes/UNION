#include "HierarchicalStateMachineHolder.h"
#include "Components/ChildActorComponent.h"

AHierarchicalStateMachineHolder::AHierarchicalStateMachineHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("RootStateMachine"));
    this->bAutoActivateStateMachine = true;
    this->RootStateMachine = NULL;
    this->RootStateMachineComponent = (UChildActorComponent*)RootComponent;
}

void AHierarchicalStateMachineHolder::OnFinalize_Implementation() {
}

bool AHierarchicalStateMachineHolder::IsStateMachineActive() const {
    return false;
}

AHierarchicalStateMachine* AHierarchicalStateMachineHolder::GetRootStateMachine() const {
    return NULL;
}

void AHierarchicalStateMachineHolder::ActivateStateMachine() {
}


