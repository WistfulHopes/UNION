#pragma once
#include "CoreMinimal.h"
#include "UserStickerData.h"
#include "BakeRequestData.generated.h"

class UStickerBakerHandle;

USTRUCT(BlueprintType)
struct FBakeRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStickerBakerHandle* Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserStickerData> StickerArray;
    
    UNION_API FBakeRequestData();
};

