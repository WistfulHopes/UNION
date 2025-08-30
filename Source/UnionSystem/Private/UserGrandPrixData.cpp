#include "UserGrandPrixData.h"

FUserGrandPrixData::FUserGrandPrixData() {
    this->RivalWinRewardEventCount = 0;
    this->GrandPrixWinCount = 0;
    this->GrandPrixFinishesCount = 0;
    this->GrandPrixLeast1Play = false;
    this->GrandPrixFirstIrregularAppeared = false;
    this->bSpawnPowerRival = false;
    this->LastFocusedClassId = ESpeedClassId::NormalSpeed;
    this->LastFocusedMenuSpeedClassId = EMenuSpeedClassId::NormalSpeed;
    this->LastPlayedMenuSpeedClassId = EMenuSpeedClassId::NormalSpeed;
    this->OpenSuperSonicSpeed = false;
    this->OpenMirror = false;
    this->GrandPrixSelectTimeTrialLinkFirst = false;
    this->IsWinBeforeNonFixedGrandPrix = false;
}

