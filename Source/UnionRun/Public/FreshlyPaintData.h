#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EVehicleFreshlyPaint.h"
#include "FreshlyPaintParameter.h"
#include "FreshlyPaintData.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UFreshlyPaintData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVehicleFreshlyPaint, FFreshlyPaintParameter> Parameter;
    
    UFreshlyPaintData();

};

