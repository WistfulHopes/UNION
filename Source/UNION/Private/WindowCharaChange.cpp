#include "WindowCharaChange.h"

UWindowCharaChange::UWindowCharaChange() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->DSP_WBP_CMN_GadgetCount = NULL;
    this->WrapBox = NULL;
    this->DSP_Text = NULL;
    this->TXT_SuperSonicInfo = NULL;
    this->ButtonsPanel = NULL;
}





void UWindowCharaChange::OpenEnd() {
}


void UWindowCharaChange::IconUnhover(int32 InPlayerControllerIndex, int32 InCharaIndex) {
}

void UWindowCharaChange::IconHover(int32 InPlayerControllerIndex, int32 InCharaIndex) {
}

void UWindowCharaChange::IconDecision(int32 InPlayerControllerIndex, int32 InCharaIndex) {
}

void UWindowCharaChange::IconCancel(int32 InPlayerControllerIndex) {
}

void UWindowCharaChange::CloseEnd() {
}


