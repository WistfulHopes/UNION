#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EUnionSurfaceType.h"
#include "ETireMarkStatusType.h"
#include "TireMaterialData.h"
#include "TireMarkAssetData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FTireMarkAssetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> OffsetUVArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionSurfaceType, FTireMaterialData> MaterialMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETireMarkStatusType, FTireMaterialData> MaterialStatusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> WideScaleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> WideScaleLevelArray;
    
    FTireMarkAssetData();
};

