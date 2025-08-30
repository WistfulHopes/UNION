#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "RacerReactionVoiceList.h"
#include "RacerReactionChrData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerReactionChrData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerReactionVoiceList list;
    
    FRacerReactionChrData();
};

