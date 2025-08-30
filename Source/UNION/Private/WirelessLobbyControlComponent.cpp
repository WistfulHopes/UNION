#include "WirelessLobbyControlComponent.h"
#include "WirelessLobbyContext.h"

UWirelessLobbyControlComponent::UWirelessLobbyControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyContextClass = UWirelessLobbyContext::StaticClass();
}

void UWirelessLobbyControlComponent::OnCompleteJoinWirelessSession(UWirelessLobbyContext* LobbyContext, const FOnlineErrorBP& Error) {
}

void UWirelessLobbyControlComponent::OnCompleteCreateWirelessSession(UWirelessLobbyContext* LobbyContext, const FOnlineErrorBP& Error) {
}

void UWirelessLobbyControlComponent::InitializeWirelessMode(int32 LocalUserNum, const FOnWirelessModeOperarionComplete& OnComplete) {
}

void UWirelessLobbyControlComponent::FinalizeWirelessMode(const FOnWirelessModeOperarionComplete& OnComplete) {
}


