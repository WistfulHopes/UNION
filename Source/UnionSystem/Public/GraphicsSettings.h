#pragma once
#include "CoreMinimal.h"
#include "EAntiAliasMethod.h"
#include "EFrameRateLimit.h"
#include "EFullscreenMode.h"
#include "EGraphicMode.h"
#include "EGraphicQualityPreset.h"
#include "EModelQuality.h"
#include "EReflectionQuality.h"
#include "ERenderingScale.h"
#include "EShadowQuality.h"
#include "GraphicsSettings.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FGraphicsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 _ScreenBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGraphicMode _GraphicMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 _ResolutionSizeX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 _ResolutionSizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFullscreenMode _FullscreenMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 _UseDisplayId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _VSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrameRateLimit _FrameRateLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGraphicQualityPreset _GraphicQualityPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERenderingScale _RenderingScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModelQuality _ModelQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShadowQuality _ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAntiAliasMethod _AntiAliasMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReflectionQuality _ReflectionQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _AmbientOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _Blur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _AcceptsPromotions;
    
    FGraphicsSettings();
};

