#pragma once
#include "CoreMinimal.h"
#include "FestaStreakRewardUIData.generated.h"

USTRUCT(BlueprintType)
struct FFestaStreakRewardUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HonorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Point;
    
    UNIONSYSTEM_API FFestaStreakRewardUIData();
};

