#pragma once
#include "CoreMinimal.h"
#include "Common_RatingData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_RatingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    UNIONSYSTEM_API FCommon_RatingData();
};

