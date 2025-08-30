#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECarStatusType.h"
#include "MachineTypeData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineTypeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarStatusType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FMachineTypeData();
};

