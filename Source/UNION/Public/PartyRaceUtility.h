#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomRaceSetting.h"
#include "ECustomRaceSettingLine.h"
#include "EDriverId.h"
#include "EMachineId.h"
#include "EPartyRacePreset.h"
#include "ERaceSettingGrouping.h"
#include "ERewardType.h"
#include "ERivalTeamId.h"
#include "PartyRacePresetSetting.h"
#include "RewardRedStarRingHonorTableRow.h"
#include "PartyRaceMissionData.h"
#include "RewardAchievementData.h"
#include "PartyRaceUtility.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class UNION_API UPartyRaceUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPartyRaceUtility();

    UFUNCTION(BlueprintCallable)
    static void UpdateResultDataNoProgress();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateResultData();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateDonpaResultData();
    
    UFUNCTION(BlueprintCallable)
    static void SetRivalTeamIdAndWinCount(ERivalTeamId InTeamID, int32 InWinCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetRivalTeamCutinNextPlayRequested(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRivalTeamAllEliminatedCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void SetResultRivalTeamEliminated(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacersGroupingForPartyRace(ERaceSettingGrouping RaceSettingGrouping);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyRaceRivalExists(bool Exists);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyRaceCustomRivalExists(bool Exists);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyRaceClassSelected(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetLastCutinRivalTeamId(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomRuleFromPreset(const FPartyRacePresetSetting& RacePresetSetting, FCustomRaceSetting& RaceSetting);
    
    UFUNCTION(BlueprintCallable)
    static void ResetRivalTeamWinCount(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetRivalTeamEliminatedCount(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllRivalTeamWinCount();
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllRivalTeamEliminatedCount();
    
    UFUNCTION(BlueprintCallable)
    static FRewardAchievementData MakeResultRivalTeamRewardAchievementData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsResultRivalTeamPlayerWin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRacerAwardRivalTeamWin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPartyRaceRivalExists();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPartyRaceMissionExistsGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPartyRaceCustomRivalExists();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPartyRaceClassSelected();
    
    UFUNCTION(BlueprintCallable)
    static int32 IncRivalTeamWinCount(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable)
    static int32 IncRivalTeamEliminatedCount(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERivalTeamId GetSelectedRivalTeamId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalTeamWinRewardNecessaryWinCount(ERivalTeamId RivalTeamId, int32 EliminatedCount, int32 RewardIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRivalTeamWinRewardDisplayData(ERivalTeamId RivalTeamId, int32 EliminatedCount, int32 RewardIndex, ERewardType& OutRewardType, TSoftObjectPtr<UTexture2D>& OutRewardSoftTexture, int32& OutNumRewards);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRivalTeamWinRewardData(ERivalTeamId RivalTeamId, int32 EliminatedCount, int32 RewardIndex, ERewardType& OutRewardType, int32& OutRewardId, int32& OutNumRewards);
    
    UFUNCTION(BlueprintCallable)
    static void GetRivalTeamWinRacerAwardData(UDataTable* RaceParkHonorDataTable, int32 InRivalLevel, FRewardRedStarRingHonorTableRow& OutRewardHonor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalTeamWinCount(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRivalTeamName(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRivalTeamMainMembers(ERivalTeamId RivalTeamId, TArray<EDriverId>& OutDriverIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMachineId GetRivalTeamMachineId(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalTeamLevel(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERivalTeamId GetRivalTeamIdFromRaceRivalDriverIds();
    
    UFUNCTION(BlueprintCallable)
    static bool GetRivalTeamEliminatedRewardDisplayData(ERivalTeamId RivalTeamId, ERewardType& OutRewardType, TSoftObjectPtr<UTexture2D>& OutRewardSoftTexture, int32& OutNumRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalTeamEliminatedCount(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRivalTeamCutinNextPlayRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalTeamAllEliminatedCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERivalTeamId GetResultRivalTeamId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetResultRivalTeamEliminated();
    
    UFUNCTION(BlueprintCallable)
    static void GetPresetRuleDataTableRowFromPresetId(EPartyRacePreset PresetId, FPartyRacePresetSetting& RacePresetSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPartyRaceNumOccurringMissions();
    
    UFUNCTION(BlueprintCallable)
    static void GetPartyRaceMissionResultDisplayInfoBP(int32 MissionIndex, FName& OutMissionId, int32& OutScore, bool& OutCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPartyRaceMaxMissionsOccur();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumWinsNeededToEliminateRivalTeam(ERivalTeamId RivalTeamId, int32 EliminatedCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumRivalTeamWinReward();
    
    UFUNCTION(BlueprintCallable)
    static void GetMultiPlayBonusRacerAwardData(UDataTable* RaceParkHonorDataTable, FRewardRedStarRingHonorTableRow& OutRewardHonor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxRivalTeamLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERivalTeamId GetLastCutinRivalTeamId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentAdjustedRivalTeamLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAdjustedRivalTeamLevelByID(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable)
    static bool FindRivalTeamWinRewardDataByWinCount(ERivalTeamId RivalTeamId, int32 EliminatedCount, int32 winCount, ERewardType& OutRewardType, int32& OutRewardId, int32& OutNumRewards);
    
    UFUNCTION(BlueprintCallable)
    static bool FindPartyRaceMissionDataBP(const FName& MissionId, FPartyRaceMissionData& OutMissionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CountPrimalRivalTeams();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CountEliminatedPrimalRivalTeams();
    
    UFUNCTION(BlueprintCallable)
    static void ConvertCustomRaceSettingToPartyRacePresetSetting(const FCustomRaceSetting& RaceSetting, FPartyRacePresetSetting& RacePresetSetting);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSelectedRivalTeamId();
    
    UFUNCTION(BlueprintCallable)
    static void ChooseRivalTeamMembers(int32 NumMembers);
    
    UFUNCTION(BlueprintCallable)
    static ERivalTeamId ChooseRivalTeam();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckRule(ECustomRaceSettingLine Rule);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckGroupRule(int32 PlayerCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckDoingResultRivalTeamEliminatedEvent();
    
};

