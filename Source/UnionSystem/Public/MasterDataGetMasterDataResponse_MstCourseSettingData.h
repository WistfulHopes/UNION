#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstCourseSettingData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstCourseSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> appearCourseIds;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstCourseSettingData();
};

