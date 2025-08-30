#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_LegendCompeRewardParticipateCountData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_LegendCompeRewardParticipateCountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 participateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardNum;
    
    UNIONSYSTEM_API FNetMasterData_LegendCompeRewardParticipateCountData();
};

