#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUnionTextureCompressType.h"
#include "UnionRenderTargetUtility.generated.h"

class APlayerController;
class UCineCameraComponent;
class UObject;
class USceneCaptureComponent2D;
class UTexture2D;
class UTextureRenderTarget2D;
class UWorld;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionRenderTargetUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionRenderTargetUtility();

    UFUNCTION(BlueprintCallable)
    static void UpdateRenderTargetSizeForRuntime(UTextureRenderTarget2D* RenderTarget, const APlayerController* PlayerController, const float ReductionScaleX, const float ReductionScaleY);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPostProcessToActiveCamera(UWorld* World, FName MaterialName);
    
    UFUNCTION(BlueprintCallable)
    static void ReflectionFocus(UCineCameraComponent* Cine, USceneCaptureComponent2D* Scene, float FOVScale);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadVfxAsset(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* ConvertAndCompressRenderTargetToTexture(UTextureRenderTarget2D* RenderTarget, EUnionTextureCompressType CompressType, int32 Partitions, int32 Uber);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* CompressTexture2D(UTexture2D* Texture, const EUnionTextureCompressType Mode);
    
};

