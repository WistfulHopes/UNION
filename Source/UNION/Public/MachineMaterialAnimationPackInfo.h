#pragma once
#include "CoreMinimal.h"
#include "EVehicleFreshlyPaint.h"
#include "MachineMaterialAnimationPackInfo.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineMaterialAnimationPackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AnimationPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDeactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleFreshlyPaint FreshlyPaintColor;
    
    FMachineMaterialAnimationPackInfo();
};

