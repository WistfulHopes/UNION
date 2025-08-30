#include "CommonRaceMenuContentRow.h"

FCommonRaceMenuContentRow::FCommonRaceMenuContentRow() {
    this->contentId = ECommonRaceMenuContentId::Common_ToNextRound;
    this->IconId = ECommonRaceMenuIconId::None;
    this->bDoesNeedToPopupWarning = false;
}

