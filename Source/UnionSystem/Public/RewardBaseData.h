#pragma once
#include "CoreMinimal.h"
#include "ERewardType.h"
#include "RewardBaseData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRewardBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FRewardBaseData();
};

