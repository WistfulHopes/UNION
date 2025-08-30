#pragma once
#include "CoreMinimal.h"
#include "EUnionCameraModifierPostEffectType.generated.h"

UENUM(BlueprintType)
enum class EUnionCameraModifierPostEffectType : uint8 {
    CameraPostEffect,
    NoBlurCameraPostEffect,
    FlowingWaterEffect,
    BlackoutEffect,
    WhiteoutEffect,
    WarpRingEffect,
    InkEffect,
    Extnd04PostEffect,
    Stg1503FinalInEffect,
    Stg1503FinalOutEffect,
    Max,
};

