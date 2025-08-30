#include "PerformRivalUtils.h"

UPerformRivalUtils::UPerformRivalUtils() {
}

EPerformRivalMode UPerformRivalUtils::GetPerformRivalMode(const EDriverId PlayerDriverId) {
    return EPerformRivalMode::PerformFirst;
}

FSoftObjectPath UPerformRivalUtils::GetLipSyncAnimationPath(const EDriverId ID, const ERivalLipSyncType Type, const EDriverId RivalId) {
    return FSoftObjectPath{};
}

EPerformRivalInteractionType UPerformRivalUtils::GetFirstPerformRivalInteractionType(const EDriverId PlayerDriverId, const EDriverId RivalDriverId) {
    return EPerformRivalInteractionType::Taunt;
}

EPerformRivalInteractionType UPerformRivalUtils::GetFirstPerformPlayerInteractionType(const EDriverId PlayerDriverId, const EDriverId RivalDriverId) {
    return EPerformRivalInteractionType::Taunt;
}

EPerformRivalInteractionType UPerformRivalUtils::GetFinalPerformRivalInteractionType(const EDriverId RivalDriverId, const EPerformRivalOutcome Outcome) {
    return EPerformRivalInteractionType::Taunt;
}

EPerformRivalOutcome UPerformRivalUtils::GetCurrentRivalOutcome(const int32 RivalRacerIndex) {
    return EPerformRivalOutcome::RivalLose;
}


