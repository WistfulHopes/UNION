#pragma once
#include "CoreMinimal.h"
#include "UserStickerData.h"
#include "UserStickerCustomizeData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserStickerCustomizeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FUserStickerData> FrontStickerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FUserStickerData> RearStickerArray;
    
    FUserStickerCustomizeData();
};

