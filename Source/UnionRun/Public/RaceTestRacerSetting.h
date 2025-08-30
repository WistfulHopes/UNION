#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "EGadgetId.h"
#include "EMachineId.h"
#include "ERaceTestRacerRunMode.h"
#include "RaceTestRacerSetting.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRaceTestRacerSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId Driver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineId machine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<EGadgetId> Gadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceTestRacerRunMode RunMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupSetting;
    
    FRaceTestRacerSetting();
};

