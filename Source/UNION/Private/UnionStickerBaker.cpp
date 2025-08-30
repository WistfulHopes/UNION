#include "UnionStickerBaker.h"

AUnionStickerBaker::AUnionStickerBaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Timer = 0.00f;
    this->bCaptured = false;
    this->SceneCaptureComponent = NULL;
    this->TextureArray.AddDefaulted(4);
    this->PlaneComponentArray.AddDefaulted(4);
    this->MaterialArray.AddDefaulted(4);
    this->StickerTextureCompress = NULL;
    this->CompressType = EUnionTextureCompressType::BC3;
    this->StickerLoader = NULL;
    this->RenderTarget = NULL;
    this->StickerTexture = NULL;
}

void AUnionStickerBaker::Tick(float DeltaSeconds) {
}

void AUnionStickerBaker::SetupSub(const TArray<FUserStickerData>& StickerArray, const FStickerBakerData& BakeData, const int32 InSize) {
}

void AUnionStickerBaker::SetupPooling() {
}

void AUnionStickerBaker::Setup(const TArray<FUserStickerData>& StickerArray, const FStickerBakerData& BakeData, const int32 InSize, const bool IsAlphaReverse) {
}

void AUnionStickerBaker::ResetBaker() {
}

void AUnionStickerBaker::Loop(float DeltaSeconds) {
}

bool AUnionStickerBaker::IsCapture() const {
    return false;
}

UTexture2D* AUnionStickerBaker::GetStickerTextureCompress() {
    return NULL;
}

UTexture* AUnionStickerBaker::GetStickerTexture() {
    return NULL;
}

UTexture* AUnionStickerBaker::GetRenderTarget() {
    return NULL;
}

void AUnionStickerBaker::Finish() {
}

void AUnionStickerBaker::FinalizePooling() {
}


