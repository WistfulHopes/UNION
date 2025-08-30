#pragma once
#include "CoreMinimal.h"
#include "ComAvoidPolishingMachineParams.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComAvoidPolishingMachineParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightPathMovePosARatioStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightPathMovePosARatioEnd;
    
    FComAvoidPolishingMachineParams();
};

