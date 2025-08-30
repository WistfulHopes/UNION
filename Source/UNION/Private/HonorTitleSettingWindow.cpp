#include "HonorTitleSettingWindow.h"

UHonorTitleSettingWindow::UHonorTitleSettingWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->HonorTitleSettingUserPlate = NULL;
    this->CurrentTabCnt = 0;
}

void UHonorTitleSettingWindow::SortGeneratedHonorTitle() {
}

void UHonorTitleSettingWindow::SetupTabsNewIcon(UHonorTitleSettingTab* TabWindow) {
}

void UHonorTitleSettingWindow::SetupNavigation() {
}


UHonorTitleListDataAsset* UHonorTitleSettingWindow::GetHonorTitleListDataAsset() const {
    return NULL;
}


void UHonorTitleSettingWindow::GenerateCurrentTabHonorTitle() {
}



