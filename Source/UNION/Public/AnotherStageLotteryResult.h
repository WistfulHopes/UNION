#pragma once
#include "CoreMinimal.h"
#include "EDomainIndex.h"
#include "EIrregularEventId.h"
#include "EStageId.h"
#include "ETravelRingScreenType.h"
#include "AnotherStageLotteryResult.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FAnotherStageLotteryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETravelRingScreenType TravelRingScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIrregularEventId IrregularEventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainIndex DomainIndex;
    
    FAnotherStageLotteryResult();
};

