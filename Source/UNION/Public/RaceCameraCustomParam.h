#pragma once
#include "CoreMinimal.h"
#include "ECarStatusType.h"
#include "RaceCameraCustomMapElement.h"
#include "RaceCameraCustomParam.generated.h"

USTRUCT(BlueprintType)
struct FRaceCameraCustomParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECarStatusType, FRaceCameraCustomMapElement> CarStatusParam;
    
    UNION_API FRaceCameraCustomParam();
};

