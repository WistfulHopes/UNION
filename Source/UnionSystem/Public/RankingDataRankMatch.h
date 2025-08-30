#pragma once
#include "CoreMinimal.h"
#include "RankingDataRankMatchUserNote.h"
#include "RankingDataRankMatch.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRankingDataRankMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingDataRankMatchUserNote userNote;
    
    FRankingDataRankMatch();
};

