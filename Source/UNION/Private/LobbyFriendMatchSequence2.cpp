#include "LobbyFriendMatchSequence2.h"
#include "FriendMatchLobbyControlComponent.h"

ALobbyFriendMatchSequence2::ALobbyFriendMatchSequence2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->PlayerPositionControlTable.AddDefaulted(12);
    this->NetLobbyControlComponentClass = UFriendMatchLobbyControlComponent::StaticClass();
    this->PrivateMatchRuleSettingComponentClass = NULL;
    this->PrivateMatchRuleSettingComponent = NULL;
    this->PrivateMatchSelectGroupComponentClass = NULL;
    this->PrivateMatchSelectGroupComponent = NULL;
    this->LobbyCourseSelectClass = NULL;
    this->LobbyCourseSelect = NULL;
    this->FriendMatchMenuClass = NULL;
    this->FriendMatchMenuComponent = NULL;
    this->PrivateMatchCheckMembersUIClass = NULL;
    this->PrivateMatchCheckMembersUI = NULL;
    this->CloseLobbyInvitationWindowWidget = NULL;
    this->FriendMatchRivalChallengeMenuRacerParameterDataAsset = NULL;
    this->PressedSpecialBtnCue = NULL;
    this->IsRaceCycleFinalRace = false;
    this->CashLobbyJoinInfo = NULL;
    this->CancelInputReceiveObject = NULL;
}

void ALobbyFriendMatchSequence2::StateInputInitWaitingJoinMembersAloneHost() {
}

void ALobbyFriendMatchSequence2::StateInputInitWaitingJoinMembers() {
}

void ALobbyFriendMatchSequence2::StateInputInitTryToEnterLobby() {
}

void ALobbyFriendMatchSequence2::StartGroupSetting_Implementation() {
}

void ALobbyFriendMatchSequence2::SetNextStateWaitingJoinMembers() {
}

void ALobbyFriendMatchSequence2::SendRuleSetting() {
}

void ALobbyFriendMatchSequence2::SendHostGroupSetting_Implementation(const TArray<int32>& InGroupIndex) {
}

void ALobbyFriendMatchSequence2::SelectCourseOnDecideCallback(EStageId& StageId) {
}

void ALobbyFriendMatchSequence2::RecieveHostGroupSetting_Implementation() {
}

bool ALobbyFriendMatchSequence2::ReceiveRuleSetting(bool& OutUsingPreset, bool SetRaceCount) {
    return false;
}

void ALobbyFriendMatchSequence2::OnUpdateTimeLineTryToEnterLobby_Implementation(float InValue) {
}

void ALobbyFriendMatchSequence2::OnUpdateStateWaitingReceiveLobbyInitData(float InDeltaTime) {
}

void ALobbyFriendMatchSequence2::OnUpdateStateWaitingJoinMembersAloneHost(float InDeltaTime) {
}

void ALobbyFriendMatchSequence2::OnUpdateStateWaitingJoinMembers(float InDeltaTime) {
}

void ALobbyFriendMatchSequence2::OnUpdateStateWaitingInTheLobbyTimerEnd(float InDeltaTime) {
}

void ALobbyFriendMatchSequence2::OnUpdateStateWaitForHostLobbyId(float InDeltaTime) {
}

void ALobbyFriendMatchSequence2::OnUpdateStateTryToEnterLobby(float InDeltaTime) {
}

void ALobbyFriendMatchSequence2::OnUpdateStateCloseLobbyInvitationWindow(float InDeltaTime) {
}

void ALobbyFriendMatchSequence2::OnUpdateStateChangeP2PRaceCycle(float InDeltaTime) {
}

void ALobbyFriendMatchSequence2::OnInitStateWaitingReceiveLobbyInitData() {
}

void ALobbyFriendMatchSequence2::OnInitStateWaitingJoinMembersAloneHost() {
}

