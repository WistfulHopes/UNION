#include "RewardDialogParameter.h"

FRewardDialogParameter::FRewardDialogParameter() {
    this->Texture = NULL;
    this->rewardType = ERewardType::GadgetFragment;
    this->Price = 0;
    this->bIsBuyType = false;
    this->bIsVisibleTicket = false;
}

