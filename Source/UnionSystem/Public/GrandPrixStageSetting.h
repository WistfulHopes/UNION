#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStageId.h"
#include "GrandPrixTravelStageSetting.h"
#include "GrandPrixStageSetting.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FGrandPrixStageSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId MainStageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrandPrixTravelStageSetting> DefaultTravelStageSettings;
    
    FGrandPrixStageSetting();
};

