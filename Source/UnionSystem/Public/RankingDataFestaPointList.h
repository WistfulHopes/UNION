#pragma once
#include "CoreMinimal.h"
#include "RankingDataFestaPoint.h"
#include "RankingDataFestaPointList.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRankingDataFestaPointList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRankingDataFestaPoint> RankingData;
    
    FRankingDataFestaPointList();
};

