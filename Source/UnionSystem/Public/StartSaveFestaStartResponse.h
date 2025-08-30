#pragma once
#include "CoreMinimal.h"
#include "Common_FestaBonusChanceData.h"
#include "Common_FestaBonusData.h"
#include "Common_FestaTimeData.h"
#include "StartSaveFestaStartResponse.generated.h"

USTRUCT(BlueprintType)
struct FStartSaveFestaStartResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_FestaBonusData bonusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVoltage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_FestaTimeData> timeSchedule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_FestaBonusChanceData BonusChanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString entryRaceId;
    
    UNIONSYSTEM_API FStartSaveFestaStartResponse();
};

