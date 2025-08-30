#pragma once
#include "CoreMinimal.h"
#include "CameraStateParam.h"
#include "ResultCameraParam.generated.h"

USTRUCT(BlueprintType)
struct FResultCameraParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraStateParam StartUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraStateParam ProductionPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraStateParam ProductionSwitch;
    
    UNION_API FResultCameraParam();
};

