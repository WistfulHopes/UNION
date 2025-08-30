#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeRewardParticipateCountData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstLegendCompeRewardParticipateCountData {
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
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstLegendCompeRewardParticipateCountData();
};

