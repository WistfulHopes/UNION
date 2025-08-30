#include "UnionQualitySettings.h"

FUnionQualitySettings::FUnionQualitySettings() {
    this->ResourceQuality = EResourceQuality::Low;
    this->GarageMaterialQuality = EMaterialQuality::Low;
    this->StickerEditorSreenPercentages = 0.00f;
    this->MaterialQualities[0] = EMaterialQuality::Low;
    this->MaterialQualities[1] = EMaterialQuality::Low;
    this->MaterialQualities[2] = EMaterialQuality::Low;
    this->MinLoDPC[0] = 0;
    this->MinLoDPC[1] = 0;
    this->MinLoDPC[2] = 0;
    this->MinLoDNonPC[0] = 0;
    this->MinLoDNonPC[1] = 0;
    this->MinLoDNonPC[2] = 0;
    this->GFur[0] = 0;
    this->GFur[1] = 0;
    this->GFur[2] = 0;
    this->ShadowQualities[0] = 0;
    this->ShadowQualities[1] = 0;
    this->ShadowQualities[2] = 0;
    this->FarClipDistances[0] = 0.00f;
    this->FarClipDistances[1] = 0.00f;
    this->FarClipDistances[2] = 0.00f;
    this->DynamicResolutions[0] = 0;
    this->DynamicResolutions[1] = 0;
    this->DynamicResolutions[2] = 0;
    this->ScreenPercentages[0] = 0.00f;
    this->ScreenPercentages[1] = 0.00f;
    this->ScreenPercentages[2] = 0.00f;
    this->ScreenPercentagesTypeB[0] = 0.00f;
    this->ScreenPercentagesTypeB[1] = 0.00f;
    this->ScreenPercentagesTypeB[2] = 0.00f;
    this->FidelityFXFSR[0] = 0;
    this->FidelityFXFSR[1] = 0;
    this->FidelityFXFSR[2] = 0;
    this->FidelityFXRCAS[0] = 0;
    this->FidelityFXRCAS[1] = 0;
    this->FidelityFXRCAS[2] = 0;
    this->NiagaraQualities[0] = ENiagaraQuality::Low;
    this->NiagaraQualities[1] = ENiagaraQuality::Low;
    this->NiagaraQualities[2] = ENiagaraQuality::Low;
}

