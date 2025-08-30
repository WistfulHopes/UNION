#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EExtraStickerPattern.h"
#include "ExtraStickerData.generated.h"

USTRUCT(BlueprintType)
struct FExtraStickerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExtraStickerPattern Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Scale;
    
    UNION_API FExtraStickerData();
};

