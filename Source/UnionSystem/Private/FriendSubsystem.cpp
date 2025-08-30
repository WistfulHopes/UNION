#include "FriendSubsystem.h"

UFriendSubsystem::UFriendSubsystem() {
}

bool UFriendSubsystem::TerraGetUserSearchRequest(const TArray<FString>& TargetUserIds, int32 selectFlg, UFriendSubsystem::FAfterUserSearchDelegate Delegate, EFriendsListUserSearchCacheType CacheType) {
    return false;
}

bool UFriendSubsystem::TerraFriendUnfriend(const FString& TargetID, UFriendSubsystem::FOnTerraFriendUnfriendComplete OnCompleteDelegate) {
    return false;
}

bool UFriendSubsystem::TerraFriendsRequest(const TArray<FString>& targetIds, UFriendSubsystem::FOnTerraFriendRequestComplete OnCompleteDelegate) {
    return false;
}

bool UFriendSubsystem::TerraFriendRequestCancel(const FString& TargetID, UFriendSubsystem::FOnTerraFriendRequestCancelComplete OnCompleteDelegate) {
    return false;
}

bool UFriendSubsystem::TerraFriendRequestByUserSearchData(const TArray<FCommon_UserSearchData>& UserSearchData, UFriendSubsystem::FOnTerraFriendRequestComplete OnCompleteDelegate) {
    return false;
}

bool UFriendSubsystem::TerraFriendRequest(const FString& TargetID, UFriendSubsystem::FOnTerraFriendRequestComplete OnCompleteDelegate) {
    return false;
}

bool UFriendSubsystem::TerraFriendReject(const FString& TargetID, UFriendSubsystem::FOnTerraFriendRejectComplete OnCompleteDelegate) {
    return false;
}

bool UFriendSubsystem::TerraFriendAccept(const FString& TargetID, UFriendSubsystem::FOnTerraFriendAcceptComplete OnCompleteDelegate) {
    return false;
}

void UFriendSubsystem::SetReceivedLobbyInvitationCount(int32 LobbyInvitationCount) {
}

void UFriendSubsystem::SetCacheExpiration(int32 Minutes) {
}

void UFriendSubsystem::ResetReceivedLobbyInvitationCount() {
}

void UFriendSubsystem::ResetAllRequestDelegate() {
}

void UFriendSubsystem::RequestCheckFairPoint() {
}

void UFriendSubsystem::RefreshBlockPlayers(UFriendSubsystem::FOnReadBlockPlayersComplete OnComplete) {
}

void UFriendSubsystem::QueryReadPlatformFriends(int32 LocalUserNum, UFriendSubsystem::FOnReadFriendsComplete OnComplete) {
}

void UFriendSubsystem::QueryReadPlatformBlockPlayers(UFriendSubsystem::FOnReadBlockPlayersComplete OnComplete) {
}

