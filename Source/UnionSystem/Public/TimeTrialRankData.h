#pragma once
#include "CoreMinimal.h"
#include "ETimeTrialClearRankId.h"
#include "TimeTrialRankData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FTimeTrialRankData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeTrialClearRankId TimeTrialRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextRankTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextRankStandardTime;
    
    FTimeTrialRankData();
};

