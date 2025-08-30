#pragma once
#include "CoreMinimal.h"
#include "DriftEffectParameter.h"
#include "DriftEffectProperty.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FDriftEffectProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDriftEffectParameter> Params;
    
    FDriftEffectProperty();
};

