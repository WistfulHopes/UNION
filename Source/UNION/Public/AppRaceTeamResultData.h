#pragma once
#include "CoreMinimal.h"
#include "AppRaceTeamResultData.generated.h"

USTRUCT(BlueprintType)
struct FAppRaceTeamResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamBonusPoint;
    
    UNION_API FAppRaceTeamResultData();
};

