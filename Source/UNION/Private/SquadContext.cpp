#include "SquadContext.h"
#include "SquadMemberContext.h"

USquadContext::USquadContext() {
    this->LobbyMemberContextClass = USquadMemberContext::StaticClass();
    this->PendingInviteInfo = NULL;
}

void USquadContext::SyncMatchContinuation(ESquadLobbyMatchContinuation MatchContinuation, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void USquadContext::SetOnlineGameMode(EOnlineGameMode OnlineGameMode) {
}

void USquadContext::SetMatchContinuation(ESquadLobbyMatchContinuation MatchContinuation) {
}

void USquadContext::OnSendInvitationCompletedInternal_Implementation(bool bSuccessful, const FOnlineErrorBP& Error) {
}

void USquadContext::OnSendInvitationCompleted(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void USquadContext::OnKickBlockMemberComplete(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void USquadContext::JoinSquad(ULobbyJoinInfo* InviteInfo) {
}

bool USquadContext::IsEqualSquadLobbyState(ESquadLobbyState State) const {
    return false;
}

bool USquadContext::IsCompleteEndMenuSelect(ECommonRaceMenuContentId& HostSelectedId) {
    return false;
}

bool USquadContext::IsCompletedReadyMatching() const {
    return false;
}

bool USquadContext::IsCompletedReadyCheck() const {
    return false;
}

void USquadContext::Invite(const FUniqueNetIdRepl& UserId) {
}

bool USquadContext::GetSquadLobbyState(ESquadLobbyState& OutState) const {
    return false;
}

void USquadContext::GetReceivedJoinRequest(FLobbyId& TargetLobbyId) {
}

EOnlineGameMode USquadContext::GetOnlineGameMode() const {
    return EOnlineGameMode::None;
}

ESquadLobbyMatchContinuation USquadContext::GetMatchContinuation() const {
    return ESquadLobbyMatchContinuation::NotAnswered;
}

void USquadContext::GetInRace(bool& OutInRace) {
}

void USquadContext::CreateSquad_Callback(FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void USquadContext::CreateSquad() {
}


