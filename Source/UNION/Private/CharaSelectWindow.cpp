#include "CharaSelectWindow.h"

UCharaSelectWindow::UCharaSelectWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->UniformGridPanelCharaIcon = NULL;
    this->WBP_CharaMachineSelect_Balloon = NULL;
    this->bRivalSelectMode = false;
    this->bFriendShipSelectMode = false;
    this->bDebugBalloon = false;
    this->PopupWindow = NULL;
    this->ButtonsPanel = NULL;
    this->bPopupWindowOpen = false;
}

void UCharaSelectWindow::UpdateRivalIconsSelectable() {
}

void UCharaSelectWindow::UpdateIconsFriendShip(int32 MaxTicket) {
}

void UCharaSelectWindow::Setup() {
}

void UCharaSelectWindow::SetIconsFocus(int32 InPlayerIndex, int32 InCharaIndex) {
}



void UCharaSelectWindow::OnPopupWindowClose(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}


void UCharaSelectWindow::InitializePlayerFocus() {
}

void UCharaSelectWindow::IconUnhover(int32 InPlayerControllerIndex, int32 InCharaIndex) {
}

void UCharaSelectWindow::IconHover(int32 InPlayerControllerIndex, int32 InCharaIndex) {
}

void UCharaSelectWindow::IconDecision(int32 InPlayerControllerIndex, int32 InCharaIndex) {
}

void UCharaSelectWindow::IconCancel(int32 InPlayerControllerIndex) {
}

UCharaSelectCharaIcon* UCharaSelectWindow::GetIconRandom() const {
    return NULL;
}

UCharaSelectCharaIcon* UCharaSelectWindow::GetIconForPlayerIndex(int32 InPlayerIndex) const {
    return NULL;
}

UCharaSelectCharaIcon* UCharaSelectWindow::GetIconForDriverID(EDriverId InDriverId) const {
    return NULL;
}

UCharaSelectCharaIcon* UCharaSelectWindow::GetIconForCharaIndex(int32 InCharaIndex) const {
    return NULL;
}

UCharaSelectCharaIcon* UCharaSelectWindow::GetIcon(int32 InIconIndex) const {
    return NULL;
}

TArray<UUnionUIButtonBase*> UCharaSelectWindow::GetButtons() const {
    return TArray<UUnionUIButtonBase*>();
}



