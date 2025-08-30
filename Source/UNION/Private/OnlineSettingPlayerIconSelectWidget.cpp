#include "OnlineSettingPlayerIconSelectWidget.h"

UOnlineSettingPlayerIconSelectWidget::UOnlineSettingPlayerIconSelectWidget() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->IconLineNum = 6;
    this->LoadPlayerIconDataTable = NULL;
    this->LoadPlayerIconBgColorDataTable = NULL;
    this->bPlayerIconSelect = true;
    this->InitialSelectIndex = 0;
    this->SelectIndex = 0;
    this->ListIconNum = 0;
}



bool UOnlineSettingPlayerIconSelectWidget::GetPlayerIconSelect() {
    return false;
}

UUnionUIButtonsPanel* UOnlineSettingPlayerIconSelectWidget::GetButtonsPanel() {
    return NULL;
}



