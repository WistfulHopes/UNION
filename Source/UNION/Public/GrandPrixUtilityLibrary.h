#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGrandPrixEndingId.h"
#include "EGrandPrixId.h"
#include "EMenuSpeedClassId.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "GrandPrixUtilityLibrary.generated.h"

UCLASS(Blueprintable)
class UNION_API UGrandPrixUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGrandPrixUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnloadCommonData();
    
    UFUNCTION(BlueprintCallable)
    static void SetGrandPrixLastPlayedMenuSpeedClassId(const EMenuSpeedClassId SetClassId);
    
    UFUNCTION(BlueprintCallable)
    static void LoadCommonData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGrandPrixOpened(EGrandPrixId GrandPrixId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGrandPrixEndingCleared(EGrandPrixEndingId EndingId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFixedGrandPrix(EGrandPrixId GrandPrixId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClearedNormalGrandPrix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBonusUpChallenge(const uint8 NormalRivalLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasUnclearedGrandPrixEnding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalWinRewardEventThreshold();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalWinFirstRewardEventThreshold();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetRivalLevelMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalDominationTargetCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalDominationCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<bool> GetRedStarRingAcquisition(const EStageId InStageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetPowerRivalAddLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetMaxRivalLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetMaxNormalRivalLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMenuSpeedClassId GetGrandPrixLastPlayedMenuSpeedClassId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMenuSpeedClassId GetGrandPrixLastFocusedMenuSpeedClassId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESpeedClassId GetGrandPrixLastFocusedClassId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetBlankIconHiddenCount();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckOpenSuperSonicSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckGrandPrixRankEarnPointBonusExists();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EGrandPrixId> CalcSelectableGrandPrixIds();
    
};

