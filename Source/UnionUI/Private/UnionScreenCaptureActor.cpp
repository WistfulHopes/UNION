#include "UnionScreenCaptureActor.h"

AUnionScreenCaptureActor::AUnionScreenCaptureActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FileNameBase = TEXT("ScreenShot");
    this->Width = 1920;
    this->Height = 1080;
}

void AUnionScreenCaptureActor::SaveTextureToFile(UTextureRenderTarget2D* InRenderTarget, const TArray<FColor>& Bitmap, const FString& InFilePath) {
}

UTextureRenderTarget2D* AUnionScreenCaptureActor::GetTextureRenderTarget2D() {
    return NULL;
}

void AUnionScreenCaptureActor::CaptureScreen() {
}


