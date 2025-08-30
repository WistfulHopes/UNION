#pragma once
#include "CoreMinimal.h"
#include "ERacerDamagePropertyChangeType.h"
#include "RacerDamagePropertyChangeData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerDamagePropertyChangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERacerDamagePropertyChangeType ChangType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedlValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecelRatio;
    
    FRacerDamagePropertyChangeData();
};

