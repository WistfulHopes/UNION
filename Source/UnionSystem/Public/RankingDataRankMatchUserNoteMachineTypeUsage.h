#pragma once
#include "CoreMinimal.h"
#include "RankingDataRankMatchUserNoteMachineTypeUsage.generated.h"

USTRUCT(BlueprintType)
struct FRankingDataRankMatchUserNoteMachineTypeUsage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 machineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 usageCount;
    
    UNIONSYSTEM_API FRankingDataRankMatchUserNoteMachineTypeUsage();
};

