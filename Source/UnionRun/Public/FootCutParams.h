#pragma once
#include "CoreMinimal.h"
#include "FootCutParams.generated.h"

USTRUCT(BlueprintType)
struct FFootCutParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTopRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarpRate;
    
    UNIONRUN_API FFootCutParams();
};

