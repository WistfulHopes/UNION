#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocalizeRuntimeImage.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FLocalizeRuntimeImage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    FLocalizeRuntimeImage();
};

