#include "LobbyEntryCheckState.h"

ULobbyEntryCheckState::ULobbyEntryCheckState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("LobbyEntryCheckState");
}

void ULobbyEntryCheckState::SetOnlyCheckRomVersion(bool bInEnable) {
}

void ULobbyEntryCheckState::OnRomVersionComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void ULobbyEntryCheckState::OnQueryServerTimeComplete(FDateTime UtcTimestamp, bool Error) {
}

void ULobbyEntryCheckState::OnCheckFairPointComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}


