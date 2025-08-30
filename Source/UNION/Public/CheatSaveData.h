#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDriverId.h"
#include "CheatSaveData.generated.h"

UCLASS(Blueprintable)
class UCheatSaveData : public UObject {
    GENERATED_BODY()
public:
    UCheatSaveData();

    UFUNCTION(BlueprintCallable, Exec)
    void ShowRaceStats(int32 InStatsIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetUserNiceCount(int32 InNiceCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void SetupOnlineCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDriverSelectableAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDriverSelectable(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDriverProperty(EDriverId InDriverId, bool IsSelectable, bool IsNew);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void SetAllTipsRead();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void ForceSetFinishedAdvertiseLogoFlow();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearNoticeCheckTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearDriverNew(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddRaceStats(int32 InStatsIndex, int32 Value);
    
};

