#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGameModeId.h"
#include "EPlayLogGameModeId.h"
#include "PlayLogBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UPlayLogBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayLogBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ModeStartPlayLogGameModeID(EPlayLogGameModeId InGameModeId);
    
    UFUNCTION(BlueprintCallable)
    static void ModeStart(EGameModeId InGameModeId);
    
    UFUNCTION(BlueprintCallable)
    static void ModeEndPlayLogGameModeID(EPlayLogGameModeId InGameModeId);
    
    UFUNCTION(BlueprintCallable)
    static void ModeEnd(EGameModeId InGameModeId);
    
};

