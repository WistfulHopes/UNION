#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "CharaMachineSelectSubStateBase.h"
#include "CharaMachineSelectSubStateCharaSelect.generated.h"

class AMenuRacerBase;
class UCharaMachineSelectsBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UCharaMachineSelectSubStateCharaSelect : public UCharaMachineSelectSubStateBase {
    GENERATED_BODY()
public:
    UCharaMachineSelectSubStateCharaSelect(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterMainMenuAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindCharaMachineSelectsWindow(UCharaMachineSelectsBase* InWindow);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerDriver(EDriverId InDriverId, int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRacerDriver(AMenuRacerBase* InRacer, EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindCharaMachineSelectsWindow(UCharaMachineSelectsBase* InWindow);
    
};

