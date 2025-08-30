#include "RaceEndMenuSequence.h"

ARaceEndMenuSequence::ARaceEndMenuSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EndMenuContentTable = NULL;
    this->SquadLobbyContext = NULL;
    this->bIsDisConnectedHost = false;
    this->SelectOwnConfilm = ESquadLobbyMatchContinuation::NotAnswered;
    this->MessageBarSceneObject = NULL;
    this->TimeCount = 0;
    this->MAX_HOST_TIMER = 60;
    this->MAX_HOST_POPUP_TIMER = 20;
    this->MAX_CLIENT_TIMER = 120;
    this->EndMenuScene = NULL;
    this->_FooterClass = NULL;
    this->_Footer = NULL;
    this->_InputReceiver = NULL;
    this->_UserReportComponent = NULL;
}

void ARaceEndMenuSequence::TickCheckSquadContinuation(float DeltaSeconds, ESquadLobbyMatchContinuation& MatchContinuation) {
}

void ARaceEndMenuSequence::SquadStopTimeCount(bool bEnableCount) {
}

bool ARaceEndMenuSequence::SquadEndMenuHostTimer() {
    return false;
}

void ARaceEndMenuSequence::SetNextEndMenuState(ERaceEndMenuSequenceState InState) {
}

void ARaceEndMenuSequence::SetEndMenuExitCode(ERaceEndMenuSequenceExitCode InValue) {
}

void ARaceEndMenuSequence::SetDecided(bool Value) {
}


void ARaceEndMenuSequence::RemoveSquadClient(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ARaceEndMenuSequence::ReceivedSquadMemberUpdateFromComponent() {
}

void ARaceEndMenuSequence::OnUpdateStateWaiting_Implementation(float InDeltaTime) {
}

void ARaceEndMenuSequence::OnUpdateStateUserReport_Implementation(float InDeltaTime) {
}

void ARaceEndMenuSequence::OnUpdateStateShowPopup_Implementation(float InDeltaTime) {
}

void ARaceEndMenuSequence::OnUpdateStateSelect_Implementation(float InDeltaTime) {
}

void ARaceEndMenuSequence::OnUpdateStateQuitPublicLobby_Implementation(float InDeltaTime) {
}

void ARaceEndMenuSequence::OnUpdateStateCheckLobbyInvite_Implementation(float InDeltaTime) {
}

void ARaceEndMenuSequence::OnSquadLobbyDelete(ULobbyContextBase* LobbyContext) {
}

void ARaceEndMenuSequence::OnRecevCheckSquadContinuation(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ARaceEndMenuSequence::OnReceiveSquadRemoveComplete_HostDisConnected(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error) {
}

void ARaceEndMenuSequence::OnReceiveSquadRemoveComplete(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error) {
}

void ARaceEndMenuSequence::OnReceiveSquadDisconnectMember(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext, bool bWasKicked) {
}

void ARaceEndMenuSequence::OnPopupDecideSyncSelectMenu(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ARaceEndMenuSequence::OnPopupDecideSquadLobbyWaitingPlayer(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ARaceEndMenuSequence::OnPopupDecidebackToTopMenu(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ARaceEndMenuSequence::OnInitStateWaiting_Implementation() {
}

void ARaceEndMenuSequence::OnInitStateUserReport_Implementation() {
}

void ARaceEndMenuSequence::OnInitStateShowPopup_Implementation() {
}

void ARaceEndMenuSequence::OnInitStateSelect_Implementation() {
}

void ARaceEndMenuSequence::OnInitStateQuitPublicLobby_Implementation() {
}

void ARaceEndMenuSequence::OnInitStateIdle_Implementation() {
}

void ARaceEndMenuSequence::OnInitStateExit_Implementation() {
}

void ARaceEndMenuSequence::OnInitStateCheckLobbyInvite_Implementation() {
}

void ARaceEndMenuSequence::OnHostTimeupEvent() {
}

void ARaceEndMenuSequence::OnFaceButtonTopPressed(UObject* Object) {
}

void ARaceEndMenuSequence::OnExitStateWaiting_Implementation() {
}

void ARaceEndMenuSequence::OnExitStateUserReport_Implementation() {
}

void ARaceEndMenuSequence::OnExitStateShowPopup_Implementation() {
}

void ARaceEndMenuSequence::OnExitStateSelect_Implementation() {
}

void ARaceEndMenuSequence::OnExitStateQuitPublicLobby_Implementation() {
}

void ARaceEndMenuSequence::OnExitStateGotoTopMennu_Implementation() {
}

void ARaceEndMenuSequence::OnExitStateGotoSquadLobby_Implementation() {
}

void ARaceEndMenuSequence::OnExitStateGotoMatchingLobby_Implementation() {
}

void ARaceEndMenuSequence::OnExitStateCheckLobbyInvite_Implementation() {
}

bool ARaceEndMenuSequence::IsDecided() const {
    return false;
}

void ARaceEndMenuSequence::InitCheckSquadContinuation(ECommonRaceMenuContentId SelectedRaceMenu, FLobbySubsystemOnLobbyOperationComplete OnComplete, bool& bIsJoinedSquad, bool& bIsSquadHost) {
}


void ARaceEndMenuSequence::GotoSelectedEndMenuToSquad(ESquadLobbyMatchContinuation InHostStatus, bool bInIsOwnerHost) {
}

UCommonRaceMenuContentsInfo* ARaceEndMenuSequence::GenerateEndMenuContentsInfo() {
    return NULL;
}

UCommonRaceMenuContentsInfo* ARaceEndMenuSequence::GenerateEndMenuContentsAfterCeremonyInfo() {
    return NULL;
}


