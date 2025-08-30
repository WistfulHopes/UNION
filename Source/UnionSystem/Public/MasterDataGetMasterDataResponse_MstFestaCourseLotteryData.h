#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstFestaCourseLotteryData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstFestaCourseLotteryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 courseLotteryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 courseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Lottery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Launch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool collaborationDlc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool notCollaborationDlc;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstFestaCourseLotteryData();
};

