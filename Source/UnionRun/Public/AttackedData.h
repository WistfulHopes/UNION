#pragma once
#include "CoreMinimal.h"
#include "AttackedInfo.h"
#include "RacerDamageData.h"
#include "AttackedData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FAttackedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackedInfo AttackedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerDamageData RacerDamageData;
    
    FAttackedData();
};

