#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "RaceUISubRing.h"
#include "RaceUISubGroupRing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubGroupRing : public URaceUISubRing {
    GENERATED_BODY()
public:
    URaceUISubGroupRing();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRingCharaIcon(EDriverId DriverId);
    
};

