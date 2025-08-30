#include "FestaMasterDataHelper.h"

UFestaMasterDataHelper::UFestaMasterDataHelper() {
}

void UFestaMasterDataHelper::SetFestaFixedRule(UAppDataManageSubsystem* AppDataManageSubsystem, EGroupRaceRule InFixedRuleId, bool bInFixedSpecialRule) {
}

void UFestaMasterDataHelper::SetFestaBonusChanceData(UAppDataManageSubsystem* AppDataManageSubsystem, bool bInEnable, FCommon_FestaBonusChanceData& InFestaBonusChanceData) {
}

bool UFestaMasterDataHelper::IsSPFestaRule(UNetMasterDataManageSubsystem* MasterSubsystem, EGroupRaceRule ruleId) {
    return false;
}

bool UFestaMasterDataHelper::IsFirstFestaEnded(UNetMasterDataManageSubsystem* Subsystem) {
    return false;
}

void UFestaMasterDataHelper::InitializeForceOutsideFesta(UNetMasterDataManageSubsystem* Subsystem) {
}

void UFestaMasterDataHelper::InitializeForceFestaStart(UNetMasterDataManageSubsystem* Subsystem) {
}

void UFestaMasterDataHelper::InitializeForceFestaNotice(UNetMasterDataManageSubsystem* Subsystem) {
}

bool UFestaMasterDataHelper::GetStreakRewardArray(UNetMasterDataManageSubsystem* Subsystem, TArray<FFestaStreakRewardUIData>& OutRewardDataArray) {
    return false;
}

int32 UFestaMasterDataHelper::GetRewardId(UNetMasterDataManageSubsystem* Subsystem) {
    return 0;
}

int32 UFestaMasterDataHelper::GetRewardConditionsId(UNetMasterDataManageSubsystem* Subsystem) {
    return 0;
}

bool UFestaMasterDataHelper::GetRankingRewardArray(UNetMasterDataManageSubsystem* Subsystem, TArray<FFestaRankingRewardUIData>& OutRewardDataArray) {
    return false;
}

FDateTime UFestaMasterDataHelper::GetRankingCalcEndUTCTime(UNetMasterDataManageSubsystem* Subsystem) {
    return FDateTime{};
}

FDateTime UFestaMasterDataHelper::GetRankingCalcEndTime(UNetMasterDataManageSubsystem* Subsystem) {
    return FDateTime{};
}

int32 UFestaMasterDataHelper::GetRaceRuleId(UNetMasterDataManageSubsystem* Subsystem) {
    return 0;
}

int32 UFestaMasterDataHelper::GetPointTeamWldId(UNetMasterDataManageSubsystem* Subsystem) {
    return 0;
}

bool UFestaMasterDataHelper::GetPointRewardArray(UNetMasterDataManageSubsystem* Subsystem, TArray<FFestaPointRewardUIData>& OutRewardDataArray) {
    return false;
}

int32 UFestaMasterDataHelper::GetPointRaceOrderId(UNetMasterDataManageSubsystem* Subsystem) {
    return 0;
}

int32 UFestaMasterDataHelper::GetPointBonusId(UNetMasterDataManageSubsystem* Subsystem) {
    return 0;
}

FDateTime UFestaMasterDataHelper::GetNoticeStartUTCTime_ONTFesta(UNetMasterDataManageSubsystem* Subsystem) {
    return FDateTime{};
}

FDateTime UFestaMasterDataHelper::GetNoticeStartUTCTime(UNetMasterDataManageSubsystem* Subsystem) {
    return FDateTime{};
}

FDateTime UFestaMasterDataHelper::GetNoticeStartTime(UNetMasterDataManageSubsystem* Subsystem) {
    return FDateTime{};
}

bool UFestaMasterDataHelper::GetFestaStreakReward(int32 InWinCount, const TArray<FFestaPointRewardUIData>& InStreakRewardArray, FFestaPointRewardUIData& OutStreakReward) {
    return false;
}

