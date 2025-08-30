#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_FestaPointTeamContribAttackHitData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_FestaPointTeamContribAttackHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 teamOrderPoint4;
    
    UNIONSYSTEM_API FNetMasterData_FestaPointTeamContribAttackHitData();
};

