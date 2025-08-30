#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "AppRaceEventGoalData.generated.h"

USTRUCT(BlueprintType)
struct FAppRaceEventGoalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UNIONSYSTEM_API FAppRaceEventGoalData();
};

