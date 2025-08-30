#pragma once
#include "CoreMinimal.h"
#include "Common_FestaBonusChanceData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_FestaBonusChanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusChanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param;
    
    UNIONSYSTEM_API FCommon_FestaBonusChanceData();
};

