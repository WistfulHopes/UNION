#pragma once
#include "CoreMinimal.h"
#include "Common_LoginData.h"
#include "Common_RatingData.h"
#include "Common_UserBaseData.h"
#include "Common_UserNetworkSettings.h"
#include "UserGetDataResponse.generated.h"

USTRUCT(BlueprintType)
struct FUserGetDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_UserBaseData userBaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_UserNetworkSettings userNetworkSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_LoginData loginData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RatingData ratingData;
    
    UNIONSYSTEM_API FUserGetDataResponse();
};

