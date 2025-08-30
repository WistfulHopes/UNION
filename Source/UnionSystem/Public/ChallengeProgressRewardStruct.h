#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ChallengePointReward.h"
#include "ChallengeProgressRewardStruct.generated.h"

USTRUCT(BlueprintType)
struct FChallengeProgressRewardStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengePointReward FirstPointReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengePointReward SecondPointReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengePointReward ThirdPointReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengePointReward CheckPointReward;
    
    UNIONSYSTEM_API FChallengeProgressRewardStruct();
};

