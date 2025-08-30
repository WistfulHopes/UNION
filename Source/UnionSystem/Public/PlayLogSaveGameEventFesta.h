#pragma once
#include "CoreMinimal.h"
#include "PlayLogRanking.h"
#include "PlayLogSaveGameEventFesta.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameEventFesta {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogRanking Ranking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 festaPoint;
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameEventFesta();
};

