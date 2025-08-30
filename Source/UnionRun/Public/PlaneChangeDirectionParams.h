#pragma once
#include "CoreMinimal.h"
#include "PlaneChangeDirectionParams.generated.h"

USTRUCT(BlueprintType)
struct FPlaneChangeDirectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
    UNIONRUN_API FPlaneChangeDirectionParams();
};

