#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/TimerHandle.h"
#include "Engine/TimerHandle.h"
#include "EViewSplitId.h"
#include "EVehicleDisplayMode.h"
#include "UnionRacer.generated.h"

class APawn;
class UUnionRaceLapInfo;
class UUnionRaceSituationObject;
class UUnionRacerStatusObject;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRacer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRaceLapInfo* RaceLapInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacerStatusObject* RacerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRaceSituationObject* RaceSituation;
    
    UUnionRacer();

    UFUNCTION(BlueprintCallable)
    void UpdateVehicleInput();
    
    UFUNCTION(BlueprintCallable)
    void UpdateVehicle(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTestRace(float Delta);
    
    UFUNCTION(BlueprintCallable)
    FTimerHandle UnionRacer_SetTimerDelegate(FTimerDynamicDelegate Delegate, float Time, bool bLooping);
    
    UFUNCTION(BlueprintCallable)
    void SetViewSplitId(EViewSplitId InViewSplitId);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicle(APawn* InVehicle);
    
    UFUNCTION(BlueprintCallable)
    void SetTickable(bool bTickable);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerIndex(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetRaceLapInfo(UUnionRaceLapInfo* InRaceLapInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerControllerIndex(int32 InPlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EViewSplitId GetViewSplitId() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTestRaceCount();
    
    UFUNCTION(BlueprintCallable)
    UUnionRacerStatusObject* GetRacerStatusObject();
    
    UFUNCTION(BlueprintCallable)
    UUnionRaceSituationObject* GetRacerSituationObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRacerIndex(int32& OutRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    UUnionRaceLapInfo* GetRaceLapInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerControllerIndex(int32& OutPlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool Destroy();
    
    UFUNCTION(BlueprintCallable)
    void ClearVehicle();
    
    UFUNCTION(BlueprintCallable)
    void ChangeVehicleDisplayMode(EVehicleDisplayMode InVehicleDisplayMode);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVehicleInput();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyPauseInput();
    
};

