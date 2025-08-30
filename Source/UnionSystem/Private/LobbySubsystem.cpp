#include "LobbySubsystem.h"

ULobbySubsystem::ULobbySubsystem() {
}

bool ULobbySubsystem::SetupConnectP2PLobbyUsers(int32 LocalUserNum, const FLobbyId& LobbyId, bool IsHost) {
    return false;
}

void ULobbySubsystem::SetPFBusyFlag(bool BusyFlag) {
}

void ULobbySubsystem::SearchLobby(int32 LocalUserNum, int64 LobbyType, FLobbySubsystemOnSearchLobbyComplete OnComplete) {
}

void ULobbySubsystem::RejectInvitation(int32 LocalUserNum, const ULobbyJoinInfo* InviteInfo, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void ULobbySubsystem::PromoteMember(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void ULobbySubsystem::KickMember(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

bool ULobbySubsystem::IsRequiredPassword(int32 LocalUserNum, const FLobbyId& LobbyId) {
    return false;
}

bool ULobbySubsystem::IsLockedLobby(int32 LocalUserNum, const FLobbyId& LobbyId) const {
    return false;
}

bool ULobbySubsystem::HasSessionInvite() const {
    return false;
}

bool ULobbySubsystem::GetSessionInviteInfo(int32 LocalUserNum, TArray<ULobbyJoinInfo*>& OutPendingInvites) {
    return false;
}

bool ULobbySubsystem::GetPendingInviteInfo(int32 LocalUserNum, TArray<ULobbyJoinInfo*>& OutPendingInvites) {
    return false;
}

int32 ULobbySubsystem::GetOnlineIndex() const {
    return 0;
}

TArray<FUniqueNetIdRepl> ULobbySubsystem::GetMemberUserIds(int32 LocalUserNum, const FLobbyId& LobbyId) const {
    return TArray<FUniqueNetIdRepl>();
}

FUniqueNetIdRepl ULobbySubsystem::GetMemberUserId(int32 LocalUserNum, const FLobbyId& LobbyId, int32 MemberIndex) const {
    return FUniqueNetIdRepl{};
}

int32 ULobbySubsystem::GetMemberCount(int32 LocalUserNum, const FLobbyId& LobbyId) const {
    return 0;
}

bool ULobbySubsystem::GetMemberAttributeValueString(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, const FString& AttrKey, FString& OutAttrValue, bool bUseLobbyAttribute) {
    return false;
}

bool ULobbySubsystem::GetMemberAttributeValueInt64(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, const FString& AttrKey, int64& OutAttrValue, bool bUseLobbyAttribute) {
    return false;
}

bool ULobbySubsystem::GetMemberAttributeValueFloat(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, const FString& AttrKey, float& OutAttrValue, bool bUseLobbyAttribute) {
    return false;
}

bool ULobbySubsystem::GetMemberAttributeValueBool(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, const FString& AttrKey, bool& OutAttrValue, bool bUseLobbyAttribute) {
    return false;
}

int32 ULobbySubsystem::GetMaxMemberCount() const {
    return 0;
}

bool ULobbySubsystem::GetLobbyAttributeValueString(int32 LocalUserNum, const FLobbyId& LobbyId, const FString& AttrKey, FString& OutAttrValue, bool bUseLobbyAttribute) {
    return false;
}

bool ULobbySubsystem::GetLobbyAttributeValueInt64(int32 LocalUserNum, const FLobbyId& LobbyId, const FString& AttrKey, int64& OutAttrValue, bool bUseLobbyAttribute) {
    return false;
}

bool ULobbySubsystem::GetLobbyAttributeValueFloat(int32 LocalUserNum, const FLobbyId& LobbyId, const FString& AttrKey, float& OutAttrValue, bool bUseLobbyAttribute) {
    return false;
}

bool ULobbySubsystem::GetLobbyAttributeValueBool(int32 LocalUserNum, const FLobbyId& LobbyId, const FString& AttrKey, bool& OutAttrValue, bool bUseLobbyAttribute) {
    return false;
}

bool ULobbySubsystem::GetJoinedLobbies(int32 LocalUserNum, TArray<FLobbyId>& OutLobbyIds) const {
    return false;
}

void ULobbySubsystem::DeleteLobby(int32 LocalUserNum, const FLobbyId& LobbyId, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void ULobbySubsystem::CreateLobby(int32 LocalUserNum, const ULobbyTransactionParam* TransactionParam, FLobbySubsystemOnCreateOrConnectLobbyComplete OnComplete) {
}

int32 ULobbySubsystem::ConnectP2PLobbyUsers(int32 LocalUserNum, const FLobbyId& LobbyId, bool IsHost, bool EnableAllClientConnect) {
    return 0;
}

void ULobbySubsystem::ConnectP2PAsync(int32 LocalUserNum, const FLobbyId& LobbyId) {
}

void ULobbySubsystem::ConnectLobby(int32 LocalUserNum, const FLobbyId& LobbyId, const FString& Password, FLobbySubsystemOnCreateOrConnectLobbyComplete OnComplete) {
}

void ULobbySubsystem::ConfirmMatchingUsers(int32 LocalUserNum, const FLobbyId& LobbyId) {
}

void ULobbySubsystem::ClearAllDelegates() {
}

void ULobbySubsystem::CallInvitationReceivedDelegates(int32 LocalUserNum, const FLobbyId& LobbyId) {
}


