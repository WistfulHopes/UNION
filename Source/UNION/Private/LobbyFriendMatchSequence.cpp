#include "LobbyFriendMatchSequence.h"
#include "FriendMatchLobbyControlComponent.h"

ALobbyFriendMatchSequence::ALobbyFriendMatchSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->FakeLobbyPlayerIndexList.AddDefaulted(12);
    this->NetLobbyControlComponentClass = UFriendMatchLobbyControlComponent::StaticClass();
}


