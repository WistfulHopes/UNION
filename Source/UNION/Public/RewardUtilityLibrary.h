#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "EGadgetId.h"
#include "EMenuSpeedClassId.h"
#include "ERewardAchievementDriverType.h"
#include "ERewardAchievementType.h"
#include "ERewardType.h"
#include "RewardRedStarRingHonorTableRow.h"
#include "GadgetRaceCountData.h"
#include "RewardAchievementData.h"
#include "RewardUtilityLibrary.generated.h"

class UDataTable;
class UImage;
class UTexture2D;

UCLASS(Blueprintable)
class UNION_API URewardUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URewardUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetRewardItemIconTexture(ERewardType rewardType, int32 rewardId, UImage* ImageWidget);
    
    UFUNCTION(BlueprintCallable)
    static void SetRewardForAchievement(const FRewardAchievementData& AchievementData);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReward(ERewardType InRewardType, int32 InRewardId, int32 InRewardNum);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceCountData(FGadgetRaceCountData InData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReleasedReward(ERewardType InRewardType, int32 InRewardId);
    
    UFUNCTION(BlueprintCallable)
    static void GetWinRivalDonpaTicket(const int32 InRivalLevel, const EMenuSpeedClassId InSpeedClassId, const bool bInStrong, const bool bBonusUpChallenge, int32& OutDonpaTicket, int32& OutAddBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRewardTypeText(ERewardType rewardType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRewardItemNameText(ERewardType rewardType, int32 InRewardId, int32 rewardNum);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetRewardItemIconTexture(ERewardType rewardType, int32 rewardId, bool bIsBigIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRewardItemCount(ERewardType rewardType, int32 rewardId);
    
    UFUNCTION(BlueprintCallable)
    static ERewardAchievementType GetRewardAchievementTypeByDriverId(UDataTable* RewardAchievementDriverDataTable, ERewardAchievementDriverType InRewardAchievementDriverType, EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable)
    static FGadgetRaceCountData GetRaceCountIndexData(UDataTable* RacecountDataTable, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EGadgetId> GetRaceCountGadgetIDs(int32 InRaceCount, UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGadgetRaceCountData GetRaceCountData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumRewardRivalWinDonpaTicket(int32 RivalLevel, EMenuSpeedClassId SpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGadgetTotalNextRaceCount(int32 InIndex, UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGadgetRaceCountData(int32 TotalRaceCount, UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable, FGadgetRaceCountData& OutRaceCountData, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGadgetPlateRewardRaceCount(UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGadgetPlateRaceCount(UDataTable* GadgetPlateDataTable);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGadgetNextRaceCount(int32 TotalRaceCount, UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGadgetCurrentRaceCount(int32 TotalRaceCount, UDataTable* RacecountDataTable, UDataTable* GadgetPlateDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindNumRewardRivalWinDonpaTicket(int32 RivalLevel, EMenuSpeedClassId SpeedClassId, FRewardRedStarRingHonorTableRow& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckRewardItemCountDisplay(ERewardType rewardType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckDisplayReward(ERewardType rewardType, int32 rewardId);
    
};

