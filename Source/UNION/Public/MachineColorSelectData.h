#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MachineColorSelectData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineColorSelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MachineColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    FMachineColorSelectData();
};

