#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "EMenuInputKey.h"
#include "ERaceInputKey.h"
#include "BPFL_AutoPlay.generated.h"

class AAppPlayerController;
class APlayerController;
class ARacePlayerController;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UBPFL_AutoPlay : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_AutoPlay();

    UFUNCTION(BlueprintCallable)
    static void DoInputRaceReleased(ARacePlayerController* RaceController, ERaceInputKey InKey);
    
    UFUNCTION(BlueprintCallable)
    static void DoInputRacePressed(ARacePlayerController* RaceController, ERaceInputKey InKey, float Amount);
    
    UFUNCTION(BlueprintCallable)
    static void DoInputMenu(AAppPlayerController* AppController, EMenuInputKey InKey);
    
    UFUNCTION(BlueprintCallable)
    static void DoInputKey(APlayerController* Controller, FKey Key, TEnumAsByte<EInputEvent> EventType, double Delta, bool bGamepad);
    
};

