#pragma once
#include "CoreMinimal.h"
#include "EDriverType.h"
#include "ECarStatusType.h"
#include "GadgetMachineTuneValueChange.h"
#include "GadgetMachineTuneInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetMachineTuneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetMachineTuneValueChange MachineTuneDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECarStatusType, FGadgetMachineTuneValueChange> MachineTuneByCarStatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverType, FGadgetMachineTuneValueChange> MachineTuneByDriverType;
    
    FGadgetMachineTuneInfo();
};

