#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FreshlyPaintParameter.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FFreshlyPaintParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorFreshlyPaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreshEmissiveIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RimColorFreshlyPaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RimFreshEmissiveIntensity;
    
    FFreshlyPaintParameter();
};

