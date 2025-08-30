#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Common_HistoryData_CharacterUsage.h"
#include "EDriverId.h"
#include "EMachineId.h"
#include "EStatsEventId.h"
#include "HonorCommendationData.h"
#include "HonorCommendationDataSetList.h"
#include "UnionStatsManager.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionStatsManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStatsLoadedSaveData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatsEventUpdate, const EStatsEventId, StatsEventId, int64, StatsValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMachineStatsEventUpdate, const EStatsEventId, StatsEventId, const EMachineId, MachineId, int32, StatsValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHonorResultEvent, const FHonorCommendationDataSetList&, DataSetList);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterStatsEventUpdate, const EStatsEventId, StatsEventId, const EDriverId, DriverId, int32, StatsValue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsLoadedSaveData OnStatsLoadedSaveData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsEventUpdate OnStatsEventUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineStatsEventUpdate OnMachineStatsEventUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatsEventUpdate OnCharacterStatsEventUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHonorResultEvent OnHonorResultEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHonorCommendationDataSetList HonorList;
    
    UUnionStatsManager();

    UFUNCTION(BlueprintCallable)
    void SetSaveRedStarRings(TArray<bool> InRSRs);
    
    UFUNCTION(BlueprintCallable)
    void RequestAddRaceDetailsParameter(const EStatsEventId StatsEventId, const int32 AddValue);
    
    UFUNCTION(BlueprintCallable)
    void RequestAddMachinesParameter(const EStatsEventId StatsEventId, const EMachineId MachineId, const int32 AddValue);
    
    UFUNCTION(BlueprintCallable)
    void RequestAddDriversParameter(const EStatsEventId StatsEventId, const EDriverId DriverId, const int32 AddValue);
    
    UFUNCTION(BlueprintCallable)
    void OnSetHonorList(const FHonorCommendationDataSetList& list);
    
    UFUNCTION(BlueprintCallable)
    bool IsRaceRedStarRingDisplay();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCommon_HistoryData_CharacterUsage> GetTopThreeCharactersUsageAddOne(EDriverId AddOneDriverId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatsEventValue(const EStatsEventId StatsEventId);
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetSaveRedStarRings();
    
    UFUNCTION(BlueprintCallable)
    void GetResultHonorList(int32 RacerIndex, TArray<FHonorCommendationData>& OutDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMultiPlayBonus() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMachineStatsEventValue(const EStatsEventId StatsEventId, const EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterStatsEventValueTopThree(TArray<EDriverId>& TopThreeIds, TArray<int32>& TopThreeCounts);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCharacterStatsEventValue(const EStatsEventId StatsEventId, const EDriverId DriverId);
    
};

