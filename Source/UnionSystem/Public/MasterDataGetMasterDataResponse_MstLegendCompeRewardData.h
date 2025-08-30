#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeRewardData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstLegendCompeRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardPatternId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardNum;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstLegendCompeRewardData();
};

