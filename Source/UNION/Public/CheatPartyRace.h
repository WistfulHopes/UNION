#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERivalTeamId.h"
#include "CheatPartyRace.generated.h"

UCLASS(Blueprintable)
class UCheatPartyRace : public UObject {
    GENERATED_BODY()
public:
    UCheatPartyRace();

    UFUNCTION(BlueprintCallable, Exec)
    void SetRivalTeamWinCount(ERivalTeamId InTeamID, int32 InWinCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRivalTeamEliminatedCount(ERivalTeamId InTeamID, int32 InWinCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRivalTeamAndWin(ERivalTeamId InTeamID, int32 InWinCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllRivalTeamWinCount(int32 InWinCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllRivalTeamEliminatedCount(int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSelectedRivalTeamId();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetRivalTeamWinCount(ERivalTeamId InTeamID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetRivalTeamEliminatedCount(ERivalTeamId InTeamID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetLastCutinRivalTeamId();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAllRivalTeamWinCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAllRivalTeamEliminatedCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRivalTeamSelect();
    
};

