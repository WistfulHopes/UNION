#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGroupRaceRule.h"
#include "RestoredRule.generated.h"

USTRUCT(BlueprintType)
struct FRestoredRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupRaceRule ruleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecialRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartUTCTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndUTCTime;
    
    UNION_API FRestoredRule();
};

