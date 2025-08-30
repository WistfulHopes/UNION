#include "OnlineMatchSubsystem.h"

UOnlineMatchSubsystem::UOnlineMatchSubsystem() {
    this->FontObject = NULL;
}

bool UOnlineMatchSubsystem::ShutdownMatch() {
    return false;
}

void UOnlineMatchSubsystem::SetupLocalUser(const FUniqueNetIdRepl LocalUserId) {
}

void UOnlineMatchSubsystem::SetHostRemoteUser(const FUniqueNetIdRepl UserId) {
}

void UOnlineMatchSubsystem::SetHostLocalUser() {
}

void UOnlineMatchSubsystem::OnCheckNetworkOnlineComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

bool UOnlineMatchSubsystem::IsSetupLocalUser() const {
    return false;
}

bool UOnlineMatchSubsystem::IsEnableOnlineSinglePlay() {
    return false;
}

FUniqueNetIdRepl UOnlineMatchSubsystem::GetOnlineIndexToPeerUserId(int32 OnlineIndex) const {
    return FUniqueNetIdRepl{};
}

int32 UOnlineMatchSubsystem::GetOnlineIndex(const FUniqueNetIdRepl& UserId) const {
    return 0;
}

int32 UOnlineMatchSubsystem::GetOnlineConnectPeerCount() const {
    return 0;
}

void UOnlineMatchSubsystem::ClearLocalUser() {
}


