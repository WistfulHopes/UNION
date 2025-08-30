#pragma once
#include "CoreMinimal.h"
#include "EItemReleaseType.h"
#include "ERewardType.h"
#include "InputRewardDetailInfo.generated.h"

USTRUCT(BlueprintType)
struct FInputRewardDetailInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardType rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemReleaseType ReleaseType;
    
    UNIONSYSTEM_API FInputRewardDetailInfo();
};

