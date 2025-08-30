#pragma once
#include "CoreMinimal.h"
#include "RacerDamageDirectionInterference.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerDamageDirectionInterference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalInterferenceRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalInterferenceRatio;
    
    FRacerDamageDirectionInterference();
};

