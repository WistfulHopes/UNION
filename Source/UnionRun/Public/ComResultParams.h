#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESpeedClassId.h"
#include "ComResultParams.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComResultParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedClassId SpeedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaceNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaceSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistHigherMachine;
    
    FComResultParams();
};

