#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstFestaPointTeamContribRingData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstFestaPointTeamContribRingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint4;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstFestaPointTeamContribRingData();
};

