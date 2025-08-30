#include "UnionRaceCreateParam.h"

FUnionRaceCreateParam::FUnionRaceCreateParam() {
    this->GrandPrixId = EGrandPrixId::InValid;
    this->RaceParkPreset = EPartyRacePreset::Casual;
    this->RaceType = ERaceType::TravelRace;
    this->GameModeID = EGameModeId::None;
    this->LocalPlayerCount = 0;
    this->RacerCount = 0;
    this->SpeedClass = ESpeedClassId::NormalSpeed;
    this->RaceMirrorSetting = ERaceMirrorSetting::Normal;
    this->P2PRaceTimeOut = 0;
    this->P2PUnstableTime = 0;
}

