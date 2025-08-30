#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MonsterTruckCockpitData.h"
#include "MonsterTruckCockpitAssetData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMonsterTruckCockpitAssetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMonsterTruckCockpitData CockpitData;
    
    FMonsterTruckCockpitAssetData();
};

