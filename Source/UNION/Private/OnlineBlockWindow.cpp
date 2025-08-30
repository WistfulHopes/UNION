#include "OnlineBlockWindow.h"

UOnlineBlockWindow::UOnlineBlockWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->bIsBlockUser = false;
    this->SelectBlockWindowType = 0;
    this->BlockUserPopup = NULL;
    this->MessageBarSceneObject = NULL;
    this->bIsShowingPopUpWindow = false;
    this->bIsShowBlockWindow = false;
    this->DecideSadQue = NULL;
}

void UOnlineBlockWindow::OnUserSearchPlatformComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract) {
}

void UOnlineBlockWindow::OnUserSearchComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract) {
}

void UOnlineBlockWindow::OnShowPfProfileErrorWindowEnd() {
}

void UOnlineBlockWindow::OnForceEnd_Implementation() {
}

void UOnlineBlockWindow::OnDecideResultPopUpEvent_Implementation(EPlayerInfoSubWindowBtnType InBtnType, bool bInIsError) {
}

void UOnlineBlockWindow::OnDecideCheckPopup(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void UOnlineBlockWindow::OnDecideBlockPopup_Implementation(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void UOnlineBlockWindow::OnChangeBlockWindowBtnPutType_Implementation(EPlayerInfoSubWindowBtnType InBtnType, bool bIsEnablePut) {
}

void UOnlineBlockWindow::OnAcceptKickRequestWindow_Implementation(bool bWasSuccessful, int32 ErrorCode) {
}

void UOnlineBlockWindow::OnAcceptFriendRequestWindow_Implementation(bool bWasSuccessful, int32 ErrorCode) {
}

void UOnlineBlockWindow::OnAcceptBlockWindow_Implementation(EBlockPlayerErrorCode ErrorCode, const FString& ProductUserId) {
}

void UOnlineBlockWindow::DecidePFProfileDisplay(UUnionUIButtonBase* Button) {
}

void UOnlineBlockWindow::CreatePopUpWindowDialog() {
}

void UOnlineBlockWindow::CreatePopUpErrorWindow(EPlayerInfoSubWindowErrorType InErrorType) {
}

void UOnlineBlockWindow::CreateCheckPopUpWindowDialog() {
}


