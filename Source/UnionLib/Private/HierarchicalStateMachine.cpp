#include "HierarchicalStateMachine.h"
#include "Components/ChildActorComponent.h"

AHierarchicalStateMachine::AHierarchicalStateMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildStateMachine"));
    this->ChildStateMachineComponent = (UChildActorComponent*)RootComponent;
    this->ChildStateMachine = NULL;
}

bool AHierarchicalStateMachine::SetNextStateUsingName(FName InNextStateName) {
    return false;
}

void AHierarchicalStateMachine::SetNextState(int32 InNextState) {
}

void AHierarchicalStateMachine::SetExitCode(int32 InExitCode) {
}

void AHierarchicalStateMachine::RegisterStateInfoMap(const TMap<int32, FHierarchicalStateMachineStateInfo>& InStateInfoMap) {
}

int32 AHierarchicalStateMachine::RegisterStateInfo(int32 InState, const FHierarchicalStateMachineStateInfo& InStateInfo) {
    return 0;
}

void AHierarchicalStateMachine::OnUpdate_Implementation(float InDeltaTime) {
}

void AHierarchicalStateMachine::OnInitialize_Implementation() {
}

void AHierarchicalStateMachine::OnFinalize_Implementation() {
}

bool AHierarchicalStateMachine::IsRunning() const {
    return false;
}

bool AHierarchicalStateMachine::IsInitialized() const {
    return false;
}

bool AHierarchicalStateMachine::IsFinalized() const {
    return false;
}

FString AHierarchicalStateMachine::GetStateNameAsString(int32 InState) const {
    return TEXT("");
}

FName AHierarchicalStateMachine::GetStateName(int32 InState) const {
    return NAME_None;
}

FString AHierarchicalStateMachine::GetStateMachineNameAsString() const {
    return TEXT("");
}

int32 AHierarchicalStateMachine::GetStateCount() const {
    return 0;
}

int32 AHierarchicalStateMachine::GetNextState() const {
    return 0;
}

int32 AHierarchicalStateMachine::GetExitCode() const {
    return 0;
}

float AHierarchicalStateMachine::GetCurrentStateTime() const {
    return 0.0f;
}

FString AHierarchicalStateMachine::GetCurrentStateNameAsString() const {
    return TEXT("");
}

FName AHierarchicalStateMachine::GetCurrentStateName() const {
    return NAME_None;
}

int32 AHierarchicalStateMachine::GetCurrentStateFrame() const {
    return 0;
}

int32 AHierarchicalStateMachine::GetCurrentState() const {
    return 0;
}

AHierarchicalStateMachine* AHierarchicalStateMachine::GetChildStateMachine() const {
    return NULL;
}

void AHierarchicalStateMachine::BuildHierarchicalStateMachineNames(TArray<FString>& OutStringArray) const {
}

int32 AHierarchicalStateMachine::AddStateInfo(const FHierarchicalStateMachineStateInfo& InStateInfo) {
    return 0;
}


