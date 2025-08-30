#pragma once
#include "CoreMinimal.h"
#include "GadgetSuppressRunoffInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetSuppressRunoffInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddSpeed;
    
    FGadgetSuppressRunoffInfo();
};

