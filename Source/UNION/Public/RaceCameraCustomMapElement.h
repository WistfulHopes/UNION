#pragma once
#include "CoreMinimal.h"
#include "EResultCameraProductionType.h"
#include "RaceCameraMapElement.h"
#include "RaceCameraCustomMapElement.generated.h"

USTRUCT(BlueprintType)
struct FRaceCameraCustomMapElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EResultCameraProductionType, FRaceCameraMapElement> ProductionMap;
    
    UNION_API FRaceCameraCustomMapElement();
};

