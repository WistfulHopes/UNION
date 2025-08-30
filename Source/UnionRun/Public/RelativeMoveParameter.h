#pragma once
#include "CoreMinimal.h"
#include "RelativeMoveParameter.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRelativeMoveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ModelMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ModelScaleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeMoveTime;
    
    FRelativeMoveParameter();
};

