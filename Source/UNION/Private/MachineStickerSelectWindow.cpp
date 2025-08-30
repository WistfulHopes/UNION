#include "MachineStickerSelectWindow.h"

UMachineStickerSelectWindow::UMachineStickerSelectWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->PlayerIndex = 0;
    this->DecisionSoundCue = NULL;
    this->CancelSoundCue = NULL;
}

FEventReply UMachineStickerSelectWindow::OnFocusReceivedImpl(FGeometry MyGeometry, FFocusEvent InFocusEvent) {
    return FEventReply{};
}


