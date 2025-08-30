#pragma once
#include "CoreMinimal.h"
#include "RelativeMoveParameter.h"
#include "RelativeMoveBackParameter.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRelativeMoveBackParameter : public FRelativeMoveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionSizeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionEnableTimeToRacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionEnableTimeToOther;
    
    FRelativeMoveBackParameter();
};

