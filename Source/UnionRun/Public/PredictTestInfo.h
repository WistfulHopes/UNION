#pragma once
#include "CoreMinimal.h"
#include "PredictTestInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FPredictTestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestCaseIndex;
    
    FPredictTestInfo();
};

