#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MachineSurfaceEffectAssetData.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct UNION_API FMachineSurfaceEffectAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> AssetLOD0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> AssetLOD1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> AssetLOD2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptionParam;
    
    FMachineSurfaceEffectAssetData();
};

