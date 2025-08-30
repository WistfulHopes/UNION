#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstReleaseStickerData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstReleaseStickerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 stickerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstReleaseStickerData();
};

