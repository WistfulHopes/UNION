#pragma once
#include "CoreMinimal.h"
#include "RelativeMoveParameter.h"
#include "RelativeMoveFrontParameter.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRelativeMoveFrontParameter : public FRelativeMoveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeMoveOffset;
    
    FRelativeMoveFrontParameter();
};

