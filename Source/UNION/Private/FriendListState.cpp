#include "FriendListState.h"
#include "EMenuSequenceSubState.h"

UFriendListState::UFriendListState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("FriendList");
    this->DefaultMenuState = EMenuSequenceSubState::FriendList;
    this->OpenCategory = EFriendListCategory::None;
    this->FriendListWidget = NULL;
    this->MainWidget = NULL;
    this->IsOnlineSequence = false;
    this->EnableSendInvitation = true;
    this->EnableAcceptInvitation = true;
    this->OpenFriendListWindow = false;
}

void UFriendListState::SetOpenFriendListWindow(bool InEnable) {
}

void UFriendListState::SetOpenCategory(EFriendListCategory InCategory) {
}

void UFriendListState::SetIsOnlineSequence(bool InEnable) {
}

void UFriendListState::SetEnableSendInvitation(bool InEnable) {
}

void UFriendListState::SetEnableAcceptInvitation(bool InEnable) {
}

void UFriendListState::OnForceEndEvent() {
}


bool UFriendListState::GetOpenFriendListWindow() {
    return false;
}

bool UFriendListState::GetCloseByNotLoginEOS() {
    return false;
}


