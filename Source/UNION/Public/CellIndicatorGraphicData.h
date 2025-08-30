#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAntiAliasMethod.h"
#include "EFrameRateLimit.h"
#include "EFullscreenMode.h"
#include "EGraphicMode.h"
#include "EGraphicQualityPreset.h"
#include "EModelQuality.h"
#include "EReflectionQuality.h"
#include "ERenderingScale.h"
#include "EShadowQuality.h"
#include "CellIndicatorGraphicData.generated.h"

UCLASS(Blueprintable)
class UNION_API UCellIndicatorGraphicData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGraphicMode, FText> GraphicMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFullscreenMode, FText> FullscreenMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MonitorNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> VSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFrameRateLimit, FText> FrameRateLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGraphicQualityPreset, FText> GraphicQualityPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EModelQuality, FText> ModelQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EShadowQuality, FText> ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAntiAliasMethod, FText> AntiAliasMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EReflectionQuality, FText> ReflectionQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> AmbientOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERenderingScale, FText> RenderingScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> Blur;
    
    UCellIndicatorGraphicData();

};

