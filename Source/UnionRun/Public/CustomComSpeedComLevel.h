#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERaceSettingComSpeed.h"
#include "ERaceSettingGrouping.h"
#include "EComLotteryRateDataTableType.h"
#include "EComPointDistanceTableType.h"
#include "CustomComSpeedComLevel.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FCustomComSpeedComLevel : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingGrouping RaceSettingGrouping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingComSpeed ComSpeedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NomalLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SonicLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuperSonicLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MirrorLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComLotteryRateDataTableType ItemTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComPointDistanceTableType ItemDist;
    
    FCustomComSpeedComLevel();
};

