#pragma once
#include "CoreMinimal.h"
#include "RankingDataTimeTrialUserNoteRapTime.generated.h"

USTRUCT(BlueprintType)
struct FRankingDataTimeTrialUserNoteRapTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rapTime1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rapTime2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rapTime3;
    
    UNIONSYSTEM_API FRankingDataTimeTrialUserNoteRapTime();
};

