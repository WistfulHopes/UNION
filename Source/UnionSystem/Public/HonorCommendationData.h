#pragma once
#include "CoreMinimal.h"
#include "ECommendationCategory.h"
#include "EHonorId.h"
#include "HonorCommendationData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FHonorCommendationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHonorId HonorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommendationCategory CommendationCategory;
    
    FHonorCommendationData();
};

