#include "FriendMatchMenu.h"

UFriendMatchMenu::UFriendMatchMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSquadMenu = false;
    this->MenuWidget = NULL;
}

void UFriendMatchMenu::SwitchDecisionEvent(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void UFriendMatchMenu::OpenWaitingLobbyPopupWindowFromSquad(bool bJoin) {
}

void UFriendMatchMenu::OpenWaitingLobbyPopupWindow(bool bJoin) {
}

void UFriendMatchMenu::OpenSelectLobbyTypeWindow() {
}

void UFriendMatchMenu::OpenLobbyResultWindow(bool bSuccess, bool bJoin) {
}

void UFriendMatchMenu::OpenLobbyCompletedWindow(bool bJoin) {
}

void UFriendMatchMenu::InitFriendMatchMenu(bool bHasSquad) {
}

void UFriendMatchMenu::FinishedOutAnimation() {
}

void UFriendMatchMenu::FinishedLobbyCompletedAnimation(bool bJoin) {
}

void UFriendMatchMenu::ExitFriendMatchMenu() {
}

void UFriendMatchMenu::DecisionCreateOrJoinEvent(int32 ButtonIndex) {
}

void UFriendMatchMenu::DecidedLobbyTypeEvent(int32 ButtonIndex) {
}

void UFriendMatchMenu::CancelDownEvent(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}


