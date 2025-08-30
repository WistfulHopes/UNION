#pragma once
#include "CoreMinimal.h"
#include "ERewardAchievementType.h"
#include "UserRewardGetDisplayRequestData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserRewardGetDisplayRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERewardAchievementType> RewardGetDisplayRequestDataArray;
    
    FUserRewardGetDisplayRequestData();
};

