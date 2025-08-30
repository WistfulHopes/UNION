#pragma once
#include "CoreMinimal.h"
#include "RankingDataFestaPointUserNote.h"
#include "RankingDataFestaPoint.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRankingDataFestaPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingDataFestaPointUserNote userNote;
    
    FRankingDataFestaPoint();
};

