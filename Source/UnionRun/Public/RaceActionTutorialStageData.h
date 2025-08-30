#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "RaceActionTutorialTrigger.h"
#include "RaceActionTutorialStageData.generated.h"

USTRUCT(BlueprintType)
struct FRaceActionTutorialStageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInGrandPrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRaceActionTutorialTrigger> RaceActionTutorialParamsList;
    
    UNIONRUN_API FRaceActionTutorialStageData();
};

