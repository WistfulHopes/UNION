#pragma once
#include "CoreMinimal.h"
#include "MachineStickerSlotItemData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMachineStickerSlotItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StickerDesignTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    UNION_API FMachineStickerSlotItemData();
};