void UFriendSubsystem::OnUnfriendByPFBlockingCompleted(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnUnfriendByBlockingCompleted(bool bWasSuccessful, int32 ErrorCode) {
}

void UFriendSubsystem::OnTerraGetUserSearchCompleteSearchPlayerID(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnTerraGetUserSearchCompleteSearchLobbyID(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnTerraGetUserSearchCompleteRecentPlayer(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnTerraGetUserSearchCompletePFFriend(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnTerraGetUserSearchCompleteLobbyInvitation(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnTerraGetUserSearchCompleteBlockPlayer(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnTerraGetUserSearchCheckPlayerNameComplete(bool bCheckPlayerNameSuccess, const TArray<FString>& PlayerNameList, EFriendsListUserSearchCacheType CacheType, EResponseCodeAbstract ResponseCodeAbstract, bool bSearchPlayerDataSuccess) {
}

void UFriendSubsystem::OnTerraFriendRequestComplete(bool bWasSuccessful, int32 ErrorCode) {
}

void UFriendSubsystem::OnTerraFriendListCheckPlayerNameComplete(bool bSuccess, const TArray<FString>& PlayerNameList, bool bGetTerraFriendListError) {
}

void UFriendSubsystem::OnTerraFriendCommonComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnRequestCancelByBlockingCompleted(bool bWasSuccessful, int32 ErrorCode) {
}

void UFriendSubsystem::OnProductUserIdFriendRequestConvertComplete(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds) {
}

void UFriendSubsystem::OnPlatformFriendIdMappingsComplete(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds) {
}

void UFriendSubsystem::OnLobbyInvitationGetUserSearchComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnGetTerraFriendListComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnGetTerraFriendListCheckPlayerNameComplete(bool bGetTerraFriendListError) {
}

void UFriendSubsystem::OnGetTerraFriendLastDateComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnConvertPuidToTerraIdComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnConvertBlockPlayerPuidToTerraIdComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnCompleteRequestCheckFairPoint(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UFriendSubsystem::OnBlockPlayerIdMappingsComplete(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds) {
}

void UFriendSubsystem::MinusReceivedLobbyInvitationCount() {
}

void UFriendSubsystem::LobbyInvitationGetUserSearchData(FUserGetUserSearchRequest SearchRequest, UFriendSubsystem::FOnLobbyInvitationAfterUserSearchDelegate Delegate) {
}

bool UFriendSubsystem::IsValidLobbyInvitation() {
    return false;
}

bool UFriendSubsystem::IsTerraFriend(const FString& ProductUserId) {
    return false;
}

bool UFriendSubsystem::IsSetPlatformBlockPlayers() {
    return false;
}

bool UFriendSubsystem::IsPlatformFriend(const FString& ProductUserId) {
    return false;
}

bool UFriendSubsystem::IsFriendRequestBlocked(int32 InFriendRequestErrorCode) {
    return false;
}

bool UFriendSubsystem::IsFriend(const FString& ProductUserId) {
    return false;
}

bool UFriendSubsystem::IsFinishedForceUpdateFriendList() {
    return false;
}

bool UFriendSubsystem::IsEnableGetUserProfileGDK() {
    return false;
}

bool UFriendSubsystem::IsBlocked(const FString& ProductUserId) {
    return false;
}

bool UFriendSubsystem::IsAcceptWaitPlayerExist() {
    return false;
}

bool UFriendSubsystem::GetUserSearchDataByProductUserId(const FString& ProductUserId, FCommon_UserSearchData& OutUserSearchData) const {
    return false;
}

void UFriendSubsystem::GetUserProfileGDK(int32 LocalUserNum, TArray<FString>& XuidStrings, UFriendSubsystem::FOnGetUserProfileComplete OnComplete) {
}

int32 UFriendSubsystem::GetTerraFriendNum() {
    return 0;
}

bool UFriendSubsystem::GetTerraFriendList(UFriendSubsystem::FOnGetTerraFriendListComplete OnCompleteDelegate) {
    return false;
}

void UFriendSubsystem::GetTerraFriendCallback(bool bWasSuccessful, const FFriendGetFriendListResponse& list) {
}

void UFriendSubsystem::GetRecentPlayerStatsSimple(UFriendSubsystem::FAfterUserSearchDelegate OnCompleteDelegate) {
}

bool UFriendSubsystem::GetRecentPlayerList(TMap<FString, FString>& OutRecentPlayers) {
    return false;
}

int32 UFriendSubsystem::GetReceivedLobbyInvitationCount() const {
    return 0;
}

ECrossplayPlatform UFriendSubsystem::GetPlatformTypeByStringData(const FString& InPlatformStr) {
    return ECrossplayPlatform::Xbox;
}

bool UFriendSubsystem::GetPlatformFriendList(TArray<FUniqueNetIdRepl>& OutPlatformFriendList) const {
    return false;
}

bool UFriendSubsystem::GetPlatformFriendDisplayName(const FUniqueNetIdRepl& UserId, FString& OutResult) const {
    return false;
}

bool UFriendSubsystem::GetNotifyFriendInvite() const {
    return false;
}

void UFriendSubsystem::GetFriendInfo(const FString& ProductUserId, UFriendSubsystem::FOnGetFriendComplete OnCompleted) {
}

EBlockPlayerState UFriendSubsystem::GetBlockPlayerState(const FString& ProductUserId) {
    return EBlockPlayerState::None;
}

void UFriendSubsystem::GetBlockPlayerList(TArray<FString>& OutBlockPlayers, EBlockPlayerFilter Filter) {
}

EAppSupportedPlatform UFriendSubsystem::GetAppSupportedPlatformByStringData(const FString& InPlatformStr) {
    return EAppSupportedPlatform::PC;
}

bool UFriendSubsystem::ForceUpdateFriendList() {
    return false;
}

void UFriendSubsystem::DeleteRecentPlayer(const FString& ProductUserId) {
}

void UFriendSubsystem::DeleteBlockPlayer(const FString& ProductUserId) {
}

void UFriendSubsystem::DebugToggleBlockPlayerState(const FString& ProductUserId) {
}

bool UFriendSubsystem::ConvertPlatformIdToUserIdRequest(TArray<FUniqueNetIdRepl>& IdList, UFriendSubsystem::FOnExternalIdMappingsComplete OnComplete, bool ForceConvert) {
    return false;
}

bool UFriendSubsystem::ContainsBlockPlayer(const TArray<FString>& ProductUserIds, TArray<FString>& OutBlockPlayerIds) {
    return false;
}

void UFriendSubsystem::ClearRecentPlayer() {
}

void UFriendSubsystem::ClearFinishedForceUpdateFriendListFlag() {
}

void UFriendSubsystem::CallOnGetFriendInfoComplete(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds) {
}

void UFriendSubsystem::AddRecentPlayers(int32 LocalUserNum, TArray<FUniqueNetIdRepl>& IdList, const FString& Date) {
}

void UFriendSubsystem::AddReceivedLobbyInvitationCount() {
}

void UFriendSubsystem::AddBlockPlayer(const FString& ProductUserId, UFriendSubsystem::FOnAddBlockPlayerComplete OnComplete) {
}


