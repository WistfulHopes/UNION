#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERewardAchievementType.h"
#include "RewardAchievementData.h"
#include "RewardAchievementTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FRewardAchievementTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardAchievementType RewardAchievementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardAchievementData> RewardAchievementDataArray;
    
    FRewardAchievementTableRow();
};

