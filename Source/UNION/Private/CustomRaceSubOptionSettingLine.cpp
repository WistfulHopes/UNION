#include "CustomRaceSubOptionSettingLine.h"

UCustomRaceSubOptionSettingLine::UCustomRaceSubOptionSettingLine() {
    this->SettingLineIndex = ECustomRaceSettingLine::SpeedClass;
    this->SettingType = ECustomRaceSettingLineType::OnlyOne;
    this->SettingButtonsPanel = NULL;
    this->SubSettingButtonsPanel = NULL;
    this->SubButtonIndex = 0;
    this->DefaultIndex = 0;
    this->LastIndex = 0;
}

void UCustomRaceSubOptionSettingLine::WhenIgnoreSetNavigation(int32 CurrentIndex) {
}

void UCustomRaceSubOptionSettingLine::SetSettingButtonNum(int32 InButtonsNum) {
}



void UCustomRaceSubOptionSettingLine::GetExplainTextArr(TArray<FText>& OutExplainTextArr) {
}

void UCustomRaceSubOptionSettingLine::GetButtonTextArr(TArray<FText>& OutButtonTextArr) {
}



