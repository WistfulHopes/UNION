#include "StickerBakeManagerSubsystem.h"

UStickerBakeManagerSubsystem::UStickerBakeManagerSubsystem() {
}

void UStickerBakeManagerSubsystem::SweepUnusedRenderTargets() {
}

UStickerBakerHandle* UStickerBakeManagerSubsystem::StartBake(const TArray<FUserStickerData>& StickerArray, const int32 InSize, const bool IsAlphaReverse, bool IsRear, bool IsInRace) {
    return NULL;
}

void UStickerBakeManagerSubsystem::Setup() {
}

void UStickerBakeManagerSubsystem::RegisterRearStickerMap(int32 RacerIndex, UTexture* StickerTexture) {
}

void UStickerBakeManagerSubsystem::RegisterFrontStickerMap(int32 RacerIndex, UTexture* StickerTexture) {
}

bool UStickerBakeManagerSubsystem::IsUserStickerDataEmpty(const TArray<FUserStickerData>& StickerArray) const {
    return false;
}

bool UStickerBakeManagerSubsystem::IsBakingComplete(const UStickerBakerHandle* Handle) const {
    return false;
}

UTexture* UStickerBakeManagerSubsystem::GetRearStickerTextureFromRacerIndex(int32 RacerIndex) {
    return NULL;
}

UTexture* UStickerBakeManagerSubsystem::GetFrontStickerTextureFromRacerIndex(int32 RacerIndex) {
    return NULL;
}

AUnionStickerBaker* UStickerBakeManagerSubsystem::GetBaker(const UStickerBakerHandle* Handle) const {
    return NULL;
}

void UStickerBakeManagerSubsystem::Finalize() {
}


