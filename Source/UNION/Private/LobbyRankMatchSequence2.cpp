#include "LobbyRankMatchSequence2.h"
#include "RankMatchLobbyControlComponent.h"

ALobbyRankMatchSequence2::ALobbyRankMatchSequence2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->PlayerPositionControlTable.AddDefaulted(12);
    this->NetLobbyControlComponentClass = URankMatchLobbyControlComponent::StaticClass();
    this->LobbySearchTime = 0.00f;
    this->LobbySearchCancelLimitTime = 20.00f;
}


