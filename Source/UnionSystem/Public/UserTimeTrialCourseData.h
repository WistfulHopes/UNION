#pragma once
#include "CoreMinimal.h"
#include "UserTimeTrialRaceData.h"
#include "UserTimeTrialCourseData.generated.h"

USTRUCT(BlueprintType)
struct FUserTimeTrialCourseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> Acquistion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FUserTimeTrialRaceData> RaceData;
    
    UNIONSYSTEM_API FUserTimeTrialCourseData();
};

