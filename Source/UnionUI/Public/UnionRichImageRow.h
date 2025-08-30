#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "EControllerButtonTextureIndex.h"
#include "UnionRichImageRow.generated.h"

USTRUCT(BlueprintType)
struct FUnionRichImageRow : public FRichImageRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerButtonTextureIndex TextureIndex;
    
    UNIONUI_API FUnionRichImageRow();
};

