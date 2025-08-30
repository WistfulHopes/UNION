#pragma once
#include "CoreMinimal.h"
#include "PlayLogOption.h"
#include "PlayLogRanking.h"
#include "PlayLogSpeedSelectPlayCount.h"
#include "PlayLogSaveGameGrandprix.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameGrandprix {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogRanking Ranking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogOption Option;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSpeedSelectPlayCount SpeedSelect[15];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TicketContinueCount[60];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameGrandprix();
};

