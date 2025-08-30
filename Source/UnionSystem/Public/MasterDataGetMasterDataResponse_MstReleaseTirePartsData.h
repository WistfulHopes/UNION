#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstReleaseTirePartsData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstReleaseTirePartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TirePartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstReleaseTirePartsData();
};

