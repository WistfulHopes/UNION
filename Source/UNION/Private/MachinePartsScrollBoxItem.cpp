#include "MachinePartsScrollBoxItem.h"

UMachinePartsScrollBoxItem::UMachinePartsScrollBoxItem() {
    this->MLC_Base = NULL;
    this->DMY_PartsIcon_FR = NULL;
    this->P1_Cursor = NULL;
    this->P2_Cursor = NULL;
    this->P3_Cursor = NULL;
    this->P4_Cursor = NULL;
    this->DSP_Set_Icon = NULL;
    this->DSP_Icon_New = NULL;
    this->WBP_ShopLabel = NULL;
    this->FocusSoundCue = NULL;
    this->DecisionSoundCue = NULL;
    this->CancelSoundCue = NULL;
}

void UMachinePartsScrollBoxItem::PlaySEDecision() {
}

void UMachinePartsScrollBoxItem::PlaySECancel() {
}




UWidget* UMachinePartsScrollBoxItem::OnDirection(EUINavigation InNavigation) {
    return NULL;
}

bool UMachinePartsScrollBoxItem::GetSelected() {
    return false;
}

APlayerController* UMachinePartsScrollBoxItem::GetPlayerController() const {
    return NULL;
}

FLinearColor UMachinePartsScrollBoxItem::GetBaseColorOnSelected() const {
    return FLinearColor{};
}

FLinearColor UMachinePartsScrollBoxItem::GetBaseColorOnNotSelected() const {
    return FLinearColor{};
}


