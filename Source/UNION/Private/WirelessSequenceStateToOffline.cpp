#include "WirelessSequenceStateToOffline.h"

UWirelessSequenceStateToOffline::UWirelessSequenceStateToOffline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldCleanupP2PConnection = true;
    this->bShouldCleanupPublicLobby = true;
    this->bShouldCleanupPrivateLobby = true;
}

void UWirelessSequenceStateToOffline::OnCompleteInitializeWirelessMode(UWirelessLobbyContext* WirelessLobbyContext, const FOnlineErrorBP& Error) {
}


