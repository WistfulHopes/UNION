#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DriftEffectParameter.h"
#include "DriftEffectProperty.h"
#include "MachineMaterialParameterDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API UMachineMaterialParameterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriftEffectProperty FrontDriftEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriftEffectProperty CenterDriftEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriftEffectProperty RearDriftEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriftEffectProperty TireDriftEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriftEffectProperty MonsterTruckDriftEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyCutEffectIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriftEffectParameter DamageEffectParam;
    
    UMachineMaterialParameterDataAsset();

};

