#pragma once
#include "CoreMinimal.h"
#include "RankingDataTimeTrial.h"
#include "RankingDataTimeTrialList.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRankingDataTimeTrialList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRankingDataTimeTrial> RankingData;
    
    FRankingDataTimeTrialList();
};

