#pragma once
#include "CoreMinimal.h"
#include "EGroupBonusType.h"
#include "GroupBattlePersonalResult.h"
#include "GroupBattleResult.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGroupBattleResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupBonusType BonusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGroupBattlePersonalResult> PersonalResultList;
    
    FGroupBattleResult();
};

