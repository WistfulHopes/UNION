#pragma once
#include "CoreMinimal.h"
#include "EMachineId.h"
#include "MachineCustomizePage.h"
#include "MachineCustomizeMachineSelectState.generated.h"

class UMachineTypeScrollControl;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizeMachineSelectState : public UMachineCustomizePage {
    GENERATED_BODY()
public:
    UMachineCustomizeMachineSelectState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRacer(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindMachineTypeSelectWindow(UMachineTypeScrollControl* InMachineTypeSelectWindow);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetupFooter();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRacerHidden(bool IsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable)
    void EventMachineIconSubsystem_OnIconCaptured(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindMachineTypeSelectWindow(UMachineTypeScrollControl* InMachineTypeSelectWindow);
    
};

