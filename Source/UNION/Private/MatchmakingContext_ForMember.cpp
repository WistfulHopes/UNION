#include "MatchmakingContext_ForMember.h"
#include "DummyMatchmakingMemberContext.h"

UMatchmakingContext_ForMember::UMatchmakingContext_ForMember() {
    this->LobbyMemberContextClass = UDummyMatchmakingMemberContext::StaticClass();
    this->OwnerLobbyContext = NULL;
}

void UMatchmakingContext_ForMember::InitializeWithOwnerLobby(UCommonLobbyContext* LobbyContext, bool bIsPublicLobby) {
}


