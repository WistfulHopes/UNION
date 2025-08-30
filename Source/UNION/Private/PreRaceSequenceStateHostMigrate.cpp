#include "PreRaceSequenceStateHostMigrate.h"
#include "EPreRaceSequenceState.h"

UPreRaceSequenceStateHostMigrate::UPreRaceSequenceStateHostMigrate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSequenceState = EPreRaceSequenceState::HostMigration;
}

void UPreRaceSequenceStateHostMigrate::SetLatencyScoreMap(const TMap<FString, int32>& InScoreMap) {
}

void UPreRaceSequenceStateHostMigrate::SetHostCandidateUserId(const TArray<FString>& InUserIdArray) {
}


