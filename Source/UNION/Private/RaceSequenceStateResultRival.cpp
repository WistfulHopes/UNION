#include "RaceSequenceStateResultRival.h"
#include "ERaceSequenceState.h"

URaceSequenceStateResultRival::URaceSequenceStateResultRival(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("ResultRival");
    this->DefaultMenuState = ERaceSequenceState::ResultRival;
    this->RivalVehicle = NULL;
    this->RivalDriver = NULL;
    this->bPlayerIsTop = false;
    this->bRivalIsTop = false;
    this->RivalOutcome = EPerformRivalOutcome::Num;
    this->RivalDriverId = EDriverId::Sonic;
    this->RivalLevel = 1;
    this->RivalType = ERivalType::None;
    this->SpeedClassRivalLevel = 1;
    this->RivalLevelWidget = NULL;
}

float URaceSequenceStateResultRival::PlayRivalVoice(const EDriverId NewRivalDriverId, const EPerformRivalOutcome NewRivalOutcome, const bool bFinalRace) const {
    return 0.0f;
}

bool URaceSequenceStateResultRival::IsPowerRival() {
    return false;
}

bool URaceSequenceStateResultRival::IsBonusUpChallenge() {
    return false;
}


