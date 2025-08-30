#pragma once
#include "CoreMinimal.h"
#include "StaticBodyCylinderParam.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FStaticBodyCylinderParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    FStaticBodyCylinderParam();
};

