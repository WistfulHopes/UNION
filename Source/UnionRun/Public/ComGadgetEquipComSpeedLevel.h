#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERaceSettingComSpeed.h"
#include "ComGadgetEquipTableSetting.h"
#include "ComGadgetEquipComSpeedLevel.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComGadgetEquipComSpeedLevel : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingComSpeed ComSpeedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComGadgetEquipTableSetting NormalRacerGadget;
    
    FComGadgetEquipComSpeedLevel();
};

