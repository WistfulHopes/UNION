#include "LobbyLegendCompeSequence.h"
#include "LegendCompeLobbyControlComponent.h"

ALobbyLegendCompeSequence::ALobbyLegendCompeSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->FakeLobbyPlayerIndexList.AddDefaulted(12);
    this->NetLobbyControlComponentClass = ULegendCompeLobbyControlComponent::StaticClass();
}


