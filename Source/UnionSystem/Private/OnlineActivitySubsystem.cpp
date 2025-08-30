#include "OnlineActivitySubsystem.h"

UOnlineActivitySubsystem::UOnlineActivitySubsystem() {
}

void UOnlineActivitySubsystem::SetupJoinRequest(FOnlineActivityInviteLobbySetupComplete OnComplete) {
}

void UOnlineActivitySubsystem::SetActivity(const FString& LobbyIdString, int32 InLocalUserNum, int32 MaxPlayerNum, int32 CurrentPlayerNum) {
}

void UOnlineActivitySubsystem::SendInviteNoCallback(int32 LocalUserNum, const FUniqueNetIdRepl& UserId, const FString& InLobbyIdString) {
}

void UOnlineActivitySubsystem::OnConnectLobbyComplete(bool bSuccessful, const FCreateOrConnectLobbyResult& Result) {
}

bool UOnlineActivitySubsystem::JoinInviteLobby(int32 LocalUserNum, FLobbySubsystemOnCreateOrConnectLobbyComplete OnComplete) {
    return false;
}

bool UOnlineActivitySubsystem::IsJoinLobbyReady() {
    return false;
}

bool UOnlineActivitySubsystem::HasInviteRequest() {
    return false;
}

bool UOnlineActivitySubsystem::HasInviteOnly() {
    return false;
}

FLobbyId UOnlineActivitySubsystem::GetJoinLobby() {
    return FLobbyId{};
}

void UOnlineActivitySubsystem::FinishInviteLobby() {
}

void UOnlineActivitySubsystem::DestroyInviteLobby(int32 LocalUserNum) {
}

void UOnlineActivitySubsystem::DeleteActivity() {
}

void UOnlineActivitySubsystem::DebugSetActivity(const FString& LobbyIdString) {
}

void UOnlineActivitySubsystem::DebugDeleteActivity() {
}

void UOnlineActivitySubsystem::CheckEndInviteRequest() {
}

void UOnlineActivitySubsystem::CancelInviteLobby() {
}

void UOnlineActivitySubsystem::AddRecentPlayers(int32 LocalUserNum, TArray<FString>& PlatformIdList) {
}


