#pragma once
#include "CoreMinimal.h"
#include "CustomRaceSetting.h"
#include "OnlineConnectionInfo.h"
#include "OnlineCourseParam.h"
#include "OnlineGroupInfo.h"
#include "OnlineRacerParam.h"
#include "OnlineReplayRaceBase.h"
#include "OnlineRaceReplay.generated.h"

USTRUCT(BlueprintType)
struct FOnlineRaceReplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineReplayRaceBase ReplayRaceBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineGroupInfo GroupInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomRaceSetting CustomRaceSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineCourseParam CourseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnlineRacerParam> RacerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineConnectionInfo ConnectionInfo;
    
    UNIONRUN_API FOnlineRaceReplay();
};

