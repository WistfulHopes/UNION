#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LapTimerLibrary.generated.h"

class ULapTimer;

UCLASS(Blueprintable)
class ULapTimerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULapTimerLibrary();

    UFUNCTION(BlueprintCallable)
    static void OutputLog(const ULapTimer* Timer, const FString& Title);
    
};

