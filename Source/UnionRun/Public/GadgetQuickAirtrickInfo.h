#pragma once
#include "CoreMinimal.h"
#include "GadgetQuickAirtrickInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetQuickAirtrickInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirTrickPlayRate;
    
    FGadgetQuickAirtrickInfo();
};

