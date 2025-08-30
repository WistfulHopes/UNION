#pragma once
#include "CoreMinimal.h"
#include "Common_RaceTimeData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_RaceTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 goalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lapTime1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lapTime2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lapTime3;
    
    UNIONSYSTEM_API FCommon_RaceTimeData();
};

