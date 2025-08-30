#pragma once
#include "CoreMinimal.h"
#include "CellGuideParam.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FCellGuideParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GuideText;
    
    FCellGuideParam();
};

