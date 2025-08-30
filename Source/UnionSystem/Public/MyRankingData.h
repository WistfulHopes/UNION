#pragma once
#include "CoreMinimal.h"
#include "MyRankingOrder.h"
#include "MyRankingData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FMyRankingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMyRankingOrder All;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMyRankingOrder Platform;
    
    FMyRankingData();
};

