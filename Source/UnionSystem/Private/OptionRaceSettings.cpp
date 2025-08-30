#include "OptionRaceSettings.h"

FOptionRaceSettings::FOptionRaceSettings() {
    this->RaceCamera = ERaceCameraType::Original;
    this->bFPS = false;
    this->TeamRank = ETeamRankAndMap::TeamRankAndMap;
    this->ItemInfo = EItemInfoVisible::Visible;
    this->bRaceSerif = false;
    this->bDriftAndTrick = false;
    this->bGadget = false;
    this->bRingAndMeter = false;
    this->bRank = false;
    this->bItemSlot = false;
}

