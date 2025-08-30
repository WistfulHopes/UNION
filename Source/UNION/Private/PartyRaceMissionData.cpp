#include "PartyRaceMissionData.h"

FPartyRaceMissionData::FPartyRaceMissionData() {
    this->MissionRank = 0;
    this->MissionLotteryGroup = EPartyRaceMissionLotteryGroup::Individual;
    this->MissionType = EPartyRaceMissionType::Invalid;
    this->MissionParam = 0;
    this->rewardType = ERewardType::GadgetFragment;
    this->rewardId = 0;
    this->NumReward = 0;
}

