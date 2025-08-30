#pragma once
#include "CoreMinimal.h"
#include "SwingCameraUnitPreset.h"
#include "SwingCameraStagePreset.generated.h"

USTRUCT(BlueprintType)
struct FSwingCameraStagePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwingCameraUnitPreset> SwingCameraPresetList;
    
    UNIONRUN_API FSwingCameraStagePreset();
};

