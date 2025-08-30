#include "FestaPointRewardUIData.h"

FFestaPointRewardUIData::FFestaPointRewardUIData() {
    this->rewardType = EFestaRewardType::None;
    this->rewardNumber = 0;
    this->itemType = ERewardType::GadgetFragment;
    this->ItemId = 0;
    this->Texture = NULL;
    this->IsDisplayItemCount = false;
    this->ItemCount = 0;
    this->Point = 0;
    this->IsLastNormalReward = false;
}

