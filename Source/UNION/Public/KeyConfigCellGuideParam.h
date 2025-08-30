#pragma once
#include "CoreMinimal.h"
#include "KeyConfigCellGuideParam.generated.h"

USTRUCT(BlueprintType)
struct FKeyConfigCellGuideParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GuideText;
    
    UNION_API FKeyConfigCellGuideParam();
};

