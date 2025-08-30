#pragma once
#include "CoreMinimal.h"
#include "RewardBaseData.h"
#include "RewardGetWindowParam.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FRewardGetWindowParam : public FRewardBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRivalReward;
    
    FRewardGetWindowParam();
};

