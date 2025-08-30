#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERewardAchievementType.h"
#include "GrandPrixVictoryRewardTable.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FGrandPrixVictoryRewardTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VictoryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardAchievementType RewardAchievementType;
    
    FGrandPrixVictoryRewardTable();
};

