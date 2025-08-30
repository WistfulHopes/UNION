#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ComGadgetEquipTableSetting.h"
#include "ComGadgetEquipRivalLevel.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComGadgetEquipRivalLevel : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComGadgetEquipTableSetting RivalRacerGadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComGadgetEquipTableSetting NormalRacerGadget;
    
    FComGadgetEquipRivalLevel();
};

