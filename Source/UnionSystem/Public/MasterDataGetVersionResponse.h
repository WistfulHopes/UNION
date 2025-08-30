#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetVersionResponse_MasterVersionData.h"
#include "MasterDataGetVersionResponse.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetVersionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetVersionResponse_MasterVersionData> masterVersionDatas;
    
    UNIONSYSTEM_API FMasterDataGetVersionResponse();
};

