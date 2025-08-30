#include "FriendMatchLobbyControlComponent.h"
#include "FriendMatchLobbyContext.h"

UFriendMatchLobbyControlComponent::UFriendMatchLobbyControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyContextClass = UFriendMatchLobbyContext::StaticClass();
}


