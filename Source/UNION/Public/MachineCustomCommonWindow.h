#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMachineCustomizeTabWindowPageID.h"
#include "MachineCustomCommonWindow.generated.h"

class UMachineCustomTab;
class UMachineCustomizeCustomList;
class UMachinePartsSelectWindow;
class UMachineStickerSelectWindow;
class UMachineStickerSlotSelectWindow;
class UUnionUISceneBase;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UMachineCustomCommonWindow : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_MachineCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineCustomTab* WBP_MachineCustom_Tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachinePartsSelectWindow* WBP_MachineCustom_Sub_Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUISceneBase* WBP_MachineCustom_Sub_PresetPaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUISceneBase* WBP_MachineCustom_Sub_CustomPaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUISceneBase* WBP_MachineCustom_Sub_ColorPicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineCustomizeCustomList* WBP_MachineCustom_Sub_CustomList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineStickerSlotSelectWindow* WBP_MachineCustom_Sub_StickerTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineStickerSelectWindow* WBP_MachineCustom_Sub_StickerSelect;
    
public:
    UMachineCustomCommonWindow();

    UFUNCTION(BlueprintCallable)
    void SwitchPage(EMachineCustomizeTabWindowPageID InPageID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineCustomTab* GetTabWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineStickerSlotSelectWindow* GetStickerTopPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineStickerSelectWindow* GetStickerSelectPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachinePartsSelectWindow* GetPartsSelectWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineCustomizeCustomList* GetCustomList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUISceneBase* GetColorPresetSelectPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUISceneBase* GetColorDetailPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUISceneBase* GetColorAreaSelectPage() const;
    
};

