#pragma once
#include "CoreMinimal.h"
#include "StickerUVData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNION_API FStickerUVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> UVTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FStickerUVData();
};

