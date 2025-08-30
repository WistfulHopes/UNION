#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStageId.h"
#include "TimeTrialTargetTimeTableData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FTimeTrialTargetTimeTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> RankTime;
    
    FTimeTrialTargetTimeTableData();
};

