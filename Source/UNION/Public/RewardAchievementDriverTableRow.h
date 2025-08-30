#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDriverId.h"
#include "ERewardAchievementType.h"
#include "RewardAchievementDriverTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FRewardAchievementDriverTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId TargetDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERewardAchievementType> RewardAchievementType;
    
    FRewardAchievementDriverTableRow();
};

