#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugViewBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UDebugViewBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugViewBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ToggleEffectsEnable();
    
    UFUNCTION(BlueprintCallable)
    static void ToggleEffectsDisable();
    
    UFUNCTION(BlueprintCallable)
    static void ToggleEffectsCacheReset();
    
    UFUNCTION(BlueprintCallable)
    static void ToggleEffectsCacheEmpty();
    
    UFUNCTION(BlueprintCallable)
    static void ToggleEffects(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleDisplayNiagaraBounds(const bool bEnable);
    
};

