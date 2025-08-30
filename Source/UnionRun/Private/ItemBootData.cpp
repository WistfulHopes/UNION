#include "ItemBootData.h"

FItemBootData::FItemBootData() {
    this->ItemId = EItemId::NonItem;
    this->ItemRarityType = EItemRarityType::Normal;
    this->StartForwardDelay = 0.00f;
    this->StartBackwardDelay = 0.00f;
}

