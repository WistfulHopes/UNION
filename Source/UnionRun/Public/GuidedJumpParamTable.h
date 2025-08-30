#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GuidedJumpParamTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGuidedJumpParamTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MargeNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRHeightAdjust;
    
    FGuidedJumpParamTable();
};

