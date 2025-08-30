#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "RacerReactionStageData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerReactionStageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedRate;
    
    FRacerReactionStageData();
};

