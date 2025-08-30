#pragma once
#include "CoreMinimal.h"
#include "Common_FestaBonusData.h"
#include "Common_FestaData.h"
#include "Common_FestaPointData.h"
#include "Common_FestaTimeData.h"
#include "Common_RankingOrder.h"
#include "ResultSaveFestaResultResponse.generated.h"

USTRUCT(BlueprintType)
struct FResultSaveFestaResultResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_FestaData festaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder myRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_FestaBonusData bonusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVoltage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_FestaTimeData> timeSchedule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_FestaPointData pointData;
    
    UNIONSYSTEM_API FResultSaveFestaResultResponse();
};

