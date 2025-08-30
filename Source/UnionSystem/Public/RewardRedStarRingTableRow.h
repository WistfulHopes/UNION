#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECommendationCategory.h"
#include "RewardRedStarRingTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRewardRedStarRingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommendationCategory CommendationCategory;
    
    FRewardRedStarRingTableRow();
};

