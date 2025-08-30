#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeGradeRewardData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstLegendCompeGradeRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 gradeRewardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 gradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rewardNum;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstLegendCompeGradeRewardData();
};

