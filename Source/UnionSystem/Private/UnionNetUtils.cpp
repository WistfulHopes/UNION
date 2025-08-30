#include "UnionNetUtils.h"

UUnionNetUtils::UUnionNetUtils() {
}

ELobbyErrorType UUnionNetUtils::ToLobbyErrorType(const FOnlineErrorBP& Error) {
    return ELobbyErrorType::Success;
}

void UUnionNetUtils::SearchLobbyByHostUserId(const UObject* WorldContextObject, int32 LocalUserNum, const FUniqueNetIdRepl& HostProductUserId, FLobbySubsystemOnSearchLobbyComplete OnComplete) {
}

void UUnionNetUtils::MakeLobbyOperationResultByLobbyErrorType(ELobbyErrorType LobbyErrorType, FLobbyOperationResult& OutResult) {
}

bool UUnionNetUtils::IsValidLobbyId(const FLobbyId& LobbyId) {
    return false;
}

int64 UUnionNetUtils::GetTickMilliseconds() {
    return 0;
}

FString UUnionNetUtils::GetServerStagingName() {
    return TEXT("");
}

FString UUnionNetUtils::GetNetworkSettingName() {
    return TEXT("");
}

FString UUnionNetUtils::GetMatchSettingString(const UObject* WorldContextObject) {
    return TEXT("");
}

FString UUnionNetUtils::GetEOSRelayControlString(const UObject* WorldContextObject) {
    return TEXT("");
}

FString UUnionNetUtils::GetComputerNameString() {
    return TEXT("");
}

void UUnionNetUtils::Debug_P2P_UpdateConnectMemberSquad(const UObject* WorldContextObject, const ULobbyContextBase* LobbyContext) {
}

void UUnionNetUtils::Debug_P2P_StartConnectSquad(const UObject* WorldContextObject) {
}

void UUnionNetUtils::Debug_P2P_StartConnectionP2P(const UObject* WorldContextObject, const FLobbyId& LobbyId) {
}

void UUnionNetUtils::Debug_P2P_StartConnect(const UObject* WorldContextObject, bool bIsHost) {
}

void UUnionNetUtils::Debug_P2P_EndConnectSquadRequest(const UObject* WorldContextObject, const ULobbyContextBase* LobbyContext) {
}

void UUnionNetUtils::Debug_P2P_DelConnectMemberSquad(const UObject* WorldContextObject, const ULobbyMemberContextBase* MemberContext) {
}

void UUnionNetUtils::Debug_Lobby_SyncInitMemberAttributes(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, const FLobbySubsystemOnLobbyOperationComplete& OnComplete) {
}

void UUnionNetUtils::Debug_Lobby_Seach(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, const FLobbySubsystemOnSearchLobbyComplete& OnComplete) {
}

void UUnionNetUtils::Debug_Lobby_JoinByLobbyId(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, const FLobbyId& LobbyId, const FLobbySubsystemOnLobbyOperationComplete& OnComplete) {
}

void UUnionNetUtils::Debug_Lobby_Join(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, ULobbyJoinInfo* JoinInfo, const FLobbySubsystemOnLobbyOperationComplete& OnComplete) {
}

void UUnionNetUtils::Debug_Lobby_Exit(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, const FLobbySubsystemOnLobbyOperationComplete& OnComplete) {
}

void UUnionNetUtils::Debug_Lobby_Create(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, bool bLocked, bool bPublic, bool bHostMigration, const FString& Password, const FLobbySubsystemOnLobbyOperationComplete& OnComplete) {
}

void UUnionNetUtils::CRM_PutConnectionError_Minimum(const UObject* WorldContextObject, int32 ErrorNumber, int32 ErrorCode, const FString& ErrorMessage) {
}

void UUnionNetUtils::CRM_PutConnectionError_Full(const UObject* WorldContextObject, int32 ErrorNumber, int32 ErrorCode, const FString& ErrorMessage, const FString& OpponentUserId, const FString& entryRaceId, int32 UserSlotId, int32 DisconnectionReason, const FString& DisconnectionReasonInfo, const FString& ApiName, int32 Elapsed) {
}

void UUnionNetUtils::CRM_PutConnectionError_Api(const UObject* WorldContextObject, int32 ErrorNumber, int32 ErrorCode, const FString& ErrorMessage, const FString& ApiName, int32 Elapsed) {
}

void UUnionNetUtils::ConvertUserIdToString(const FUniqueNetIdRepl& UserId, FString& OutUserIdString) {
}

void UUnionNetUtils::ConvertLobbyIdToString(const FLobbyId& LobbyId, FString& OutUserIdString) {
}

bool UUnionNetUtils::CompareUserId(const FUniqueNetIdRepl& UserId1, const FUniqueNetIdRepl& UserId2) {
    return false;
}

bool UUnionNetUtils::CompareLobbyId(const FLobbyId& LobbyId, const FLobbyId& OtherLobbyId) {
    return false;
}

bool UUnionNetUtils::CheckOnlineSettingsForLobby(const UObject* WorldContextObject, int32 LocalUserNum, const FLobbyId& LobbyId, FLobbyDoesMatchOnlineSettings& OutDoesMatch) {
    return false;
}


