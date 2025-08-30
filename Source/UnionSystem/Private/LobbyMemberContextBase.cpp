#include "LobbyMemberContextBase.h"

ULobbyMemberContextBase::ULobbyMemberContextBase() {
    this->LobbyContext = NULL;
    this->TransactionParam = NULL;
}

void ULobbyMemberContextBase::SetupLocalMemberAttributeInternal_Implementation() {
}

void ULobbyMemberContextBase::OnUpdateMemberSelfComplete(bool bSuccessful, const FLobbyOperationResult& Result, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void ULobbyMemberContextBase::OnMemberUpdateInternal_Implementation() {
}

bool ULobbyMemberContextBase::IsValetCom() const {
    return false;
}

bool ULobbyMemberContextBase::IsLocalUser() const {
    return false;
}

bool ULobbyMemberContextBase::IsLobbyHost() const {
    return false;
}

bool ULobbyMemberContextBase::IsCom() const {
    return false;
}

void ULobbyMemberContextBase::GetUserIdString(FString& OutResult) const {
}

void ULobbyMemberContextBase::GetUserIdRepl(FUniqueNetIdRepl& OutResult) const {
}

bool ULobbyMemberContextBase::GetSystemMiscVersions(int32& romType, int32& RomVersion, int32& MasterDataVersion) const {
    return false;
}

int32 ULobbyMemberContextBase::GetLobbyMemberIndex() const {
    return 0;
}

FString ULobbyMemberContextBase::GetInternalUserId() const {
    return TEXT("");
}

bool ULobbyMemberContextBase::GetAppUserBaseData(FAppUserBaseData& OutAppUserBaseData) const {
    return false;
}

bool ULobbyMemberContextBase::EndTransaction_NoCallback() {
    return false;
}

bool ULobbyMemberContextBase::EndTransaction(FLobbySubsystemOnLobbyOperationComplete OnComplete) {
    return false;
}

bool ULobbyMemberContextBase::Compare(ULobbyMemberContextBase* Other) const {
    return false;
}

bool ULobbyMemberContextBase::BeginTransaction() {
    return false;
}


