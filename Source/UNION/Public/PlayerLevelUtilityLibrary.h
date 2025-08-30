#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERewardRedStarRingType.h"
#include "EStageId.h"
#include "HonorCommendationData.h"
#include "RewardRedStarRingData.h"
#include "RewardRedStarRingHonorTableRow.h"
#include "PlayerLevelInfo.h"
#include "PlayerLevelUtilityLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNION_API UPlayerLevelUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayerLevelUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void UseDonpaTicket(int32 InUseTicket);
    
    UFUNCTION(BlueprintCallable)
    static void SetRedStarRing(int32 RedStarRingNum);
    
    UFUNCTION(BlueprintCallable)
    static void SetRatePoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    static void SetRateHighPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerTotalRaceCount(int32 InPlayerTotalRaceCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerLevel(int32 PlayerLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerFestaPoint(int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerAddRaceCount(int32 InAddCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocalDataFestaId(int32 festaId);
    
    UFUNCTION(BlueprintCallable)
    static void SetFinalResultFestaRanking_Empty();
    
    UFUNCTION(BlueprintCallable)
    static void SetFinalResultFestaRanking(int32 Ranking);
    
    UFUNCTION(BlueprintCallable)
    static void SetDonpaTicket(int32 DonpaTicketNum);
    
    UFUNCTION(BlueprintCallable)
    static void SaveResult(UDataTable* RewardRedStarRingDataTable, UDataTable* RewardRedStarRingHonorDataTable, const TArray<ERewardRedStarRingType>& RewardRedStarRingTypes, const TArray<FHonorCommendationData>& RSRHonorList, FPlayerLevelInfo& OutPlayerLevelInfo, TArray<FRewardRedStarRingData>& OutRedStarRingData, UDataTable* LevelUpDataTable);
    
    UFUNCTION(BlueprintCallable)
    static bool PreCheckLevelUp(int32 RedStarRingNum, UDataTable* LevelUpDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSetFinalResultFestaRanking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmptyFinalResultFestaRanking();
    
    UFUNCTION(BlueprintCallable)
    static void IncPlayerTotalRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static void IncPlayerAddRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUseDonpaTicket();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTotalDonpaTicket();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRSRDonpaTicket(UDataTable* RewardRedStarRingDataTable, const EStageId InStageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRequiredRedStarRingForLevelUp(int32 PlayerLevel, UDataTable* LevelUpDataTable);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRedStarRing();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRateHighPoint();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerTotalRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerLevel();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerFestaPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerAddRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLocalDataFestaId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFinalResultFestaRanking();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDonpaTicketMax();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDonpaTicket();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBeforePlayerRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static bool FindRewardRedStarRingHonorTableRow(UDataTable* RewardRedStarRingHonorTableRow, const FHonorCommendationData& HonorCommendationData, FRewardRedStarRingHonorTableRow& OutData);
    
    UFUNCTION(BlueprintCallable)
    static void ClearPlayerAddRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static void AddRedStarRing(int32 RedStarRingNum, FPlayerLevelInfo& OutPlayerLevelInfo, UDataTable* LevelUpDataTable);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerFestaPoint(int32 AddPoint);
    
    UFUNCTION(BlueprintCallable)
    static void AddDonpaTicket(int32 InAddTicket);
    
};

