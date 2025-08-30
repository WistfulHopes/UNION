#pragma once
#include "CoreMinimal.h"
#include "SwingCameraTrigger.generated.h"

USTRUCT(BlueprintType)
struct FSwingCameraTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLandingValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InElapsedRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutElapsedRatio;
    
    UNIONRUN_API FSwingCameraTrigger();
};

