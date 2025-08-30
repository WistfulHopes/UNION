#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GadgetCustomizeWindowData.h"
#include "GadgetCustomizeWindow.generated.h"

class UCharaMachineParamWindow;
class UCommonCountNumberWidget;
class UGadgetCustomWindow;
class UGadgetDetailWindow;
class UGadgetPlateWindow;
class UGadgetSelectWindow;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGadgetCustomizeWindow : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiPlayerControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFestaSpecialRule;
    
public:
    UGadgetCustomizeWindow();

    UFUNCTION(BlueprintCallable)
    void SetupPlayerCharaNames();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const FGadgetCustomizeWindowData& InWindowData, const bool bInFestaSpecialRule);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlateWindowZorderHigherThanSelectWindow(int32 InPlayerControllerIndex, bool bPlateWindowHigher);
    
    UFUNCTION(BlueprintCallable)
    void SetMultiPlayerControl(const bool InMultiPlayControl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMultiPlayerControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UCommonCountNumberWidget* GetTicketBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UGadgetSelectWindow* GetSelectWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetPlateWindows(TArray<UGadgetPlateWindow*>& OutPlateWindows) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetmachineParameterWindows(TArray<UCharaMachineParamWindow*>& OutMachineParameterWindows) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetGadgetCustomWindows(TArray<UGadgetCustomWindow*>& OutGadgetCustomWindows) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetDetailWindows(TArray<UGadgetDetailWindow*>& OutDetailWindows) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharaNameBoxes(TArray<UUnionRichTextBlock*>& OutCharaNameBoxes) const;
    
};

