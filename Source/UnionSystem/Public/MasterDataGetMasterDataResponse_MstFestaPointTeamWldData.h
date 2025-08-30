#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstFestaPointTeamWldData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstFestaPointTeamWldData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pointTeamWldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint3;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstFestaPointTeamWldData();
};

