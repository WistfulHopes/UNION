#pragma once
#include "CoreMinimal.h"
#include "RankingDataLegendCompeUserNote.h"
#include "RankingDataLegendCompe.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRankingDataLegendCompe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingDataLegendCompeUserNote userNote;
    
    FRankingDataLegendCompe();
};

