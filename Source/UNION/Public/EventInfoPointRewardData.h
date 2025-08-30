#pragma once
#include "CoreMinimal.h"
#include "FestaPointRewardUIData.h"
#include "EventInfoPointRewardData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FEventInfoPointRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFestaPointRewardUIData> RewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BGTexture;
    
    UNION_API FEventInfoPointRewardData();
};

