#include "GraphicsSettings.h"

FGraphicsSettings::FGraphicsSettings() {
    this->_ScreenBrightness = 0;
    this->_GraphicMode = EGraphicMode::Quality;
    this->_ResolutionSizeX = 0;
    this->_ResolutionSizeY = 0;
    this->_FullscreenMode = EFullscreenMode::Fullscreen;
    this->_UseDisplayId = 0;
    this->_VSync = false;
    this->_FrameRateLimit = EFrameRateLimit::Limit30;
    this->_GraphicQualityPreset = EGraphicQualityPreset::Low;
    this->_RenderingScale = ERenderingScale::Lowest;
    this->_ModelQuality = EModelQuality::Low;
    this->_ShadowQuality = EShadowQuality::Low;
    this->_AntiAliasMethod = EAntiAliasMethod::None;
    this->_ReflectionQuality = EReflectionQuality::Low;
    this->_AmbientOcclusion = false;
    this->_Blur = false;
    this->_AcceptsPromotions = false;
}

