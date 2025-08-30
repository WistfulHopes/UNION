#pragma once
#include "CoreMinimal.h"
#include "StaticBodySphereParam.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FStaticBodySphereParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FStaticBodySphereParam();
};

