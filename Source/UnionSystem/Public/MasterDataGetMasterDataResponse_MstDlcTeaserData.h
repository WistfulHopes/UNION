#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstDlcTeaserData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstDlcTeaserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dlcTeaserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString endTime;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstDlcTeaserData();
};

