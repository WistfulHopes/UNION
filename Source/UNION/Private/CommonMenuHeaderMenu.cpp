#include "CommonMenuHeaderMenu.h"

UCommonMenuHeaderMenu::UCommonMenuHeaderMenu() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->InfoScene = NULL;
    this->RuleTimeTableScene = NULL;
    this->EmoteWheelButton = NULL;
    this->JukeBoxButton = NULL;
    this->ButtonArr.AddDefaulted(1);
    this->UserInfoScene = NULL;
    this->HeaderNewsBtn = NULL;
    this->MatchingStateScene = NULL;
}




void UCommonMenuHeaderMenu::UpdateFestaTimeScheduleAndWidget() {
}

void UCommonMenuHeaderMenu::SetVisibilityUserInfoScene(ESlateVisibility InVisibility) {
}

void UCommonMenuHeaderMenu::SetVisibilityTeamInfoScene(ESlateVisibility InVisibility) {
}

void UCommonMenuHeaderMenu::SetVisibilityRuleTimeTableScene(ESlateVisibility InVisibility) {
}

void UCommonMenuHeaderMenu::SetVisibilityRuleTimeTableOverlay(bool bInIsVisible) {
}

void UCommonMenuHeaderMenu::SetVisibilityRuleTimeTableButtonIcon(ESlateVisibility InVisibility) {
}

void UCommonMenuHeaderMenu::SetVisibilityRuleTimeRankCalcWidget(ESlateVisibility InVisibility) {
}

void UCommonMenuHeaderMenu::SetVisibilityRuleTimeOpenWidget(ESlateVisibility InVisibility) {
}

void UCommonMenuHeaderMenu::SetVisibilityNewsBtn(ESlateVisibility InVisibility) {
}

void UCommonMenuHeaderMenu::SetVisibilityHeaderRightBtn(ESlateVisibility InVisibility) {
}

void UCommonMenuHeaderMenu::Setup_Implementation() {
}

void UCommonMenuHeaderMenu::SetRuleTimeTableFiexed(EGroupRaceRule InFixedRule) {
}

void UCommonMenuHeaderMenu::SetRuleTimeTable(int32 InTimetableIndex, FDateTime InTime, FRestoredRule InCurrentRule, bool bIsEnd) {
}

void UCommonMenuHeaderMenu::SetHeaderUserData_Implementation(const FText& InUserName, int32 InHonorId, ECrossplayPlatform InPlatformId, int32 InWinCounts, ERateRank InRateRank, float InRankPercent) {
}

void UCommonMenuHeaderMenu::RemoveFromViewportHeader_Implementation() {
}




void UCommonMenuHeaderMenu::OnInitialize_Implementation() {
}

ESlateVisibility UCommonMenuHeaderMenu::GetVisibilityRuleTimeTableScene() {
    return ESlateVisibility::Visible;
}

ECrossplayPlatform UCommonMenuHeaderMenu::GetConvertPlatform(EAppSupportedPlatform InAppSupportedPlatformId) {
    return ECrossplayPlatform::Xbox;
}

void UCommonMenuHeaderMenu::AddToViewportHeader_Implementation() {
}


