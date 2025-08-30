#include "AppNetComponent.h"

UAppNetComponent::UAppNetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyProcessObject = NULL;
    this->LobbyInvitationNoticeWidgetPtr = NULL;
    this->InvitationInfo = NULL;
    this->ErrorPopupWindowPtr = NULL;
    this->ReturnToTitleErrorPopupWindowPtr = NULL;
    this->IsPlatformDecide = false;
    this->PrevRegisteredMenu = NULL;
    this->WaitCheckPopup = NULL;
}

bool UAppNetComponent::ShouldSendSessionInvitePlatform() const {
    return false;
}

bool UAppNetComponent::ShouldCreateSquad() const {
    return false;
}

void UAppNetComponent::SetIsInRace(bool InRace) {
}

bool UAppNetComponent::SendSessionInvite(UCommonLobbyContext* LobbyContext, const FString& PlatformUserId) {
    return false;
}


void UAppNetComponent::PFInviteCallback() {
}


void UAppNetComponent::OnSetupLobbyInvitationNoticeWidget() {
}

void UAppNetComponent::OnReturnToTitleErrorPopupClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}



void UAppNetComponent::OnQuitCurrentLobby() {
}

void UAppNetComponent::OnPlatformAcceptLobbyInvitation() {
}

void UAppNetComponent::OnLobbyOperationCompleteSimple(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void UAppNetComponent::OnJoinLobbyByIdSearch(FLobbyId LobbyId) {
}

void UAppNetComponent::OnInitialize_Implementation() {
}


void UAppNetComponent::OnErrorNoticePopupWindowClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}


void UAppNetComponent::OnCompleteQuitLobbyEvent() {
}



void UAppNetComponent::OnAcceptLobbyInvitation(ULobbyJoinInfo* InJoinLobbyInfo) {
}

void UAppNetComponent::KickToAllClientMember(ULobbyContextBase* InContext) {
}

USquadContext* UAppNetComponent::GetSquadContext() {
    return NULL;
}

UCommonLobbyContext* UAppNetComponent::GetCurrentInviteLobbyContext() const {
    return NULL;
}

void UAppNetComponent::DestroyErrorNoticePopupWindow() {
}

void UAppNetComponent::DeleteWaitSearchWidget() {
}

void UAppNetComponent::CreateWaitSearchWidget() {
}

void UAppNetComponent::CreateReturnToTitleErrorPopup() {
}

void UAppNetComponent::CreateErrorNoticePopupWindow(ELobbyNoticeErrorType ErrorType) {
}

void UAppNetComponent::CheckInvitationAvailable(ULobbyJoinInfo* InJoinLobbyInfo, bool& IsAvailable) {
}

bool UAppNetComponent::CheckCrossPlay(ECrossplayPlatform InLobbyPlatform, bool InAllowCrossPlay) {
    return false;
}



