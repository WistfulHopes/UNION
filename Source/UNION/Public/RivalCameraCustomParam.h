#pragma once
#include "CoreMinimal.h"
#include "ECarStatusType.h"
#include "RaceCameraParam.h"
#include "RivalCameraCustomParam.generated.h"

USTRUCT(BlueprintType)
struct FRivalCameraCustomParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECarStatusType, FRaceCameraParam> CarStatusParam;
    
    UNION_API FRivalCameraCustomParam();
};

