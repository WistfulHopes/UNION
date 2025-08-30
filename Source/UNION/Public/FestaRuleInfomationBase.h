#pragma once
#include "CoreMinimal.h"
#include "EGroupRaceRule.h"
#include "FestaRuleInfomationBase.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FFestaRuleInfomationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupRaceRule ruleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSpecial;
    
    FFestaRuleInfomationBase();
};

