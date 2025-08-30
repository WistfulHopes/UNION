#pragma once
#include "CoreMinimal.h"
#include "Common_HistoryData_CharacterUsage.h"
#include "Common_HistoryData_MachineTypeUsage.h"
#include "Common_HistoryData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_HistoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_HistoryData_CharacterUsage> characterUsages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_HistoryData_MachineTypeUsage> machineTypeUsages;
    
    UNIONSYSTEM_API FCommon_HistoryData();
};

