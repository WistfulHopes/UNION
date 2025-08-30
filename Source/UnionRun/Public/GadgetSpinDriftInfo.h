#pragma once
#include "CoreMinimal.h"
#include "GadgetSpinDriftInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetSpinDriftInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Power;
    
    FGadgetSpinDriftInfo();
};

