#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackParametersEx.generated.h"

USTRUCT(BlueprintType)
struct FForceFeedbackParametersEx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 _PrevIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _PrevTickCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bNowLooping;
    
    UNIONSYSTEM_API FForceFeedbackParametersEx();
};

