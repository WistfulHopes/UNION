#pragma once
#include "CoreMinimal.h"
#include "ComSlimeCancelParams.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComSlimeCancelParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineChangeRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineChangePerFrame;
    
    FComSlimeCancelParams();
};

