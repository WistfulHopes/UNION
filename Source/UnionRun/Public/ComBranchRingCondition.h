#pragma once
#include "CoreMinimal.h"
#include "ComBranchRingCondition.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComBranchRingCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    FComBranchRingCondition();
};

