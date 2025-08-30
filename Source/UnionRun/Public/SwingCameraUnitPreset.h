#pragma once
#include "CoreMinimal.h"
#include "CameraParamTable.h"
#include "SwingCameraTrigger.h"
#include "SwingCameraUnitPreset.generated.h"

USTRUCT(BlueprintType)
struct FSwingCameraUnitPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwingCameraTrigger SuperDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraParamTable CameraParams;
    
    UNIONRUN_API FSwingCameraUnitPreset();
};

