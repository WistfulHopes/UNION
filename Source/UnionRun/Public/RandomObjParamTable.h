#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERandomObjType.h"
#include "RandomObjParamTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRandomObjParamTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERandomObjType ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RandomWeight;
    
    FRandomObjParamTable();
};

