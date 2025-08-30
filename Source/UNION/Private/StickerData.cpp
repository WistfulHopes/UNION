#include "StickerData.h"

FStickerData::FStickerData() {
    this->Version = 0;
    this->SortID = 0;
    this->bIsEnabledColorChange = false;
    this->bIsEnabledFreeScale = false;
    this->bIsDLC = false;
    this->bIsExtra = false;
    this->ExtraPattern = EExtraStickerPattern::Square;
    this->bIsEnabled = false;
    this->bIsDefault = false;
    this->bIsHiddenUntilUnlock = false;
    this->Price = 0;
    this->ChallengeType = EStickerChallenge::None;
}

