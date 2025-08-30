#pragma once
#include "CoreMinimal.h"
#include "ECommendationCategory.h"
#include "RewardRedStarRingData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRewardRedStarRingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommendationCategory CommendationCategory;
    
    FRewardRedStarRingData();
};

