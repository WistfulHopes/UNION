#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "UsageCountChara.generated.h"

USTRUCT(BlueprintType)
struct FUsageCountChara {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 usageCount;
    
    UNION_API FUsageCountChara();
};

