#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECarStatusType.h"
#include "EDriverSize.h"
#include "MachineOffsetAssetData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineOffsetAssetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarStatusType CarStatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverSize DriverSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HudOffsetY;
    
    FMachineOffsetAssetData();
};

