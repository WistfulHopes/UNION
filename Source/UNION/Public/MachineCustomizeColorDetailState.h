#pragma once
#include "CoreMinimal.h"
#include "MachineCustomizePage.h"
#include "MachineCustomizeColorDetailState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizeColorDetailState : public UMachineCustomizePage {
    GENERATED_BODY()
public:
    UMachineCustomizeColorDetailState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupPage();
    
};

