#pragma once
#include "CoreMinimal.h"
#include "Common_HistoryData_MachineTypeUsage.generated.h"

USTRUCT(BlueprintType)
struct FCommon_HistoryData_MachineTypeUsage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 machineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 usageCount;
    
    UNIONSYSTEM_API FCommon_HistoryData_MachineTypeUsage();
};

