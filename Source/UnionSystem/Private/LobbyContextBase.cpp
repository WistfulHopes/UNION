#include "LobbyContextBase.h"

ULobbyContextBase::ULobbyContextBase() {
    this->MaxLobbyMember = 12;
    this->LobbyMemberContextClass = NULL;
    this->TransactionParam = NULL;
}

void ULobbyContextBase::WaitAddMemberInitComplete(FLobbyContextOnAddMemberInitComplete OnComplete) {
}

FString ULobbyContextBase::ToString() const {
    return TEXT("");
}

void ULobbyContextBase::SetPublic(bool bInPublic) {
}

void ULobbyContextBase::SetLocked(bool bInLock) {
}

bool ULobbyContextBase::SendSessionInvite(const FUniqueNetIdRepl& FriendId) {
    return false;
}

void ULobbyContextBase::SearchByShortLobbyIdNoLobbyType(const FString& ShortLobbyId) {
}

void ULobbyContextBase::SearchByShortLobbyId(const FString& ShortLobbyId) {
}

void ULobbyContextBase::ResetShortLobbyId() {
}

void ULobbyContextBase::RemoveShortLobbyId() {
}

void ULobbyContextBase::RemoveComMemberContext() {
}

void ULobbyContextBase::OnUpdateLobbyComplete(bool bSuccessful, const FLobbyOperationResult& Result, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void ULobbyContextBase::OnSearchLobbyCompletedInternal_Implementation(bool bSuccessful, const FSearchLobbyResult& Result) {
}

void ULobbyContextBase::OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo) {
}

void ULobbyContextBase::OnMemberUpdateInternal_Implementation(ULobbyMemberContextBase* MemberContext) {
}

void ULobbyContextBase::OnMemberUpdate(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId) {
}

void ULobbyContextBase::OnMemberPromoteInternal_Implementation(ULobbyMemberContextBase* MemberContext) {
}

void ULobbyContextBase::OnMemberPromote(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId, const FUniqueNetIdRepl& NewLeaderId) {
}

void ULobbyContextBase::OnMemberDisconnectInternal_Implementation(ULobbyMemberContextBase* MemberContext, bool bWasKicked) {
}

void ULobbyContextBase::OnMemberDisconnect(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, bool bWasKicked) {
}

void ULobbyContextBase::OnMemberConnectInternal_Implementation(ULobbyMemberContextBase* MemberContext) {
}

void ULobbyContextBase::OnMemberConnect(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId) {
}

void ULobbyContextBase::OnLobbyUpdateInternal_Implementation() {
}

void ULobbyContextBase::OnLobbyUpdate(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId) {
}

void ULobbyContextBase::OnLobbyDeleteInternal_Implementation() {
}

void ULobbyContextBase::OnLobbyDelete(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId) {
}

