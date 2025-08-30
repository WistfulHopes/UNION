#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "EGameModeId.h"
#include "DriverIdUtilityLibrary.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UDriverIdUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDriverIdUtilityLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDriverId GetRivalDriverId(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDriverId GetRaceRivalDriverId(EGameModeId GameModeID, EDriverId InDriverId);
    
};

