#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "StickerTextureAsyncLoader.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UNION_API UStickerTextureAsyncLoader : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> SoftTexturePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> LoadedTextures;
    
public:
    UStickerTextureAsyncLoader();

};

