#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOutputExecsPin_SuccessFailed.h"
#include "ERewardType.h"
#include "MCEventBonusData.h"
#include "SoundHandle.h"
#include "AppRacePlayerResultData.h"
#include "AppRaceResultData.h"
#include "ETopCountState.h"
#include "FestaResultRewardInfo.h"
#include "ResultCacheLobbyMemberData.h"
#include "RewardGetWindowParam.h"
#include "AppRaceResultDataAccessor.generated.h"

class UNetMasterDataManageSubsystem;
class UObject;

UCLASS(Blueprintable)
class UNION_API UAppRaceResultDataAccessor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppRaceResultDataAccessor();

    UFUNCTION(BlueprintCallable)
    static void SetResultSilenceSESoundHandle(const FSoundHandle& SoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static void SetResultRacerRatePoint(int32 RacerIndex, int32 RatePoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetRecord(int32 InPlayerIndex, int32 InNewRecord, bool bInForceUpdate, bool& bOutUpdated, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void SetRank(int32 InPlayerIndex, int32 InNewRank, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void SetOfflineResultForcePressed(bool bIsUse);
    
    UFUNCTION(BlueprintCallable)
    static void SetMCEventBonusData(const FMCEventBonusData MCEventBonusData);
    
    UFUNCTION(BlueprintCallable)
    static void SetFestaStreakReward(ERewardType rewardType, int32 rewardId);
    
    UFUNCTION(BlueprintCallable)
    static void SetFestaMyTeamFriendCount(int32 FriendCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetFestaAddDonpaTicketNum(int32 AddNum);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableResultSilenceSE(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetAppRaceResultData(const FAppRaceResultData& NewData);
    
    UFUNCTION(BlueprintCallable)
    static void SetAppRacePlayerResultData(int32 InPlayerIndex, const FAppRacePlayerResultData& InNewData, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void SaveFestaRewardItemData(UNetMasterDataManageSubsystem* MasterSubsystem, int32 RewardIndex, FRewardGetWindowParam& OutRewardGetWindowParam, bool bIsSaveReward);
    
    UFUNCTION(BlueprintCallable)
    static void RollbackResult();
    
    UFUNCTION(BlueprintCallable)
    static void ResetTeamBonusResultPoint();
    
    UFUNCTION(BlueprintCallable)
    static void ResetRaceResult();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTopCountWinnerRacer();
    
    UFUNCTION(BlueprintCallable)
    static void InitializeRaceResult();
    
    UFUNCTION(BlueprintCallable)
    static bool GetWinRivalTotalRankForPartyRace();
    
    UFUNCTION(BlueprintCallable)
    static bool GetWinRivalTotalRank();
    
    UFUNCTION(BlueprintCallable)
    static bool GetWinMyselfTotalRankForPartyRace();
    
    UFUNCTION(BlueprintCallable)
    static void GetTeamResultRankList(TArray<int32>& OutTeamRankList);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRivalTotalRank();
    
    UFUNCTION(BlueprintCallable)
    static void GetResultWinnerTeam(TArray<int32>& OutTeamNoList);
    
    UFUNCTION(BlueprintCallable)
    static void GetResultTopCountStateTeam(TArray<ETopCountState>& OutTopCountStateList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoundHandle GetResultSilenceSESoundHandle();
    
    UFUNCTION(BlueprintCallable)
    static float GetResultRankingForcePressedTime();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetResultRacerRatePoint(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static float GetResultNormalForcePressedTime();
    
    UFUNCTION(BlueprintCallable)
    static float GetResultForcePressedTime(const FString& KeyName);
    
    UFUNCTION(BlueprintCallable)
    static void GetResultCalcTeamPoint(TArray<int32>& OutCalcTeamPointList, int32& OutMaxPoint);
    
    UFUNCTION(BlueprintCallable)
    static void GetRecord(int32 InPlayerIndex, int32& OutRecord, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void GetRank(int32 InPlayerIndex, int32& OutRank, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetOnlineCacheLobbyMemberData(UObject* WorldContextObject, int32 OnlineIndex, FResultCacheLobbyMemberData& OutData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOfflineResultForcePressed();
    
    UFUNCTION(BlueprintCallable)
    static void GetFestaStreakReward(ERewardType& OutRewardType, int32& OutRewardId);
    
    UFUNCTION(BlueprintCallable)
    static void GetFestaResultRewardInfo(FFestaResultRewardInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFestaMyTeamFriendCount();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFestaAddDonpaTicketNum();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBestTotalRankRacerIndexInOnlinePlayer();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBestTotalRankInOnlinePlayer();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBestTotalRankInLocalPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAppRaceResultData(FAppRaceResultData& OutData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAppRacePlayerResultData_OnlineCache(UObject* WorldContextObject, int32 InRacerIndex, FAppRacePlayerResultData& OutData, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void GetAppRacePlayerResultData(int32 InPlayerIndex, FAppRacePlayerResultData& OutData, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void AddTeamResultPoint(int32 TeamIndex, int32 AddPoint);
    
    UFUNCTION(BlueprintCallable)
    static void AddTeamBonusResultPoint(int32 TeamIndex, int32 AddPoint);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> AddResultTeamPoint(const TArray<int32>& InTeamPointList, const TArray<int32>& InTeamPointList2);
    
};

