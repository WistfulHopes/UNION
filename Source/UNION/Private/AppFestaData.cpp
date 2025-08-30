#include "AppFestaData.h"

FAppFestaData::FAppFestaData() {
    this->bEnableBonusChanceData = false;
    this->DefaultRuleId = EGroupRaceRule::None;
    this->RuleLoopCount = 0;
    this->FixedRuleId = EGroupRaceRule::None;
    this->bFixedSpecialRule = false;
    this->MyTeamFriendCount = 0;
    this->AddDonpaTicketNum = 0;
    this->StreakRewardType = ERewardType::GadgetFragment;
    this->StreakRewardId = 0;
}

