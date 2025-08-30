#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBreakObjType.h"
#include "BreakObjectRandomParamTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FBreakObjectRandomParamTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakObjType BreakObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RandomWeight;
    
    FBreakObjectRandomParamTable();
};

