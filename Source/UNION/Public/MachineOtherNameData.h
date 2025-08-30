#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MachineOtherName.h"
#include "MachineOtherNameData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineOtherNameData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMachineOtherName> OtherNameData;
    
    FMachineOtherNameData();
};

