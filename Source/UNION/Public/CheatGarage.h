#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatGarage.generated.h"

UCLASS(Blueprintable)
class UCheatGarage : public UObject {
    GENERATED_BODY()
public:
    UCheatGarage();

    UFUNCTION(BlueprintCallable, Exec)
    void GarageMatchingTimeOut(float InTimeOutTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GarageExit();
    
};

