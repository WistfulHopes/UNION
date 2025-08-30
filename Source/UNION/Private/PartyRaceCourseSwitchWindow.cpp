#include "PartyRaceCourseSwitchWindow.h"

UPartyRaceCourseSwitchWindow::UPartyRaceCourseSwitchWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->TopParent = NULL;
}



void UPartyRaceCourseSwitchWindow::ApplyWindowButtonSetting(EPartyRaceCourseSwitchWindowButton InWindowButtonSetting) {
}

void UPartyRaceCourseSwitchWindow::ApplyCourseSwitchEnablePattern(const TArray<EStageId>& InPatternArr) {
}


