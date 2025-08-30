#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EUnionSurfaceType.h"
#include "EUnionExtraSurfaceEffectType.h"
#include "MachineSurfaceEffectAssetData.h"
#include "MachineSurfaceEffectData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineSurfaceEffectData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionSurfaceType, FMachineSurfaceEffectAssetData> SurfaceAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionExtraSurfaceEffectType, FMachineSurfaceEffectAssetData> ExtraAssets;
    
    FMachineSurfaceEffectData();
};

