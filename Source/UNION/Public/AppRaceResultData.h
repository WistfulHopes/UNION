#pragma once
#include "CoreMinimal.h"
#include "AppRacePlayerResultData.h"
#include "AppRaceTeamResultData.h"
#include "AppRaceResultData.generated.h"

USTRUCT(BlueprintType)
struct FAppRaceResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppRacePlayerResultData> PlayerResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppRaceTeamResultData> TeamResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> RankEarnPointDefault;
    
    UNION_API FAppRaceResultData();
};

