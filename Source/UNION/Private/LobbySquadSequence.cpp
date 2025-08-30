#include "LobbySquadSequence.h"
#include "SquadLobbyControlComponent.h"

ALobbySquadSequence::ALobbySquadSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->FakeLobbyPlayerIndexList.AddDefaulted(12);
    this->NetLobbyControlComponentClass = USquadLobbyControlComponent::StaticClass();
    this->GameModeUIScene = NULL;
    this->ReadyUIScene = NULL;
    this->TipsUIScene = NULL;
    this->MessageBarScene = NULL;
    this->MainCamera = NULL;
    this->ReturnToState = ELobbySequenceState::Idle;
    this->SelectedLobbyType = EMatchingLobbyType::None;
    this->SquadEmit = NULL;
    this->bIsCheckReady = false;
    this->bCanCancelInput = false;
    this->bCanOwnCancel = false;
    this->OptionStateComponent = NULL;
    this->FriendMatchMenuComponent = NULL;
    this->FriendListComponent = NULL;
    this->CancelQue = NULL;
    this->LobbyMatchingCompleteQue = NULL;
    this->PopupWindow = NULL;
}

void ALobbySquadSequence::WaitGotoLobbyBeforeFadein() {
}

void ALobbySquadSequence::SyncOwnReadyCheck(bool bReadyCheckOk, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void ALobbySquadSequence::SyncOnlineGameMode(EOnlineGameMode OnlineGameMode, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void ALobbySquadSequence::RemoveOnlineWidgets(UCommonMenuHeaderMenu* InHeader) {
}

void ALobbySquadSequence::OnUpdateStateWaitingComeBackLobby_Implementation(float InDeltaTime) {
}

void ALobbySquadSequence::OnUpdateStateCheckMembers_Implementation(float InDeltaTime) {
}

void ALobbySquadSequence::OnTipsWindow_CloseEndEvent() {
}

void ALobbySquadSequence::OnSyncDecideSquadGameModeEvent(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ALobbySquadSequence::OnSideMenuButtonDecide(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void ALobbySquadSequence::OnReceiveMemberUpdateAtCheckMembersEvent(USquadContext* LobbyContext, USquadMemberContext* MemberContext) {
}

void ALobbySquadSequence::OnReadyButtonDecideEvent_Implementation() {
}

void ALobbySquadSequence::OnLobbyOperationCompleteSimple(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ALobbySquadSequence::OnlineGameModeCancelEvent_Implementation() {
}

void ALobbySquadSequence::OnInviteConfilmWindowOutEvent(bool bIsOut) {
}

void ALobbySquadSequence::OnInviteConfilmWindowInEvent() {
}

void ALobbySquadSequence::OnInitStateWaitingComeBackLobby_Implementation() {
}

void ALobbySquadSequence::OnInitStateOptionSquad() {
}

void ALobbySquadSequence::OnInitStateCheckJoinLobby_Implementation() {
}

void ALobbySquadSequence::OnGameModeButtonDecideEvent_Implementation(UUnionUIButtonBase* Button) {
}

void ALobbySquadSequence::OnFinishedFade_SelectGameMode(EUnionUIFadeDirection FadeDirection) {
}

void ALobbySquadSequence::OnFinishedFade_GotoLobby(EUnionUIFadeDirection FadeDirection) {
}

void ALobbySquadSequence::OnFinishedFade_GotoGarage(EUnionUIFadeDirection FadeDirection) {
}

void ALobbySquadSequence::OnFinishedFade_GotoCharaMachineSelect(EUnionUIFadeDirection FadeDirection) {
}

void ALobbySquadSequence::OnExitStateWaitingComeBackLobby_Implementation() {
}

void ALobbySquadSequence::OnExitStateOptionSquad(EMenuSequenceSubState State) {
}

void ALobbySquadSequence::OnExitStateCheckJoinLobby_Implementation() {
}

void ALobbySquadSequence::OnDecideLobbyPopUpEvent(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySquadSequence::OnDecideCheckedMember_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence::OnCompleteSyncMovePublicLobbyState(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence::OnCompleteSyncComebackSquadLobbyState(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence::OnChangeLobbyMemberState_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence::OnCancelCheckedMember_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence::OnCancelCheckedMember(int32 InPlayerIndex) {
}

void ALobbySquadSequence::LoadFinishAfterCharaMatchingLevelEvent() {
}

void ALobbySquadSequence::KickToAllClientMember(ULobbyContextBase* InContext) {
}

bool ALobbySquadSequence::IsJoiningLobby() const {
    return false;
}

bool ALobbySquadSequence::IsAloneSquadLobby() {
    return false;
}

EMatchingLobbyType ALobbySquadSequence::GetSelectedOnlineGameModeLobbyType() const {
    return EMatchingLobbyType::None;
}

void ALobbySquadSequence::FriendRuleFixedEvent_Implementation(EPrivateMatchPlayType InPlayType) {
}

void ALobbySquadSequence::FriendMatchMenuEnterLobbyDecisionEvent_Implementation() {
}

void ALobbySquadSequence::FriendMatchMenuCompleteAnimFinishedEvent_Implementation() {
}

void ALobbySquadSequence::FriendMatchMenuCancelEvent_Implementation() {
}

void ALobbySquadSequence::DoneReadyCheckEvent() {
}

void ALobbySquadSequence::DisconnectGuest(int32 InPlayerIndex) {
}

void ALobbySquadSequence::DecidedSquadGameMode(EOnlineGameMode InSelectGameMode) {
}

void ALobbySquadSequence::CreateSquadLobbyEvent(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error) {
}

void ALobbySquadSequence::CheckMemberCancelEvent_Implementation() {
}


