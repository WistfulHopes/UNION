#pragma once
#include "CoreMinimal.h"
#include "StatsDriverData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FStatsDriverData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 winCount;
    
    FStatsDriverData();
};

