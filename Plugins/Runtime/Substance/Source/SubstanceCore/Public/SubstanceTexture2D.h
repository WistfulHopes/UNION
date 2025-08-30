#pragma once
#include "CoreMinimal.h"
#include "Engine/Texture2DDynamic.h"
#include "Engine/TextureDefines.h"
#include "SubstanceTexture2D.generated.h"

class USubstanceGraphInstance;

UCLASS(Blueprintable)
class SUBSTANCECORE_API USubstanceTexture2D : public UTexture2DDynamic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubstanceGraphInstance* ParentInstance;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCooked;
    
    USubstanceTexture2D();
    
	virtual ETextureClass GetTextureClass() const override { return ETextureClass::TwoDDynamic; }
	virtual class FTextureResource* CreateResource() override { return nullptr; }
	virtual EMaterialValueType GetMaterialType() const override { return MCT_Texture; }
    
	virtual float GetSurfaceWidth() const override { return 0; }
	virtual float GetSurfaceHeight() const override { return 0; }
	virtual float GetSurfaceDepth() const override { return 0; }
	virtual uint32 GetSurfaceArraySize() const override { return 0; }
};

