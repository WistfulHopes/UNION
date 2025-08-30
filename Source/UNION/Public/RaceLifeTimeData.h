#pragma once
#include "CoreMinimal.h"
#include "RaceLifeTimeData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FRaceLifeTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnloadedStageLevels;
    
    FRaceLifeTimeData();
};

