#include "ChallengeStatsUtility.h"

UChallengeStatsUtility::UChallengeStatsUtility() {
}

void UChallengeStatsUtility::SetChallengeStats(EChallengeId InChallengeId, int32 InValue) {
}

void UChallengeStatsUtility::SetChallengeProgressState(const EChallengeId InChallengeId, const EChallengeProgressState InProgressState) {
}

bool UChallengeStatsUtility::IsCompleteChallengeCategory(const EChallengeCategory InCategory) {
    return false;
}

bool UChallengeStatsUtility::IsCompleteChallenge(const EChallengeId InChallengeId) {
    return false;
}

bool UChallengeStatsUtility::IsChallengeCategoryNewIcon(const EChallengeCategory InCategory) {
    return false;
}

bool UChallengeStatsUtility::IsChallengeAcquiredStateCheck() {
    return false;
}

int32 UChallengeStatsUtility::GetSpecialChallengeClearCount() {
    return 0;
}

FChallengePointReward UChallengeStatsUtility::GetPointReward(int32 ItemGetBgIdx, int32 ItemGetPointIdx) {
    return FChallengePointReward{};
}

int32 UChallengeStatsUtility::GetChallengeStatsCount(const EChallengeId InChallengeId) {
    return 0;
}

FChallengeStatsData UChallengeStatsUtility::GetChallengeStats(const EChallengeId InChallengeId) {
    return FChallengeStatsData{};
}

EChallengeProgressState UChallengeStatsUtility::GetChallengeProgressState(const EChallengeId InChallengeId) {
    return EChallengeProgressState::NotAcquired;
}

int32 UChallengeStatsUtility::GetChallengeProgressCount() {
    return 0;
}

FChallengeStruct UChallengeStatsUtility::GetChallengeData(const EChallengeId InChallengeId) {
    return FChallengeStruct{};
}

EChallengeCategory UChallengeStatsUtility::GetChallengeCategory(const EChallengeId InId) {
    return EChallengeCategory::ECM_Race;
}

TArray<FChallengeStatsData> UChallengeStatsUtility::GetCategoryStats(const EChallengeCategory InCategory) {
    return TArray<FChallengeStatsData>();
}

int32 UChallengeStatsUtility::GetCategoryClearCount(const EChallengeCategory InCategory) {
    return 0;
}

TArray<FChallengeStruct> UChallengeStatsUtility::GetCategoryChallengeData(const EChallengeCategory InCategory) {
    return TArray<FChallengeStruct>();
}

TArray<EChallengeId> UChallengeStatsUtility::GetCategoryChallenge(const EChallengeCategory InCategory) {
    return TArray<EChallengeId>();
}

void UChallengeStatsUtility::CheckAllChallengeStats() {
}

void UChallengeStatsUtility::ChallengeProgressUpdateCategory(const EChallengeCategory InCategory) {
}

void UChallengeStatsUtility::AddChallengeStats(EChallengeId InChallengeId, int32 InValue) {
}


