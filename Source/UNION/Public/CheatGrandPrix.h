#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDriverId.h"
#include "EGrandPrixEndingId.h"
#include "EGrandPrixId.h"
#include "EMenuSpeedClassId.h"
#include "EStageId.h"
#include "CheatGrandPrix.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatGrandPrix : public UObject {
    GENERATED_BODY()
public:
    UCheatGrandPrix();

    UFUNCTION(BlueprintCallable, Exec)
    void SetSpawnPowerRivalFlag(const bool SetValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSetGrandPrixLeast1Play(bool bFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void SetRivalLevelDownUIFlag(const EMenuSpeedClassId MenuSpeedClassId, const bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayedAnotherStageAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayedAnotherStage(EStageId StageId, bool on);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOpenSuperSonicSpeed(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOpenMirror(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOpenFever(bool InFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGrandPrixOpenedAll(bool Opened);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGrandPrixOpened(EGrandPrixId GrandPrixId, bool Opened);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGrandPrixALLRivalLevel(const uint8 SetValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGrandPrixALLKnockDownRivalLevel(const uint8 SetValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetComplateRedStarRingStage(EStageId StageId, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetComplateRedStarRingPreAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetComplateRedStarRingAll(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetClearedGrandPrixEnding(EGrandPrixEndingId EndingId, bool on);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GP1();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BeforeOpenFever();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddRivalWinCount(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void AddALLRivalWinCount();
    
};

