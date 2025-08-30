#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStatePauseMenu.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStatePauseMenu : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStatePauseMenu(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopVehiclePawnSE();
    
};

