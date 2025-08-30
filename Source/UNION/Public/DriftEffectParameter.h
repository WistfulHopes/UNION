#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DriftEffectParameter.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FDriftEffectParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    FDriftEffectParameter();
};

