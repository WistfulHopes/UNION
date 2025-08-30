#pragma once
#include "CoreMinimal.h"
#include "GadgetVariousMemberInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetVariousMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamMapKey;
    
    FGadgetVariousMemberInfo();
};

