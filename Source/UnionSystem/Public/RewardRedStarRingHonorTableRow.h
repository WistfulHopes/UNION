#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECommendationCategory.h"
#include "EHonorId.h"
#include "RewardRedStarRingHonorTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRewardRedStarRingHonorTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHonorId HonorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommendationCategory CommendationCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FRewardRedStarRingHonorTableRow();
};

