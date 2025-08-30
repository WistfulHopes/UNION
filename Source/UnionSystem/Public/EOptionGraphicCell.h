#pragma once
#include "CoreMinimal.h"
#include "EOptionGraphicCell.generated.h"

UENUM(BlueprintType)
enum class EOptionGraphicCell : uint8 {
    Brightness,
    GraphicMode,
    Resolusion,
    FullScreenMode,
    Monitor,
    VSync,
    FrameRateLimit,
    GraphicQualityPreset,
    ModelQuality,
    ShadowQuality,
    AntiAliasMethod,
    ReflectionQuality,
    AmbientOcclusion,
    RenderingScale,
    Blur,
};

