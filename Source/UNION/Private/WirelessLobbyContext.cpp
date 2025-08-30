#include "WirelessLobbyContext.h"
#include "WirelessLobbyMemberContext.h"

UWirelessLobbyContext::UWirelessLobbyContext() {
    this->LobbyMemberContextClass = UWirelessLobbyMemberContext::StaticClass();
}

bool UWirelessLobbyContext::SyncLobbyContextData() {
    return false;
}

bool UWirelessLobbyContext::SendReadyCheck() {
    return false;
}

bool UWirelessLobbyContext::SendGoToRace() {
    return false;
}

void UWirelessLobbyContext::SearchWirelessSession(const FWirelessLobbyContextSearchSettings& SearchSettings, UWirelessLobbyContext::FOnSearchComplete OnComplete) {
}

void UWirelessLobbyContext::ResetReadyCheck() {
}

void UWirelessLobbyContext::JoinWirelessSession(ULobbyJoinInfo* LobbyJoinInfo, UWirelessLobbyContext::FOnOperationComplete OnComplete) {
}

void UWirelessLobbyContext::ExitWirelessSession(UWirelessLobbyContext::FOnOperationComplete OnComplete) {
}

void UWirelessLobbyContext::CreateWirelessSession(const FWirelessLobbyContextCreateSettings& CreateSettings, UWirelessLobbyContext::FOnOperationComplete OnComplete) {
}


