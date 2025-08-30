#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstReleaseCourseData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstReleaseCourseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 courseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstReleaseCourseData();
};

