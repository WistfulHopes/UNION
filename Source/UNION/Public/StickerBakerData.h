#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StickerBakerData.generated.h"

USTRUCT(BlueprintType)
struct FStickerBakerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> Colors;
    
    UNION_API FStickerBakerData();
};

