#pragma once
#include "CoreMinimal.h"
#include "MachinePostProcessSettings.generated.h"

USTRUCT(BlueprintType)
struct FMachinePostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHiSpeedPP;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRadialBlurPP;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFlowingWaterPP;
    
    UNIONSYSTEM_API FMachinePostProcessSettings();
};

