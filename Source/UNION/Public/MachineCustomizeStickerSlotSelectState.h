#pragma once
#include "CoreMinimal.h"
#include "MachineCustomizePage.h"
#include "MachineCustomizeStickerSlotSelectState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizeStickerSlotSelectState : public UMachineCustomizePage {
    GENERATED_BODY()
public:
    UMachineCustomizeStickerSlotSelectState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupPage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
};

