#include "FestaLobbyControlComponent.h"
#include "FestaLobbyContext.h"

UFestaLobbyControlComponent::UFestaLobbyControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyContextClass = UFestaLobbyContext::StaticClass();
    this->MatchmakingContextClass = NULL;
}


