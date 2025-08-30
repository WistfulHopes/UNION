#include "UserStickerData.h"

FUserStickerData::FUserStickerData() {
    this->stickerId = 0;
    this->LocationX = 0.00f;
    this->LocationY = 0.00f;
    this->Rotation = 0.00f;
    this->scaleX = 0.00f;
    this->scaleY = 0.00f;
    this->textureId = 0;
    this->colorId = 0;
    this->surfaceId = 0;
    this->flag = EUserStickerFlagBits::None;
}

