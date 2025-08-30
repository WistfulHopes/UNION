#pragma once
#include "CoreMinimal.h"
#include "RaceCameraParam.h"
#include "RaceCameraMapElement.generated.h"

USTRUCT(BlueprintType)
struct FRaceCameraMapElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRaceCameraParam> ViewSplitParam;
    
    UNION_API FRaceCameraMapElement();
};

