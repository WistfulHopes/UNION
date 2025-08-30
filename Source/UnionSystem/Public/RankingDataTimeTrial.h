#pragma once
#include "CoreMinimal.h"
#include "RankingDataTimeTrialUserNote.h"
#include "RankingDataTimeTrial.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRankingDataTimeTrial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingDataTimeTrialUserNote userNote;
    
    FRankingDataTimeTrial();
};

