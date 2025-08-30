#include "PartyRaceItemSwitchWindow.h"

UPartyRaceItemSwitchWindow::UPartyRaceItemSwitchWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
}



bool UPartyRaceItemSwitchWindow::IsSameButtonPressing(EPartyRaceItemSwitchWindowButton InWindowButtonSetting) {
    return false;
}

bool UPartyRaceItemSwitchWindow::IsButtonChanged(TArray<FItemSwitchSettingSingle> BackupSetting) {
    return false;
}

void UPartyRaceItemSwitchWindow::HideCertainItems(int32 GroupIndex) {
}

void UPartyRaceItemSwitchWindow::ApplyWindowButtonSetting(EPartyRaceItemSwitchWindowButton InWindowButtonSetting) {
}

void UPartyRaceItemSwitchWindow::ApplyItemSwitchEnablePattern(const TArray<EItemId>& InPatternArr) {
}

void UPartyRaceItemSwitchWindow::AddIcon(const TArray<UPartyRaceItemIcon*>& InIconArr) {
}


