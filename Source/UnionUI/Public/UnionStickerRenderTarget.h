#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionStickerRenderTarget.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UNIONUI_API UUnionStickerRenderTarget : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget2D;
    
    UUnionStickerRenderTarget();

};

