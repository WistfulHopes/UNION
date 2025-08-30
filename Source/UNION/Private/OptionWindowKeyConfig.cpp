#include "OptionWindowKeyConfig.h"

UOptionWindowKeyConfig::UOptionWindowKeyConfig() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->ParentPanel = NULL;
    this->ButtonPanel = NULL;
    this->CreateErrorPopup = NULL;
    this->InnerScroll = NULL;
}

void UOptionWindowKeyConfig::SetupWindow() {
}

void UOptionWindowKeyConfig::SetupSwapKey(FName ChangeKeyName, uint8 KeyType, FKey NewKey) {
}


void UOptionWindowKeyConfig::OpenWindow() {
}

void UOptionWindowKeyConfig::OnFocusButtonItem(UUnionUIButtonBase* InButton) {
}

void UOptionWindowKeyConfig::OnExitMenu() {
}

void UOptionWindowKeyConfig::OnBackToCellList() {
}

void UOptionWindowKeyConfig::Init(EOptionLocalPlayerNumber SelectPlayerNumber) {
}

void UOptionWindowKeyConfig::DestroyErrorWindow(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx) {
}


