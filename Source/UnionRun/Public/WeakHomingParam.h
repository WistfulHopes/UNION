#pragma once
#include "CoreMinimal.h"
#include "WeakHomingParam.generated.h"

USTRUCT(BlueprintType)
struct FWeakHomingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchAreaWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchAreaLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorrctionMaxAngularSpeed;
    
    UNIONRUN_API FWeakHomingParam();
};

