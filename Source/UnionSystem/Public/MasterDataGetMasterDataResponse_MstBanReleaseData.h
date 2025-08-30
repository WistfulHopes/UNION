#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstBanReleaseData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstBanReleaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 banLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 banUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 releaseHour;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstBanReleaseData();
};

