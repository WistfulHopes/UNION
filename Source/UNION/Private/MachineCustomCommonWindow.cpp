#include "MachineCustomCommonWindow.h"

UMachineCustomCommonWindow::UMachineCustomCommonWindow() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetSwitcher_MachineCustom = NULL;
    this->WBP_MachineCustom_Tab = NULL;
    this->WBP_MachineCustom_Sub_Parts = NULL;
    this->WBP_MachineCustom_Sub_PresetPaint = NULL;
    this->WBP_MachineCustom_Sub_CustomPaint = NULL;
    this->WBP_MachineCustom_Sub_ColorPicker = NULL;
    this->WBP_MachineCustom_Sub_CustomList = NULL;
    this->WBP_MachineCustom_Sub_StickerTop = NULL;
    this->WBP_MachineCustom_Sub_StickerSelect = NULL;
}

void UMachineCustomCommonWindow::SwitchPage(EMachineCustomizeTabWindowPageID InPageID) {
}

UMachineCustomTab* UMachineCustomCommonWindow::GetTabWidget() const {
    return NULL;
}

UMachineStickerSlotSelectWindow* UMachineCustomCommonWindow::GetStickerTopPage() const {
    return NULL;
}

UMachineStickerSelectWindow* UMachineCustomCommonWindow::GetStickerSelectPage() const {
    return NULL;
}

UMachinePartsSelectWindow* UMachineCustomCommonWindow::GetPartsSelectWindow() const {
    return NULL;
}

UMachineCustomizeCustomList* UMachineCustomCommonWindow::GetCustomList() const {
    return NULL;
}

UUnionUISceneBase* UMachineCustomCommonWindow::GetColorPresetSelectPage() const {
    return NULL;
}

UUnionUISceneBase* UMachineCustomCommonWindow::GetColorDetailPage() const {
    return NULL;
}

UUnionUISceneBase* UMachineCustomCommonWindow::GetColorAreaSelectPage() const {
    return NULL;
}


