#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_FestaPointRewardConditionsData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_FestaPointRewardConditionsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pointRewardConditionsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardConditionsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pointValue;
    
    UNIONSYSTEM_API FNetMasterData_FestaPointRewardConditionsData();
};

