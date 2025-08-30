#pragma once
#include "CoreMinimal.h"
#include "CyanLaserParam.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FCyanLaserParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* dmi_;
    
    UNIONRUN_API FCyanLaserParam();
};

