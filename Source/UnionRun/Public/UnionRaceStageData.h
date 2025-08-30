#pragma once
#include "CoreMinimal.h"
#include "UnionRaceStageDynamicData.h"
#include "UnionRaceStageRingGateData.h"
#include "UnionRaceStageData.generated.h"

class ULevel;

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRaceStageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceStageRingGateData RingGateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceStageDynamicData BasicLapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceStageDynamicData FinalLapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevel*> OtherLevels;
    
    FUnionRaceStageData();
};

