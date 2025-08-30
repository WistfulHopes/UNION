#include "TurntableComponent.h"

UTurntableComponent::UTurntableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TurnTableCue = NULL;
    this->IsTurnTableSEPlayed = true;
    this->TurntableDataTable = NULL;
}

void UTurntableComponent::SetRotationTime(float InRotationTime) {
}

void UTurntableComponent::SetRotationByTurntableDataId(ETurntableDataId InId, bool bInImmediateReflection) {
}

void UTurntableComponent::SetRotation(const FTurntableData& InTurntableData, bool bInImmediateReflection) {
}

void UTurntableComponent::OnExit() {
}

bool UTurntableComponent::IsRotating() const {
    return false;
}

FTurntableData UTurntableComponent::GetCurrentTurntableData() const {
    return FTurntableData{};
}

void UTurntableComponent::AddToRotation(double InVal) {
}


