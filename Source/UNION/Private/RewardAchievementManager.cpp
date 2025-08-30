#include "RewardAchievementManager.h"

URewardAchievementManager::URewardAchievementManager() {
    this->RewardAchievementDataTable = NULL;
    this->RewardAchievementDriverDataTable = NULL;
}

void URewardAchievementManager::SetRewardGetDisplayRequest(ERewardAchievementType InRewardAchievementType) {
}

void URewardAchievementManager::SetRewardAchievementRankMatch() {
}

void URewardAchievementManager::SetRewardAchievementGrandPrix() {
}

void URewardAchievementManager::SetRewardAchievementByType(ERewardAchievementType InRewardAchievementType, bool bInNoRequest) {
}

void URewardAchievementManager::SetRewardAchievementByDriverType(ERewardAchievementDriverType InRewardAchievementDriverType, bool bInNoRequest) {
}

void URewardAchievementManager::SetRewardAchievement() {
}

bool URewardAchievementManager::CheckSetRewardAchievement() const {
    return false;
}

bool URewardAchievementManager::CheckRewardAchievementDriverCondition(ERewardAchievementDriverType InRewardAchievementDriverType) {
    return false;
}

bool URewardAchievementManager::CheckRewardAchievementCondition(ERewardAchievementType InRewardAchievementType) {
    return false;
}

bool URewardAchievementManager::CheckGetRewardAchievement(ERewardAchievementType InRewardAchievementType) {
    return false;
}


