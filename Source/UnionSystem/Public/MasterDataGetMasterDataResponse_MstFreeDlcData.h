#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstFreeDlcData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstFreeDlcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dlcId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString endTime;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstFreeDlcData();
};

