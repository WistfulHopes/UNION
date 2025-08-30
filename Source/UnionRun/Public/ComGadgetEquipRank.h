#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ComGadgetEquipTableSetting.h"
#include "ComGadgetEquipRank.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComGadgetEquipRank : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComGadgetEquipTableSetting NormalRacerGadget;
    
    FComGadgetEquipRank();
};

