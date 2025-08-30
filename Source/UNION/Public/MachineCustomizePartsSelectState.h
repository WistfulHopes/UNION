#pragma once
#include "CoreMinimal.h"
#include "EMachineId.h"
#include "EDialogResult.h"
#include "EMachinePartsType.h"
#include "MachineCustomizePage.h"
#include "MachineCustomizePartsSelectState.generated.h"

class UMachinePartsSelectWindow;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizePartsSelectState : public UMachineCustomizePage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomizeUpdateDelay;
    
public:
    UMachineCustomizePartsSelectState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCustomizeModelView();
    
private:
    UFUNCTION(BlueprintCallable)
    void PartsSelected(EMachinePartsType InPartsType, EMachineId InPartsId);
    
    UFUNCTION(BlueprintCallable)
    void PartsFocused(EMachinePartsType InPartsType, EMachineId InPartsId);
    
    UFUNCTION(BlueprintCallable)
    void PartsDialogShow();
    
    UFUNCTION(BlueprintCallable)
    void PartsDialogHide(EDialogResult InResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupPage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartsSelected(EMachinePartsType InPartsType, EMachineId InPartsId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartsFocused(EMachinePartsType InPartsType, EMachineId InPartsId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachinePartsSelectWindow* GetPartsSelectWindow() const;
    
};

