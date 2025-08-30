#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EComGadgetEquipTableType.h"
#include "ComGadgetEquipTableSetting.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComGadgetEquipTableSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComGadgetEquipTableType TableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GadgetEquipGr;
    
    FComGadgetEquipTableSetting();
};

