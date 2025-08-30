#include "WirelessSequenceStateToOnline.h"

UWirelessSequenceStateToOnline::UWirelessSequenceStateToOnline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeoutTime = 60.00f;
}

void UWirelessSequenceStateToOnline::OnCompleteFinalizeWirelessMode(UWirelessLobbyContext* WirelessLobbyContext, const FOnlineErrorBP& Error) {
}


