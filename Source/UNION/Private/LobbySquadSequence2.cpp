#include "LobbySquadSequence2.h"
#include "SquadLobbyControlComponent.h"

ALobbySquadSequence2::ALobbySquadSequence2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->PlayerPositionControlTable.AddDefaulted(12);
    this->NetLobbyControlComponentClass = USquadLobbyControlComponent::StaticClass();
    this->GameModeUIScene = NULL;
    this->ReadyUIScene = NULL;
    this->TipsUIScene = NULL;
    this->OptionStateComponent = NULL;
    this->MainCamera = NULL;
    this->ReturnToState = ELobbySequenceState::Idle;
    this->SelectedLobbyType = EMatchingLobbyType::None;
    this->FestaMenuRacerParameterDataAsset = NULL;
    this->SquadEmit = NULL;
    this->SquadSelectEmit = NULL;
    this->bCanCancelInput = false;
    this->FriendMatchMenuComponent = NULL;
    this->CancelQue = NULL;
    this->LobbyMatchingCompleteQue = NULL;
    this->NGQue = NULL;
}

void ALobbySquadSequence2::WaitGotoLobbyBeforeFadein() {
}

void ALobbySquadSequence2::UnBindGameModeUIScene() {
}

void ALobbySquadSequence2::SyncOwnReadyCheck(ESquadMemberContextReadyCheckType ReadyCheckType, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void ALobbySquadSequence2::SyncOnlineGameMode(EOnlineGameMode OnlineGameMode, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void ALobbySquadSequence2::SpawnSquadPosition_Implementation(const TArray<FTransform>& InTransforms) {
}

void ALobbySquadSequence2::SetChangedReadyHeaderAndFooter(bool bInIsCheckedReady) {
}

void ALobbySquadSequence2::RemoveOnlineWidgets(UCommonMenuHeaderMenu* InHeader) {
}

void ALobbySquadSequence2::RefreshTransformRacersParam() {
}

void ALobbySquadSequence2::OnUpdateStateWaitingComeBackLobby_Implementation(float InDeltaTime) {
}

void ALobbySquadSequence2::OnUpdateStateTransitionToFriendLobbyAlone_Implementation(float InDeltaTime) {
}

void ALobbySquadSequence2::OnUpdateStateSquadPopupWindow(float InDeltaTime) {
}

void ALobbySquadSequence2::OnUpdateStateShowTipsWindow(float InDeltaTime) {
}

void ALobbySquadSequence2::OnUpdateStateSelectGameMode(float InDeltaTime) {
}

void ALobbySquadSequence2::OnUpdateStateLobbyRuleSetting_Implementation(float InDeltaTime) {
}

void ALobbySquadSequence2::OnUpdateStateCheckMembersWaitTallying(float InDeltaTime) {
}

void ALobbySquadSequence2::OnUpdateStateCheckJoinLobby_Implementation(float InDeltaTime) {
}

void ALobbySquadSequence2::OnTipsWindow_CloseEndEvent() {
}

void ALobbySquadSequence2::OnSyncInviteFriendMatchGameModeEvent(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ALobbySquadSequence2::OnSyncDecideSquadGameModeEvent(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ALobbySquadSequence2::OnSearchLobbyIdComplete(bool bSuccessful, bool bIsLobbyExist, const FCommon_UserSearchData& Result) {
}

void ALobbySquadSequence2::OnReceiveMemberUpdateAtCheckMembersEvent_Implementation(USquadContext* LobbyContext, USquadMemberContext* MemberContext) {
}

void ALobbySquadSequence2::OnReceiveMemberMemberEvent_Implementation(int32 InPlayerIndex) {
}

void ALobbySquadSequence2::OnReadyButtonDecideEvent_Implementation() {
}

void ALobbySquadSequence2::OnPlatformCrossPlayResolveComplete() {
}

void ALobbySquadSequence2::OnLobbyOperationCompleteSimple(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ALobbySquadSequence2::OnLobbyInvitationRejectComplete(bool bWasSuccessful, const FLobbyOperationResult& Result) {
}

void ALobbySquadSequence2::OnlineGameModeCancelEvent_Implementation() {
}

void ALobbySquadSequence2::OnInviteConfilmWindowOutEvent(bool bIsOut) {
}

void ALobbySquadSequence2::OnInviteConfilmWindowInEvent() {
}

void ALobbySquadSequence2::OnInitStateWaitingComeBackLobby_Implementation() {
}

void ALobbySquadSequence2::OnInitStateTransitionToFriendLobbyAlone_Implementation() {
}

void ALobbySquadSequence2::OnInitStateSquadPopupWindow() {
}

void ALobbySquadSequence2::OnInitStateLobbyRuleSetting_Implementation() {
}

void ALobbySquadSequence2::OnInitStateCheckMembersWaitTallying() {
}

void ALobbySquadSequence2::OnInitStateCheckJoinLobby_Implementation() {
}

void ALobbySquadSequence2::OnGotoLobbyBeforeEvent_Implementation() {
}

void ALobbySquadSequence2::OnFinishedFade_SelectGameMode(EUnionUIFadeDirection FadeDirection) {
}

void ALobbySquadSequence2::OnFinishedFade_GotoLobby(EUnionUIFadeDirection FadeDirection) {
}

void ALobbySquadSequence2::OnExitStateWaitingComeBackLobby_Implementation() {
}

void ALobbySquadSequence2::OnExitStateTransitionToFriendLobbyAlone_Implementation() {
}

void ALobbySquadSequence2::OnExitStateSquadPopupWindow() {
}

void ALobbySquadSequence2::OnExitStateShowTipsWindow() {
}

void ALobbySquadSequence2::OnExitStateSelectGameMode() {
}

void ALobbySquadSequence2::OnExitStateOptionSquad(EMenuSequenceSubState State) {
}

void ALobbySquadSequence2::OnExitStateLobbyRuleSetting_Implementation() {
}

void ALobbySquadSequence2::OnExitStateCheckMembersWaitTallying() {
}

void ALobbySquadSequence2::OnExitStateCheckJoinLobby_Implementation() {
}

void ALobbySquadSequence2::OnDecideRemovedClientPopUpEvent(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySquadSequence2::OnDecideLobbyPopUpEvent(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySquadSequence2::OnDecideEventPopUpEvent(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySquadSequence2::OnDecideCheckedMember_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence2::OnCreateSquadLobbyEvent(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error) {
}

void ALobbySquadSequence2::OnCompleteSyncMovePublicLobbyState(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence2::OnCompleteJoinSquad(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence2::OnChangeLobbyMemberState_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence2::OnCancelWaitingComeBackLobby(UObject* Object) {
}

void ALobbySquadSequence2::OnCancelCheckedMemberWaiting_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence2::OnCancelCheckedMemberWaiting_Implementation(int32 InPlayerIndex) {
}

void ALobbySquadSequence2::OnAllCheckedMember_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult) {
}

void ALobbySquadSequence2::LoadFinishAfterCharaMatchingLevelEvent() {
}

void ALobbySquadSequence2::KickToAllClientMember(ULobbyContextBase* InContext) {
}

bool ALobbySquadSequence2::IsJoiningLobby() const {
    return false;
}

bool ALobbySquadSequence2::IsAloneSquadLobby() {
    return false;
}

void ALobbySquadSequence2::InitiSquadLobbySetupAfterFadeOut() {
}

USquadLobbyControlComponent* ALobbySquadSequence2::GetSquadLobbyControlComponent() const {
    return NULL;
}

EMatchingLobbyType ALobbySquadSequence2::GetSelectedOnlineGameModeLobbyType() const {
    return EMatchingLobbyType::None;
}

void ALobbySquadSequence2::FriendRuleFixedEvent_Implementation(EPrivateMatchPlayType InPlayType) {
}

void ALobbySquadSequence2::FriendMatchMenuFinishOutAnimEvent_Implementation() {
}

void ALobbySquadSequence2::FriendMatchMenuEnterLobbyDecisionEvent_Implementation() {
}

void ALobbySquadSequence2::FriendMatchMenuCancelEvent_Implementation() {
}

void ALobbySquadSequence2::DoneReadyCheckEvent() {
}

void ALobbySquadSequence2::DisconnectGuest(int32 InPlayerIndex) {
}

void ALobbySquadSequence2::DestroySquadPosition_Implementation() {
}

void ALobbySquadSequence2::CheckMembersWaitingCancelEvent_Implementation() {
}

void ALobbySquadSequence2::CheckMemberCancelEvent_Implementation() {
}

bool ALobbySquadSequence2::CheckCanCancelMatchmaking(FString& InReason) {
    return false;
}


