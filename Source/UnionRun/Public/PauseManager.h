#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PauseManager.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UPauseManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPauseManager();

    UFUNCTION(BlueprintCallable)
    void SetIsOnlineMode(bool NewIsOnlineMode);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePaused(bool Paused, int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePauseOwnerGoaled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGamePauseOwnerRacerIndex() const;
    
};

