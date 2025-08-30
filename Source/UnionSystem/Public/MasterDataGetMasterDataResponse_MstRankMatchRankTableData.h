#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstRankMatchRankTableData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstRankMatchRankTableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rankId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rankValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rateValue;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstRankMatchRankTableData();
};

