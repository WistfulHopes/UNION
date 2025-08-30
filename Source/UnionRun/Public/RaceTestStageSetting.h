#pragma once
#include "CoreMinimal.h"
#include "EIrregularEventId.h"
#include "EStageId.h"
#include "ETravelRingScreenType.h"
#include "RaceTestStageSetting.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRaceTestStageSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETravelRingScreenType TravelRingScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIrregularEventId IrregularEventId;
    
    FRaceTestStageSetting();
};

