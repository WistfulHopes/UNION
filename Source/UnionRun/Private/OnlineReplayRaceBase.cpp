#include "OnlineReplayRaceBase.h"

FOnlineReplayRaceBase::FOnlineReplayRaceBase() {
    this->Version = 0;
    this->FrameRate = ERaceFrameRate::None;
    this->GameMode = EGameModeId::None;
    this->RaceType = ERaceType::TravelRace;
    this->SpeedClass = ESpeedClassId::NormalSpeed;
    this->RacerCount = 0;
    this->MatchCount = 0;
}

