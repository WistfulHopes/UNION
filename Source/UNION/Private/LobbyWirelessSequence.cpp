#include "LobbyWirelessSequence.h"
#include "LobbySequenceP2PConnectionLocal.h"

ALobbyWirelessSequence::ALobbyWirelessSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->FakeLobbyPlayerIndexList.AddDefaulted(12);
    this->P2PConnectionClass = ULobbySequenceP2PConnectionLocal::StaticClass();
}


