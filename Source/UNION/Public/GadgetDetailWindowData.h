#pragma once
#include "CoreMinimal.h"
#include "GadgetDetailWindowData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNION_API FGadgetDetailWindowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ThumbnailTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Explanation;
    
    FGadgetDetailWindowData();
};

