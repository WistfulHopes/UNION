#pragma once
#include "CoreMinimal.h"
#include "ERewardType.h"
#include "ChallengePointReward.generated.h"

USTRUCT(BlueprintType)
struct FChallengePointReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardType rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumReward;
    
    UNIONSYSTEM_API FChallengePointReward();
};

