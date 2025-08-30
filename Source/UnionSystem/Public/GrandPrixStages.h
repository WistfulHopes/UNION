#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGrandPrixId.h"
#include "EStageId.h"
#include "GrandPrixStageSetting.h"
#include "GrandPrixStages.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FGrandPrixStages : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrandPrixId GrandPrixId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GrandPrixName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GrandPrixFinalRoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrandPrixStageSetting> Stages;
    
    FGrandPrixStages();
};

