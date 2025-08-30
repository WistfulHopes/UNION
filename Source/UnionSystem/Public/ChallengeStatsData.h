#pragma once
#include "CoreMinimal.h"
#include "EChallengeProgressState.h"
#include "ChallengeStatsData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FChallengeStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StatsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeProgressState ProgressState;
    
    FChallengeStatsData();
};

