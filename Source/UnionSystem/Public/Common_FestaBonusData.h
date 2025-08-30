#pragma once
#include "CoreMinimal.h"
#include "Common_FestaBonusData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_FestaBonusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bonusRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bonusStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bonusEndTime;
    
    UNIONSYSTEM_API FCommon_FestaBonusData();
};

