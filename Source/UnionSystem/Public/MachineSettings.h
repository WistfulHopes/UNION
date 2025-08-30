#pragma once
#include "CoreMinimal.h"
#include "MachinePostProcessSettings.h"
#include "MachineQualitySettings.h"
#include "MachineSettings.generated.h"

USTRUCT(BlueprintType)
struct FMachineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachinePostProcessSettings PostProcessSettings[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineQualitySettings PC[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineQualitySettings NonPC[3];
    
    UNIONSYSTEM_API FMachineSettings();
};

