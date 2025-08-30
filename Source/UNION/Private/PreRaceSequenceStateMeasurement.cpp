#include "PreRaceSequenceStateMeasurement.h"
#include "EPreRaceSequenceState.h"

UPreRaceSequenceStateMeasurement::UPreRaceSequenceStateMeasurement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSequenceState = EPreRaceSequenceState::Measurement;
}

void UPreRaceSequenceStateMeasurement::GetLatencyScoreMap(TMap<FString, int32>& OutScoreMap) const {
}


