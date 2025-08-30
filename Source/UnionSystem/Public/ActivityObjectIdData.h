#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "EGameModeId.h"
#include "EGameTaskType.h"
#include "EGrandPrixId.h"
#include "ERivalTeamId.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "ActivityObjectIdData.generated.h"

USTRUCT(BlueprintType)
struct FActivityObjectIdData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeId GameActivityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameTaskType GameTaskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrandPrixId GrandPrixId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId RivalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalTeamId RivalTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedClassId SpeedClassId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityIdString;
    
    UNIONSYSTEM_API FActivityObjectIdData();
};