void UFestaMasterDataHelper::GetFestaResultPointRewardArray(const TArray<FFestaPointRewardUIData>& InRewardDataArray, const int32 InFestaPoint, TArray<FFestaPointRewardUIData>& OutRewardDataArray, int32& OutIndexOffset, TArray<FFestaPointRewardUIData>& OutStreakRewardArray) {
}

ERewardType UFestaMasterDataHelper::GetFestaPointRewardType(UNetMasterDataManageSubsystem* Subsystem, int32 Index) {
    return ERewardType::GadgetFragment;
}

int32 UFestaMasterDataHelper::GetFestaPointRewardNum(UNetMasterDataManageSubsystem* Subsystem, int32 Index) {
    return 0;
}

int32 UFestaMasterDataHelper::GetFestaPointRewardId(UNetMasterDataManageSubsystem* Subsystem, int32 Index) {
    return 0;
}

void UFestaMasterDataHelper::GetFestaPointReward(UNetMasterDataManageSubsystem* Subsystem, int32 Index, ERewardType& rewardType, int32& rewardId, int32& rewardNum) {
}

void UFestaMasterDataHelper::GetFestaFixedRule(UAppDataManageSubsystem* AppDataManageSubsystem, EGroupRaceRule& OutFixedRuleId, bool& bOutFixedSpecialRule) {
}

bool UFestaMasterDataHelper::GetFestaCurrentRules(FDateTime CurrentUTCTime, UNetMasterDataManageSubsystem* MasterSubsystem, UAppDataManageSubsystem* AppDataManageSubsystem, FRestoredRule& CurrentRule, FDateTime& CurrentStartDisplayTime, FRestoredRule& NextRule, FDateTime& NextStartDisplayTime) {
    return false;
}

void UFestaMasterDataHelper::GetFestaCollaboDriverId(UNetMasterDataManageSubsystem* Subsystem, EDriverId& OutDriverId) {
}

void UFestaMasterDataHelper::GetFestaBonusChanceData(const UAppDataManageSubsystem* AppDataManageSubsystem, bool& bOutEnable, FCommon_FestaBonusChanceData& OutFestaBonusChanceData) {
}

FDateTime UFestaMasterDataHelper::GetEventStartUTCTime(UNetMasterDataManageSubsystem* Subsystem) {
    return FDateTime{};
}

FDateTime UFestaMasterDataHelper::GetEventStartTime(UNetMasterDataManageSubsystem* Subsystem) {
    return FDateTime{};
}

FDateTime UFestaMasterDataHelper::GetEventEndUTCTime(UNetMasterDataManageSubsystem* Subsystem) {
    return FDateTime{};
}

FDateTime UFestaMasterDataHelper::GetEventEndTime(UNetMasterDataManageSubsystem* Subsystem) {
    return FDateTime{};
}

int32 UFestaMasterDataHelper::GetBonusChanceId(UNetMasterDataManageSubsystem* Subsystem) {
    return 0;
}

bool UFestaMasterDataHelper::CheckStartNoticeDateTime_ONTFesta(UNetMasterDataManageSubsystem* Subsystem) {
    return false;
}

bool UFestaMasterDataHelper::CheckStartNoticeDateTime(UNetMasterDataManageSubsystem* Subsystem) {
    return false;
}

bool UFestaMasterDataHelper::CheckNewFestaStarted(UNetMasterDataManageSubsystem* Subsystem, const FDateTime& CurrentTime) {
    return false;
}

bool UFestaMasterDataHelper::CheckFestaStartDateTime(UNetMasterDataManageSubsystem* Subsystem) {
    return false;
}

bool UFestaMasterDataHelper::CheckFestaRankingCalcEnded(UNetMasterDataManageSubsystem* Subsystem) {
    return false;
}

bool UFestaMasterDataHelper::CheckFestaRankingCalcDateTime(UNetMasterDataManageSubsystem* Subsystem) {
    return false;
}

bool UFestaMasterDataHelper::CheckCurrentFestaEnded(UNetMasterDataManageSubsystem* Subsystem, const FDateTime& CurrentTime) {
    return false;
}


