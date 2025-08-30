#include "StickerBakerHandle.h"

UStickerBakerHandle::UStickerBakerHandle() {
    this->IsRear = false;
    this->Baker = NULL;
}

void UStickerBakerHandle::ResetHandle() {
}

bool UStickerBakerHandle::IsHandleDead() const {
    return false;
}

bool UStickerBakerHandle::IsBakingComplete() const {
    return false;
}

UTexture* UStickerBakerHandle::GetBakeResult() const {
    return NULL;
}

AUnionStickerBaker* UStickerBakerHandle::GetBaker() const {
    return NULL;
}


