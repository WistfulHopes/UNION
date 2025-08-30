#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstReleaseRearPartsData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstReleaseRearPartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RearPartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstReleaseRearPartsData();
};

