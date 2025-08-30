#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERivalTeamId.h"
#include "ComGadgetEquipTableSetting.h"
#include "ComGadgetEquipRivalTeamAndLevel.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComGadgetEquipRivalTeamAndLevel : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalTeamId RivalTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComGadgetEquipTableSetting RivalRacerGadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComGadgetEquipTableSetting NormalRacerGadget;
    
    FComGadgetEquipRivalTeamAndLevel();
};

