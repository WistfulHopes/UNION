#include "StickerUIData.h"

FStickerUIData::FStickerUIData() {
    this->IsEnabledColorChange = false;
    this->IsEnabledFreeScale = false;
    this->bIsExtraSticker = false;
    this->ExtraPattern = EExtraStickerPattern::Square;
    this->State = EStickerState::Selectable;
    this->bIsNew = false;
    this->bCanPurchase = false;
    this->Price = 0;
    this->bIsHiddenUntilUnlock = false;
}

