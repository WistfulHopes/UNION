#pragma once
#include "CoreMinimal.h"
#include "GadgetImmuneItemDamageOnceInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetImmuneItemDamageOnceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTime;
    
    FGadgetImmuneItemDamageOnceInfo();
};

