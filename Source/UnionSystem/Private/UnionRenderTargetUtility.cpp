#include "UnionRenderTargetUtility.h"

UUnionRenderTargetUtility::UUnionRenderTargetUtility() {
}

void UUnionRenderTargetUtility::UpdateRenderTargetSizeForRuntime(UTextureRenderTarget2D* RenderTarget, const APlayerController* PlayerController, const float ReductionScaleX, const float ReductionScaleY) {
}

bool UUnionRenderTargetUtility::SetPostProcessToActiveCamera(UWorld* World, FName MaterialName) {
    return false;
}

void UUnionRenderTargetUtility::ReflectionFocus(UCineCameraComponent* Cine, USceneCaptureComponent2D* Scene, float FOVScale) {
}

UObject* UUnionRenderTargetUtility::LoadVfxAsset(const FString& Path) {
    return NULL;
}

UTexture2D* UUnionRenderTargetUtility::ConvertAndCompressRenderTargetToTexture(UTextureRenderTarget2D* RenderTarget, EUnionTextureCompressType CompressType, int32 Partitions, int32 Uber) {
    return NULL;
}

UTexture2D* UUnionRenderTargetUtility::CompressTexture2D(UTexture2D* Texture, const EUnionTextureCompressType Mode) {
    return NULL;
}


