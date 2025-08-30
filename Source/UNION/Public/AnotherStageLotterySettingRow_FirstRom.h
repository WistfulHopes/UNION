#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIrregularEventId.h"
#include "EStageId.h"
#include "EIrregularEventLotteryPattern.h"
#include "ETravelRingScreenLotteryPattern.h"
#include "AnotherStageLotterySettingRow_FirstRom.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FAnotherStageLotterySettingRow_FirstRom : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageId, int32> AnotherStageWeightMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExclusiveTravelRingAppearancePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETravelRingScreenLotteryPattern, int32> TravelRingScreenPatternWeightMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIrregularEventLotteryPattern, int32> IrregularEventPatternWeightMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExclusiveIrregularEventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIrregularEventId, int32> IrregularEventWeightMap;
    
    FAnotherStageLotterySettingRow_FirstRom();
};

