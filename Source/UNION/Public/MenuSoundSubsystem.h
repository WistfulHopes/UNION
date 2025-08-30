#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EDriverId.h"
#include "EStageId.h"
#include "EMenuSequenceBGM.h"
#include "MenuSoundSubsystem.generated.h"

UCLASS(Blueprintable)
class UNION_API UMenuSoundSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UMenuSoundSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void PlayBGMTitle(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGMStage(EStageId StageId);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGMMenu(EMenuSequenceBGM NewMenuBGM, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    bool PlayBGMDriver(EDriverId DriverId);
    
};

