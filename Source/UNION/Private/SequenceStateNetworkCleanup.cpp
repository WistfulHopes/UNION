#include "SequenceStateNetworkCleanup.h"

USequenceStateNetworkCleanup::USequenceStateNetworkCleanup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldCleanupP2PConnection = false;
    this->bShouldCleanupPublicLobby = false;
    this->bShouldCleanupPrivateLobby = false;
    this->bShouldEOSLogout = false;
    this->TimeoutTime = 60.00f;
}

void USequenceStateNetworkCleanup::OnCompleteExitLobby(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error) {
}

void USequenceStateNetworkCleanup::OnCompleteEOSLogout(int32 LocalUserNum, bool bWasSuccessful) {
}


