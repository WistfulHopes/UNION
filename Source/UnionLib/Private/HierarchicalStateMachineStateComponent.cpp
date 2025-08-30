#include "HierarchicalStateMachineStateComponent.h"

UHierarchicalStateMachineStateComponent::UHierarchicalStateMachineStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRegistration = true;
    this->DefaultState = -1;
    this->bUpdateEvenWhenPaused = true;
    this->bNeedInitFadeOut = true;
    this->OwnerStateMachine = NULL;
}

void UHierarchicalStateMachineStateComponent::SetNextState(int32 InNextState) {
}

void UHierarchicalStateMachineStateComponent::SetNeedInitFadeOut(bool InNeed) {
}

void UHierarchicalStateMachineStateComponent::SetExitCode(int32 InExitCode) {
}

void UHierarchicalStateMachineStateComponent::RegisterState(int32 InOverrideState, FName InOverrideStateName) {
}

void UHierarchicalStateMachineStateComponent::OnUpdateState_Implementation(float InDeltaTime) {
}

void UHierarchicalStateMachineStateComponent::OnInitState_Implementation() {
}

void UHierarchicalStateMachineStateComponent::OnExitState_Implementation() {
}

FString UHierarchicalStateMachineStateComponent::GetStateNameAsString() const {
    return TEXT("");
}

FName UHierarchicalStateMachineStateComponent::GetStateName() const {
    return NAME_None;
}

int32 UHierarchicalStateMachineStateComponent::GetStateCount() const {
    return 0;
}

int32 UHierarchicalStateMachineStateComponent::GetState() const {
    return 0;
}

AHierarchicalStateMachine* UHierarchicalStateMachineStateComponent::GetOwnerStateMachine() const {
    return NULL;
}

int32 UHierarchicalStateMachineStateComponent::GetNextState() const {
    return 0;
}

bool UHierarchicalStateMachineStateComponent::GetNeedInitFadeOut() {
    return false;
}

int32 UHierarchicalStateMachineStateComponent::GetDefaultState_Implementation() const {
    return 0;
}

float UHierarchicalStateMachineStateComponent::GetCurrentStateTime() const {
    return 0.0f;
}

int32 UHierarchicalStateMachineStateComponent::GetCurrentStateFrame() const {
    return 0;
}

AHierarchicalStateMachine* UHierarchicalStateMachineStateComponent::GetChildStateMachine() const {
    return NULL;
}


