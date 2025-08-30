#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_FestaTimeSceduleData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_FestaTimeSceduleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 timeSceduleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 raceRuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 timeMinute;
    
    UNIONSYSTEM_API FNetMasterData_FestaTimeSceduleData();
};

