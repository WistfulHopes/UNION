#pragma once
#include "CoreMinimal.h"
#include "ETimeTrialWinLoseDispId.h"
#include "UserTimeTrialCourseData.h"
#include "UserTimeTrialData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserTimeTrialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FUserTimeTrialCourseData> TimeTrialCourseDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeTrialWinLoseDispId LastResultId;
    
    FUserTimeTrialData();
};

