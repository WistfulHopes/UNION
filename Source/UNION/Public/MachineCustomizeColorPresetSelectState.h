#pragma once
#include "CoreMinimal.h"
#include "MachineCustomizePage.h"
#include "MachineCustomizeColorPresetSelectState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizeColorPresetSelectState : public UMachineCustomizePage {
    GENERATED_BODY()
public:
    UMachineCustomizeColorPresetSelectState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupPage();
    
};

