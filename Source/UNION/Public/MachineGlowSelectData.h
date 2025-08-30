#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MachineGlowSelectData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineGlowSelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MachineGlowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    FMachineGlowSelectData();
};

