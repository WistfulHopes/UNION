#pragma once
#include "CoreMinimal.h"
#include "CameraStateParam.h"
#include "RivalCameraParam.generated.h"

USTRUCT(BlueprintType)
struct FRivalCameraParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraStateParam ViewStartUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraStateParam ViewPlay;
    
    UNION_API FRivalCameraParam();
};

