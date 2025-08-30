#pragma once
#include "CoreMinimal.h"
#include "Common_FestaBonusData.h"
#include "Common_FestaData.h"
#include "Common_FestaTimeData.h"
#include "FestaFestaTopResponse.generated.h"

USTRUCT(BlueprintType)
struct FFestaFestaTopResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_FestaData festaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_FestaBonusData bonusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVoltage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ruleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_FestaTimeData> timeSchedule;
    
    UNIONSYSTEM_API FFestaFestaTopResponse();
};

