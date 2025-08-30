#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder_UserNote_MachineTypeUsage.generated.h"

USTRUCT(BlueprintType)
struct FCommon_RankingOrder_UserNote_MachineTypeUsage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 machineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 usageCount;
    
    UNIONSYSTEM_API FCommon_RankingOrder_UserNote_MachineTypeUsage();
};