void ALobbyFriendMatchSequence2::OnInitStateWaitingJoinMembers() {
}

void ALobbyFriendMatchSequence2::OnInitStateWaitingInTheLobbyTimerEnd() {
}

void ALobbyFriendMatchSequence2::OnInitStateWaitForHostLobbyId() {
}

void ALobbyFriendMatchSequence2::OnInitStateTryToEnterLobby() {
}

void ALobbyFriendMatchSequence2::OnInitStateCloseLobbyInvitationWindow() {
}

void ALobbyFriendMatchSequence2::OnInitStatChangeP2PRaceCycle() {
}

void ALobbyFriendMatchSequence2::OnFinishedTimeLineTryToEnterLobby_Implementation() {
}

void ALobbyFriendMatchSequence2::OnExitStateWaitingReceiveLobbyInitData() {
}

void ALobbyFriendMatchSequence2::OnExitStateWaitingJoinMembersAloneHost() {
}

void ALobbyFriendMatchSequence2::OnExitStateWaitingJoinMembers() {
}

void ALobbyFriendMatchSequence2::OnExitStateWaitingInTheLobbyTimerEnd() {
}

void ALobbyFriendMatchSequence2::OnExitStateWaitForHostLobbyId() {
}

void ALobbyFriendMatchSequence2::OnExitStateTryToEnterLobby() {
}

void ALobbyFriendMatchSequence2::OnExitStateCloseLobbyInvitationWindow() {
}

void ALobbyFriendMatchSequence2::OnExitStateChangeP2PRaceCycle() {
}

void ALobbyFriendMatchSequence2::OnDecideReadyButton_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbyFriendMatchSequence2::OnDecideQuitLobbyWindow_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbyFriendMatchSequence2::OnDecideCloseLobbyInvitationWindow_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbyFriendMatchSequence2::OnDecideCheckMembers_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbyFriendMatchSequence2::OnCheckInvitationComplete(bool Enable, const FCreateOrConnectLobbyResult& ConnectResult, EFriendMatchLobbyJoinResult JoinResult) {
}

void ALobbyFriendMatchSequence2::OnCancelWaitingJoinMembersAloneHost(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbyFriendMatchSequence2::OnCancelWaitingJoinMembers(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbyFriendMatchSequence2::OnCancelTryToEnterLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbyFriendMatchSequence2::OnCancelCheckMembers_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbyFriendMatchSequence2::OnBackRuleSetting_Implementation(EMenuSequenceSubState InState) {
}

void ALobbyFriendMatchSequence2::LoadingDisplayHideFinished() {
}

void ALobbyFriendMatchSequence2::KickNotReadyMembers() {
}

void ALobbyFriendMatchSequence2::GoNextStateSelectCourse() {
}

int32 ALobbyFriendMatchSequence2::GetReadyMemberCount() const {
    return 0;
}

UCustomMatchLobbyControlComponent* ALobbyFriendMatchSequence2::GetFriendMatchLobbyControlComponent() const {
    return NULL;
}

UCustomMatchLobbyContext* ALobbyFriendMatchSequence2::GetFriendMatchLobbyContext() const {
    return NULL;
}

void ALobbyFriendMatchSequence2::FixedHostGroupSetting_Implementation() {
}

void ALobbyFriendMatchSequence2::FinishGroupSetting_Implementation(EMenuSequenceSubState InState) {
}

void ALobbyFriendMatchSequence2::FailedCreateLobby() {
}

bool ALobbyFriendMatchSequence2::EnableStateWaitingJoinMembers() const {
    return false;
}

void ALobbyFriendMatchSequence2::DisconnectPlayer(int32 InDisconnectPlayerIndex) {
}

ELobbySequenceState ALobbyFriendMatchSequence2::CheckNextStateWaitingJoinMembers() const {
    return ELobbySequenceState::Idle;
}

void ALobbyFriendMatchSequence2::BeforeSelectCourseSetting_Implementation() {
}


