#include "OnlineGroupInfo.h"

FOnlineGroupInfo::FOnlineGroupInfo() {
    this->Version = 0;
    this->GroupRaceRule = EGroupRaceRule::None;
    this->RaceSettingGroupMode = ERaceSettingGroupMode::Normal;
    this->RaceSettingGrouping = ERaceSettingGrouping::Individual;
}

