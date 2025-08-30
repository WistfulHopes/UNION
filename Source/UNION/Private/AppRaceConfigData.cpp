#include "AppRaceConfigData.h"

FAppRaceConfigData::FAppRaceConfigData() {
    this->LocalPlayerCount = 0;
    this->RacerCount = 0;
    this->GameModeID = EGameModeId::None;
    this->RaceType = ERaceType::TravelRace;
    this->ClassId = ESpeedClassId::NormalSpeed;
    this->MirrorSetting = ERaceMirrorSetting::Normal;
    this->OnlineRating = 0;
    this->OnlineRatingPrev = 0;
    this->OnlineRaceResultRank = 0;
    this->OnlineRaceResultWinCount = 0;
    this->GrandPrixId = EGrandPrixId::InValid;
    this->bTravelCourseManualSetEnabled = false;
    this->bTravelCourseScreenManualSetEnabled = false;
}

