#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "EMachineId.h"
#include "StatsDriverData.h"
#include "StatsMachineData.h"
#include "StatsRaceDetailsData.h"
#include "StatsSaveData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FStatsSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, FStatsDriverData> DriverList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineId, FStatsMachineData> MachineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsRaceDetailsData RaceDetails;
    
    FStatsSaveData();
};

