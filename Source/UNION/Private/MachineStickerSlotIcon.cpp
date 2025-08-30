#include "MachineStickerSlotIcon.h"

UMachineStickerSlotIcon::UMachineStickerSlotIcon() {
    this->MLC_Base = NULL;
    this->DMY_StickerImage = NULL;
    this->DSP_Cursor = NULL;
    this->WBP_CMN_TextBalloon = NULL;
    this->DSP_Set_Icon = NULL;
    this->DSP_Icon_New = NULL;
    this->MLC_LiquidIcon = NULL;
    this->SlotIndex = 0;
    this->PlayerController = NULL;
    this->bIsClearSoundEnable = true;
    this->FocusSoundCue = NULL;
    this->DecisionSoundCue = NULL;
    this->CancelSoundCue = NULL;
    this->StickerClearSoundCue = NULL;
}

void UMachineStickerSlotIcon::ShowCursor() {
}

void UMachineStickerSlotIcon::Setup(APlayerController* InPlayerController) {
}

void UMachineStickerSlotIcon::SetStickerDesignTexture(UTexture2D* InStickerDesignTexture) {
}

void UMachineStickerSlotIcon::SetItemData(const FMachineStickerSlotItemData& InItemData) {
}

void UMachineStickerSlotIcon::PlaySEStickerClear() {
}

void UMachineStickerSlotIcon::PlaySEFocus() {
}

void UMachineStickerSlotIcon::PlaySEDecision() {
}

void UMachineStickerSlotIcon::PlaySECancel() {
}

void UMachineStickerSlotIcon::HideCursor() {
}

APlayerController* UMachineStickerSlotIcon::GetPlayerController() const {
    return NULL;
}

FMachineStickerSlotItemData UMachineStickerSlotIcon::GetItemData() const {
    return FMachineStickerSlotItemData{};
}


