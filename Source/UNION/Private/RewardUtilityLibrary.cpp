#include "RewardUtilityLibrary.h"

URewardUtilityLibrary::URewardUtilityLibrary() {
}

void URewardUtilityLibrary::SetRewardItemIconTexture(ERewardType rewardType, int32 rewardId, UImage* ImageWidget) {
}

void URewardUtilityLibrary::SetRewardForAchievement(const FRewardAchievementData& AchievementData) {
}

bool URewardUtilityLibrary::SetReward(ERewardType InRewardType, int32 InRewardId, int32 InRewardNum) {
    return false;
}

void URewardUtilityLibrary::SetRaceCountData(FGadgetRaceCountData InData) {
}

bool URewardUtilityLibrary::IsReleasedReward(ERewardType InRewardType, int32 InRewardId) {
    return false;
}

void URewardUtilityLibrary::GetWinRivalDonpaTicket(const int32 InRivalLevel, const EMenuSpeedClassId InSpeedClassId, const bool bInStrong, const bool bBonusUpChallenge, int32& OutDonpaTicket, int32& OutAddBonus) {
}

FText URewardUtilityLibrary::GetRewardTypeText(ERewardType rewardType) {
    return FText::GetEmpty();
}

FText URewardUtilityLibrary::GetRewardItemNameText(ERewardType rewardType, int32 InRewardId, int32 rewardNum) {
    return FText::GetEmpty();
}

UTexture2D* URewardUtilityLibrary::GetRewardItemIconTexture(ERewardType rewardType, int32 rewardId, bool bIsBigIcon) {
    return NULL;
}

int32 URewardUtilityLibrary::GetRewardItemCount(ERewardType rewardType, int32 rewardId) {
    return 0;
}

ERewardAchievementType URewardUtilityLibrary::GetRewardAchievementTypeByDriverId(UDataTable* RewardAchievementDriverDataTable, ERewardAchievementDriverType InRewardAchievementDriverType, EDriverId InDriverId) {
    return ERewardAchievementType::RivalFirstWin;
}

FGadgetRaceCountData URewardUtilityLibrary::GetRaceCountIndexData(UDataTable* RacecountDataTable, int32 InIndex) {
    return FGadgetRaceCountData{};
}

TArray<EGadgetId> URewardUtilityLibrary::GetRaceCountGadgetIDs(int32 InRaceCount, UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable) {
    return TArray<EGadgetId>();
}

FGadgetRaceCountData URewardUtilityLibrary::GetRaceCountData() {
    return FGadgetRaceCountData{};
}

int32 URewardUtilityLibrary::GetNumRewardRivalWinDonpaTicket(int32 RivalLevel, EMenuSpeedClassId SpeedClassId) {
    return 0;
}

int32 URewardUtilityLibrary::GetGadgetTotalNextRaceCount(int32 InIndex, UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable) {
    return 0;
}

bool URewardUtilityLibrary::GetGadgetRaceCountData(int32 TotalRaceCount, UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable, FGadgetRaceCountData& OutRaceCountData, int32& OutIndex) {
    return false;
}

int32 URewardUtilityLibrary::GetGadgetPlateRewardRaceCount(UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable) {
    return 0;
}

int32 URewardUtilityLibrary::GetGadgetPlateRaceCount(UDataTable* GadgetPlateDataTable) {
    return 0;
}

int32 URewardUtilityLibrary::GetGadgetNextRaceCount(int32 TotalRaceCount, UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable) {
    return 0;
}

int32 URewardUtilityLibrary::GetGadgetCurrentRaceCount(int32 TotalRaceCount, UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable) {
    return 0;
}

bool URewardUtilityLibrary::FindNumRewardRivalWinDonpaTicket(int32 RivalLevel, EMenuSpeedClassId SpeedClassId, FRewardRedStarRingHonorTableRow& OutData) {
    return false;
}

bool URewardUtilityLibrary::CheckRewardItemCountDisplay(ERewardType rewardType) {
    return false;
}

bool URewardUtilityLibrary::CheckDisplayReward(ERewardType rewardType, int32 rewardId) {
    return false;
}


