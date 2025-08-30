#pragma once
#include "CoreMinimal.h"
#include "RankingDataRankMatch.h"
#include "RankingDataRankMatchList.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRankingDataRankMatchList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRankingDataRankMatch> RankingData;
    
    FRankingDataRankMatchList();
};

