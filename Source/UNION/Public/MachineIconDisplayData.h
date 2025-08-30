#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MachineIconDisplayData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineIconDisplayData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconSize;
    
    FMachineIconDisplayData();
};

