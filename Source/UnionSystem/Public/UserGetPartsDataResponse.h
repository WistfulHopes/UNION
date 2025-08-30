#pragma once
#include "CoreMinimal.h"
#include "Common_RatingData.h"
#include "UserGetPartsDataResponse.generated.h"

USTRUCT(BlueprintType)
struct FUserGetPartsDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RatingData ratingData;
    
    UNIONSYSTEM_API FUserGetPartsDataResponse();
};

