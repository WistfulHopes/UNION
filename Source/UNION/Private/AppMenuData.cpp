#include "AppMenuData.h"

FAppMenuData::FAppMenuData() {
    this->bFromRace = false;
    this->bBackToTitle = false;
    this->bBackToTopMenu = false;
    this->LastSelectedRaceMenu = ECommonRaceMenuContentId::Common_ToNextRound;
    this->SelectedTopMenuPlayMode = ETopMenuPlayMode::None;
    this->LastPlayFestaRuleId = EGroupRaceRule::None;
    this->bNewMachineParts = false;
    this->MenuSpeedClassId = EMenuSpeedClassId::NormalSpeed;
    this->LastChoiceRivalDriverId = EDriverId::Sonic;
    this->LastChoiceRivalType = ERivalType::None;
    this->LastChoiceRivalLevel = 0;
    this->BaseRivalLevel = 0;
    this->NeedsDonpaTicketForRaceRetry = 0;
    this->bIsSubMenuOnlineMode = false;
    this->bIsConfirmedNoticeStreamingInstall = false;
    this->bTryGetCompensation = false;
}

