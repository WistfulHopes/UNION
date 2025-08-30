#include "LobbyRankMatchSequence.h"
#include "RankMatchLobbyControlComponent.h"

ALobbyRankMatchSequence::ALobbyRankMatchSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->FakeLobbyPlayerIndexList.AddDefaulted(12);
    this->NetLobbyControlComponentClass = URankMatchLobbyControlComponent::StaticClass();
    this->LobbySearchTime = 0.00f;
    this->LobbySearchCancelLimitTime = 20.00f;
}


