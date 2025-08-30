#include "RankMatchLobbyControlComponent.h"
#include "RankMatchLobbyContext.h"

URankMatchLobbyControlComponent::URankMatchLobbyControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyContextClass = URankMatchLobbyContext::StaticClass();
    this->MatchmakingContextClass = NULL;
}


