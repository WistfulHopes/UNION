#include "LobbyWirelessSequence2.h"
#include "LobbySequenceP2PConnectionLocal.h"
#include "WirelessLobbyControlComponent.h"

ALobbyWirelessSequence2::ALobbyWirelessSequence2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->PlayerPositionControlTable.AddDefaulted(12);
    this->NetLobbyControlComponentClass = UWirelessLobbyControlComponent::StaticClass();
    this->P2PConnectionClass = ULobbySequenceP2PConnectionLocal::StaticClass();
    this->WirelessSequence = NULL;
}


