#pragma once
#include "CoreMinimal.h"
#include "ContentStickerData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FContentStickerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StickerIds;
    
    FContentStickerData();
};

