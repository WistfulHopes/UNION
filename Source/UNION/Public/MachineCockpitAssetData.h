#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECarStatusType.h"
#include "EDriverSize.h"
#include "MachineCockpitData.h"
#include "MachineCockpitAssetData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineCockpitAssetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarStatusType CarStatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverSize, FMachineCockpitData> CockpitData;
    
    FMachineCockpitAssetData();
};

