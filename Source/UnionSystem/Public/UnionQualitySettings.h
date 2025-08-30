#pragma once
#include "CoreMinimal.h"
#include "EMaterialQuality.h"
#include "ENiagaraQuality.h"
#include "EResourceQuality.h"
#include "UnionQualitySettings.generated.h"

USTRUCT(BlueprintType)
struct FUnionQualitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResourceQuality ResourceQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialQuality GarageMaterialQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickerEditorSreenPercentages;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialQuality MaterialQualities[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLoDPC[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLoDNonPC[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 GFur[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShadowQualities[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarClipDistances[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 DynamicResolutions[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenPercentages[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenPercentagesTypeB[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 FidelityFXFSR[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 FidelityFXRCAS[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraQuality NiagaraQualities[3];
    
    UNIONSYSTEM_API FUnionQualitySettings();
};

