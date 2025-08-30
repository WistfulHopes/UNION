#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MachineCustomTop.generated.h"

class UMachineCustomCommonWindow;
class UMachineCustomInfoWindow;
class UMachineTypeScrollControl;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UMachineCustomTop : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineCustomInfoWindow* WBP_MachineCustom_Sub_CurrentWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineTypeScrollControl* WBP_MachineSelect_Sub_TypeWindow;
    
public:
    UMachineCustomTop();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDonpaTicket();
    
    UFUNCTION(BlueprintCallable)
    void ShowDonpaTicket();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleDonpaTicket(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupOther();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMachineSelectWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMachineCustomizeTabWindow(bool IsShowDonpaTicket);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDonpaTicket();
    
    UFUNCTION(BlueprintCallable)
    void HiddenDonpaTicket();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineTypeScrollControl* GetMachineTypeSelectWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineCustomInfoWindow* GetMachineInfoWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UMachineCustomCommonWindow* GetMachineCustomCommonWindow() const;
    
};

