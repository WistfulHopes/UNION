#include "FriendMatchLobbyContext.h"
#include "FriendMatchLobbyMemberContext.h"

UFriendMatchLobbyContext::UFriendMatchLobbyContext() {
    this->LobbyMemberContextClass = UFriendMatchLobbyMemberContext::StaticClass();
}

void UFriendMatchLobbyContext::OnKickBlockMemberComplete(bool bSuccessful, const FLobbyOperationResult& Result) {
}


