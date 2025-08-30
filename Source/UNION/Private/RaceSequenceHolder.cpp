#include "RaceSequenceHolder.h"

ARaceSequenceHolder::ARaceSequenceHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ARaceSequenceHolder::StopForceFeedbackLocalPlayerAll() {
}

bool ARaceSequenceHolder::IsSelectMenuRetry() const {
    return false;
}

EGameModeId ARaceSequenceHolder::GetNextGameMode() const {
    return EGameModeId::None;
}

int32 ARaceSequenceHolder::GetEndIndexForTimeTrial() const {
    return 0;
}

int32 ARaceSequenceHolder::GetEndIndexForParty() const {
    return 0;
}

int32 ARaceSequenceHolder::GetEndIndexForMatchRace() const {
    return 0;
}

int32 ARaceSequenceHolder::GetEndIndexForGrandPrix() const {
    return 0;
}

int32 ARaceSequenceHolder::GetEndIndexForDebugModeMatchRace() const {
    return 0;
}

int32 ARaceSequenceHolder::DoCategorizeMenuSelect() {
    return 0;
}


