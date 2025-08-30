#include "LobbyLegendCompeSequence2.h"
#include "LegendCompeLobbyControlComponent.h"

ALobbyLegendCompeSequence2::ALobbyLegendCompeSequence2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->PlayerPositionControlTable.AddDefaulted(12);
    this->NetLobbyControlComponentClass = ULegendCompeLobbyControlComponent::StaticClass();
}


