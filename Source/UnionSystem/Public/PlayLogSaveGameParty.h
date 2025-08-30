#pragma once
#include "CoreMinimal.h"
#include "PlayLogRanking.h"
#include "PlayLogSaveGameParty.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameParty {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogRanking Ranking[17];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount[17];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayTime[17];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameParty();
};

