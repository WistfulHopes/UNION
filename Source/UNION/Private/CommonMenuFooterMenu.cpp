#include "CommonMenuFooterMenu.h"

UCommonMenuFooterMenu::UCommonMenuFooterMenu() : UUserWidget(FObjectInitializer::Get()) {
}

void UCommonMenuFooterMenu::UpdateButtonImageByCurrentSetting() {
}



void UCommonMenuFooterMenu::SetVisibilityCollapsedAllButton_Implementation() {
}

void UCommonMenuFooterMenu::SetVisibilityAllSubButton_Implementation(ESlateVisibility InVisibility) {
}

void UCommonMenuFooterMenu::SetVisibilityAllMainButton_Implementation(ESlateVisibility InVisibility) {
}

void UCommonMenuFooterMenu::Setup_Implementation() {
}

void UCommonMenuFooterMenu::SetSubButtonStateVisibility_Implementation(int32 InIndex, bool Visible) {
}

void UCommonMenuFooterMenu::SetSubButtonStateParam_Implementation(int32 InIndex, EFooterSubTextType InTextType, bool Visible) {
}

void UCommonMenuFooterMenu::SetSubButtonParam_Implementation(int32 InIndex, EFooterSubTextType InTextType, ESlateVisibility InVisibility) {
}

void UCommonMenuFooterMenu::SetMainButtonStateParam_Implementation(EFooterMainTextType InTextType, bool Visible) {
}

void UCommonMenuFooterMenu::SetMainButtonParam_Implementation(EFooterMainTextType InTextType, ESlateVisibility InVisibility) {
}

void UCommonMenuFooterMenu::SetAllSubButtonStateVisibility_Implementation(bool Visible) {
}

void UCommonMenuFooterMenu::SetAllMainButtonStateVisibility_Implementation(bool Visible) {
}

void UCommonMenuFooterMenu::SetAllButtonStateVisibility_Implementation(bool Visible) {
}


void UCommonMenuFooterMenu::FireSubPressedEvent(EUIButtonIconType ButtonIconType, int32 Index) {
}

void UCommonMenuFooterMenu::FireMainReleasedEvent(EFooterMainTextType MainTextType) {
}

void UCommonMenuFooterMenu::FireMainPressedEvent(EFooterMainTextType MainTextType) {
}

void UCommonMenuFooterMenu::AddToViewportDefaultZOrder() {
}


