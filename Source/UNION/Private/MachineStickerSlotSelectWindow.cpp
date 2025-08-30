#include "MachineStickerSlotSelectWindow.h"

UMachineStickerSlotSelectWindow::UMachineStickerSlotSelectWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->WBP_MachineCustom_Sub_StickerSlot = NULL;
    this->PlayerIndex = 0;
    this->WBP_CustomSticker_Sub_PartsIcon_01 = NULL;
    this->WBP_CustomSticker_Sub_PartsIcon_02 = NULL;
    this->WBP_CustomSticker_Sub_PartsIcon_03 = NULL;
    this->WBP_CustomSticker_Sub_PartsIcon_04 = NULL;
    this->WBP_CustomSticker_Sub_PartsIcon_05 = NULL;
    this->WBP_CustomSticker_Sub_PartsIcon_06 = NULL;
    this->WBP_CustomSticker_Sub_PartsIcon_07 = NULL;
    this->WBP_CustomSticker_Sub_PartsIcon_08 = NULL;
    this->DecisionSoundCue = NULL;
    this->CancelSoundCue = NULL;
}

FEventReply UMachineStickerSlotSelectWindow::OnFocusReceivedImpl(FGeometry MyGeometry, FFocusEvent InFocusEvent) {
    return FEventReply{};
}


