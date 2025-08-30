#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstReleaseFrontPartsData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstReleaseFrontPartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrontPartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstReleaseFrontPartsData();
};

