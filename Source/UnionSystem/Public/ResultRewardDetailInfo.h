#pragma once
#include "CoreMinimal.h"
#include "EContentId.h"
#include "EItemReleaseType.h"
#include "ERewardType.h"
#include "ResultRewardDetailInfo.generated.h"

USTRUCT(BlueprintType)
struct FResultRewardDetailInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardType rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemReleaseType ReleaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContentId contentId;
    
    UNIONSYSTEM_API FResultRewardDetailInfo();
};

