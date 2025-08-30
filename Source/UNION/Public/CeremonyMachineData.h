#pragma once
#include "CoreMinimal.h"
#include "EMachineId.h"
#include "UserMachineCustomizeData.h"
#include "CeremonyMachineData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FCeremonyMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineId MachineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserMachineCustomizeData CustomizeData;
    
    FCeremonyMachineData();
};

