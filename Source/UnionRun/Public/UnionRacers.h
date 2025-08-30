#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "Engine/TimerHandle.h"
#include "EDriverId.h"
#include "EStageId.h"
#include "EDomainNumber.h"
#include "EVehicleDisplayMode.h"
#include "RankSort.h"
#include "UnionRacers.generated.h"

class APawn;
class UGroupInfo;
class UUnionRaceLapInfo;
class UUnionRaceSituationObject;
class UUnionRaceUI;
class UUnionRacer;
class UUnionRacerStatusObject;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRacers : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UUnionRacer*> RacerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> PlayerControllerIndex_RacerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> RacerIndex_PlayerControllerIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroupInfo* GroupInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRaceUI* RaceHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRankSort> RankSort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId SelectedTravelStage;
    
    UUnionRacers();

    UFUNCTION(BlueprintCallable)
    void UpdateVehicles(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void UpdateVehicleInputs();
    
    UFUNCTION(BlueprintCallable)
    void UpdateTestRace(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerNameHUD(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDomain(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBaggage(float Delta);
    
    UFUNCTION(BlueprintCallable)
    FTimerHandle UnionRacers_SetTimerDelegate(FTimerDynamicDelegate Delegate, float Time, bool bLooping);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicle(const int32& InRacerIndex, APawn* InVehicle);
    
    UFUNCTION(BlueprintCallable)
    void SetTickable(bool bTickable);
    
    UFUNCTION(BlueprintCallable)
    void SetRaceLapInfo(const int32& InRacerIndex, UUnionRaceLapInfo* InRaceLapInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkPlayerControllerIndexToRacerIndex(const int32& PlayerControllerIndex, const int32& InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayer(UUnionRacer* Racer);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnlineCom(UUnionRacer* Racer);
    
    UFUNCTION(BlueprintCallable)
    bool IsOfflinePlayer(UUnionRacer* Racer);
    
    UFUNCTION(BlueprintCallable)
    void InitTestRace();
    
    UFUNCTION(BlueprintCallable)
    void HidePlayerNameHUD();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTestRaceCount();
    
    UFUNCTION(BlueprintCallable)
    UUnionRacerStatusObject* GetRacerStatusObject(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    UUnionRaceSituationObject* GetRacerSituationObject(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRacerRank(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRacerIndexByRank(const int32& InRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRacerIndexByPlayerControllerIndex(const int32& PlayerControllerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetRacer3DPositionAndDomainNumber(int32 Index, EDomainNumber& DomainNum);
    
    UFUNCTION(BlueprintCallable)
    UUnionRacer* GetRacer(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    UUnionRaceLapInfo* GetRaceLapInfo(const int32& InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    UUnionRaceUI* GetRaceHUDRef();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerRank(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerControllerIndexByRacerIndex(const int32& InRacerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void GetLocalPlayers(TArray<UUnionRacer*>& OutRacers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGamePauseOwnerRacerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGamePauseOwnerPlayerControllerIndex() const;
    
    UFUNCTION(BlueprintCallable)
    static EDriverId GetDriverIdByRacerIndex(const int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool Destroy();
    
    UFUNCTION(BlueprintCallable)
    void ClearVehicles();
    
    UFUNCTION(BlueprintCallable)
    void ChangeVehicleDisplayMode(int32 InRacerIndex, EVehicleDisplayMode InVehicleDisplayMode);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVehicleInputs();
    
    UFUNCTION(BlueprintCallable)
    void ApplyPauseInputs();
    
};

