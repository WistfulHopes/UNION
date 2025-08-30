#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGroupRaceRule.h"
#include "ComGadgetEquipTableSetting.h"
#include "ComGadgetEquipFestaRaceRule.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComGadgetEquipFestaRaceRule : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupRaceRule FestaRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComGadgetEquipTableSetting NormalRacerGadget;
    
    FComGadgetEquipFestaRaceRule();
};

