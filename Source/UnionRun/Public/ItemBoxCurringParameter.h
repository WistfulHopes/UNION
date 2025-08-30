#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStageId.h"
#include "ItemBoxCurringParameter.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FItemBoxCurringParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurringDistance;
    
    FItemBoxCurringParameter();
};

