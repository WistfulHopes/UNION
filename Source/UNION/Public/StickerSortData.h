#pragma once
#include "CoreMinimal.h"
#include "StickerData.h"
#include "StickerSortData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FStickerSortData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName stickerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStickerData StickerData;
    
    FStickerSortData();
};

