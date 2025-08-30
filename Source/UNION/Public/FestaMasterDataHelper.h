#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Common_FestaBonusChanceData.h"
#include "EDriverId.h"
#include "EGroupRaceRule.h"
#include "ERewardType.h"
#include "FestaPointRewardUIData.h"
#include "FestaRankingRewardUIData.h"
#include "FestaStreakRewardUIData.h"
#include "RestoredRule.h"
#include "FestaMasterDataHelper.generated.h"

class UAppDataManageSubsystem;
class UNetMasterDataManageSubsystem;

UCLASS(Blueprintable)
class UNION_API UFestaMasterDataHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFestaMasterDataHelper();

    UFUNCTION(BlueprintCallable)
    static void SetFestaFixedRule(UAppDataManageSubsystem* AppDataManageSubsystem, EGroupRaceRule InFixedRuleId, bool bInFixedSpecialRule);
    
    UFUNCTION(BlueprintCallable)
    static void SetFestaBonusChanceData(UAppDataManageSubsystem* AppDataManageSubsystem, bool bInEnable, UPARAM(Ref) FCommon_FestaBonusChanceData& InFestaBonusChanceData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSPFestaRule(UNetMasterDataManageSubsystem* MasterSubsystem, EGroupRaceRule ruleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFirstFestaEnded(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeForceOutsideFesta(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeForceFestaStart(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeForceFestaNotice(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStreakRewardArray(UNetMasterDataManageSubsystem* Subsystem, TArray<FFestaStreakRewardUIData>& OutRewardDataArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRewardId(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRewardConditionsId(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRankingRewardArray(UNetMasterDataManageSubsystem* Subsystem, TArray<FFestaRankingRewardUIData>& OutRewardDataArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetRankingCalcEndUTCTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetRankingCalcEndTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRaceRuleId(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPointTeamWldId(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPointRewardArray(UNetMasterDataManageSubsystem* Subsystem, TArray<FFestaPointRewardUIData>& OutRewardDataArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPointRaceOrderId(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPointBonusId(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetNoticeStartUTCTime_ONTFesta(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetNoticeStartUTCTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetNoticeStartTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFestaStreakReward(int32 InWinCount, const TArray<FFestaPointRewardUIData>& InStreakRewardArray, FFestaPointRewardUIData& OutStreakReward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFestaResultPointRewardArray(const TArray<FFestaPointRewardUIData>& InRewardDataArray, const int32 InFestaPoint, TArray<FFestaPointRewardUIData>& OutRewardDataArray, int32& OutIndexOffset, TArray<FFestaPointRewardUIData>& OutStreakRewardArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERewardType GetFestaPointRewardType(UNetMasterDataManageSubsystem* Subsystem, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFestaPointRewardNum(UNetMasterDataManageSubsystem* Subsystem, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFestaPointRewardId(UNetMasterDataManageSubsystem* Subsystem, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFestaPointReward(UNetMasterDataManageSubsystem* Subsystem, int32 Index, ERewardType& rewardType, int32& rewardId, int32& rewardNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFestaFixedRule(UAppDataManageSubsystem* AppDataManageSubsystem, EGroupRaceRule& OutFixedRuleId, bool& bOutFixedSpecialRule);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFestaCurrentRules(FDateTime CurrentUTCTime, UNetMasterDataManageSubsystem* MasterSubsystem, UAppDataManageSubsystem* AppDataManageSubsystem, FRestoredRule& CurrentRule, FDateTime& CurrentStartDisplayTime, FRestoredRule& NextRule, FDateTime& NextStartDisplayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFestaCollaboDriverId(UNetMasterDataManageSubsystem* Subsystem, EDriverId& OutDriverId);
    
    UFUNCTION(BlueprintCallable)
    static void GetFestaBonusChanceData(const UAppDataManageSubsystem* AppDataManageSubsystem, bool& bOutEnable, FCommon_FestaBonusChanceData& OutFestaBonusChanceData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetEventStartUTCTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetEventStartTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetEventEndUTCTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetEventEndTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBonusChanceId(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckStartNoticeDateTime_ONTFesta(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckStartNoticeDateTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNewFestaStarted(UNetMasterDataManageSubsystem* Subsystem, const FDateTime& CurrentTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckFestaStartDateTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckFestaRankingCalcEnded(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckFestaRankingCalcDateTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCurrentFestaEnded(UNetMasterDataManageSubsystem* Subsystem, const FDateTime& CurrentTime);
    
};

