#pragma once
#include "CoreMinimal.h"
#include "GroupHitInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGroupHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupBonusHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> RacersHitCountList;
    
    FGroupHitInfo();
};

