#pragma once
#include "CoreMinimal.h"
#include "StaticBodyCapsuleParam.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FStaticBodyCapsuleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    FStaticBodyCapsuleParam();
};

