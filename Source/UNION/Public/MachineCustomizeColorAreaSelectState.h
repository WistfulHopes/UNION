#pragma once
#include "CoreMinimal.h"
#include "EMachineColorAreaUIId.h"
#include "MachineCustomizePage.h"
#include "MachineCustomizeColorAreaSelectState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizeColorAreaSelectState : public UMachineCustomizePage {
    GENERATED_BODY()
public:
    UMachineCustomizeColorAreaSelectState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupPage(bool InDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetupFooter();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMachineColorAreaId(EMachineColorAreaUIId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupPage(bool InDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExit();
    
};

