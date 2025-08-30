#pragma once
#include "CoreMinimal.h"
#include "UserActivityCardFlagData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserActivityCardFlagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrandPrixWinSubTaskFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 GrandPrixBeatSubTaskFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RaceParkBeatSubTaskFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TimeTrialSonicSpeedSubTaskFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TimeTrialSuperSonicSpeedSubTaskFlags;
    
    FUserActivityCardFlagData();
};

