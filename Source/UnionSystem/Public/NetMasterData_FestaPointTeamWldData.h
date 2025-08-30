#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_FestaPointTeamWldData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_FestaPointTeamWldData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pointTeamWldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint3;
    
    UNIONSYSTEM_API FNetMasterData_FestaPointTeamWldData();
};