void ULobbyContextBase::OnKickMemberComplete(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ULobbyContextBase::OnKeepAliveShortLobbyIdComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void ULobbyContextBase::OnGetLobbyHostCallbackInternal(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract) {
}

void ULobbyContextBase::OnDisconnectLobbyCompletedInternal_Implementation(bool bSuccessful, const FOnlineErrorBP& Error) {
}

void ULobbyContextBase::OnDestroiedSession(bool bSuccessful) {
}

void ULobbyContextBase::OnDeleteLobbyCompletedInternal_Implementation(bool bSuccessful, const FOnlineErrorBP& Error) {
}

void ULobbyContextBase::OnDeleteLobbyComplete(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ULobbyContextBase::OnCreateShortLobbyIdComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void ULobbyContextBase::OnCreateLobbyCompletedInternal_Implementation(bool bSuccessful, const FOnlineErrorBP& Error) {
}

void ULobbyContextBase::OnConnectLobbyCompletedInternal_Implementation(bool bSuccessful, const FOnlineErrorBP& Error) {
}

void ULobbyContextBase::KickMember(ULobbyMemberContextBase* MemberContext, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void ULobbyContextBase::KeepAliveShortLobbyId() {
}

void ULobbyContextBase::Join(const FLobbyId& LobbyId, const FString& Password) {
}

bool ULobbyContextBase::IsSameLobby(const ULobbyContextBase* OtherContext) const {
    return false;
}

bool ULobbyContextBase::IsLobbyHostLocalMember() const {
    return false;
}

bool ULobbyContextBase::IsJoining() const {
    return false;
}

void ULobbyContextBase::InitializeNoLobbyInfo(int32 LocalUserNum) {
}

void ULobbyContextBase::Initialize(int32 LocalUserNum, const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& OwnerUserId, const FLobbyId& LobbyId) {
}

bool ULobbyContextBase::HasSession() const {
    return false;
}

void ULobbyContextBase::GetSortedAllMembersByLobbyMemberIndex(TArray<ULobbyMemberContextBase*>& OutResult) const {
}

float ULobbyContextBase::GetShortLobbyIdExpirationTimeSec() const {
    return 0.0f;
}

FString ULobbyContextBase::GetShortLobbyId() const {
    return TEXT("");
}

void ULobbyContextBase::GetOwnerUserId(FUniqueNetIdRepl& OutUserId) const {
}

ULobbyMemberContextBase* ULobbyContextBase::GetMemberFromLobbyMemberIndex(int32 LobbyMemberIndex) const {
    return NULL;
}

int32 ULobbyContextBase::GetMemberCount() const {
    return 0;
}

ULobbyMemberContextBase* ULobbyContextBase::GetMember(const FUniqueNetIdRepl& MemberId) const {
    return NULL;
}

int32 ULobbyContextBase::GetMaxLobbyMember() const {
    return 0;
}

void ULobbyContextBase::GetLocalUserId(FUniqueNetIdRepl& OutUserId) const {
}

ULobbyMemberContextBase* ULobbyContextBase::GetLocalMemberDefaultDummy() {
    return NULL;
}

ULobbyMemberContextBase* ULobbyContextBase::GetLocalMember() const {
    return NULL;
}

bool ULobbyContextBase::GetLobbyTypeByLobbyId(int32 InLocalUserNum, const FLobbyId& InLobbyId, int64& OutLobbyType) const {
    return false;
}

FLobbyId ULobbyContextBase::GetLobbyId() const {
    return FLobbyId{};
}

bool ULobbyContextBase::GetHostUserIdStringByLobbyId(int32 InLocalUserNum, const FLobbyId& InLobbyId, FString& OutHostUserId) {
    return false;
}

ULobbyMemberContextBase* ULobbyContextBase::GetHostMember() const {
    return NULL;
}

int32 ULobbyContextBase::GetHasValidInitDataMemerContextCount() const {
    return 0;
}

void ULobbyContextBase::GetAllMemberUserIds(TArray<FString>& OutResult) const {
}

void ULobbyContextBase::GetAllMembers(TArray<ULobbyMemberContextBase*>& OutResult) const {
}

void ULobbyContextBase::GetAllMemberInternalUserIds(TArray<FString>& OutResult) const {
}

void ULobbyContextBase::Finalize() {
}

void ULobbyContextBase::Exit() {
}

bool ULobbyContextBase::EndTransaction_NoCallback() {
    return false;
}

bool ULobbyContextBase::EndTransaction(FLobbySubsystemOnLobbyOperationComplete OnComplete) {
    return false;
}

bool ULobbyContextBase::DestroySession(const FPlatformLobbySessionOperationComplete& OnComplete) {
    return false;
}

void ULobbyContextBase::Destroy() {
}

void ULobbyContextBase::CreateSimple(bool bLocked, bool bPublic, bool bHostMigration, const FString& Password) {
}

void ULobbyContextBase::CreateShortLobbyId(FLobbyContextOnCreateShortLobbyIdComplete OnComplete) {
}

bool ULobbyContextBase::CreateSession(const FPlatformLobbySessionOperationComplete& OnComplete) {
    return false;
}

void ULobbyContextBase::Create(ULobbyTransactionParam* Param) {
}

void ULobbyContextBase::ClearAllLobbyContextDelegates() {
}

bool ULobbyContextBase::BeginTransaction() {
    return false;
}


